/*
 * Copyright (C) 2014 Guitarix project MOD project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


////////////////////////////// LOCAL INCLUDES //////////////////////////

#include "gx_common.h"      // faust support and denormal protection (SSE)
#include "gx_colwah.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "wah.h"    // dsp class generated by faust -> dsp2cc
#include "gx_bypass.cc"     // bypass ramping

////////////////////////////// PLUG-IN CLASS ///////////////////////////

#define declare(n) namespace n { PluginLV2 *plugin(); }

declare(colwah);
declare(dallaswah);
declare(foxwah);
declare(jenwah);
declare(maestrowah);
declare(selwah);
declare(voxwah);

static plug wah_model [] = {
    colwah::plugin, //0
    dallaswah::plugin, //1
    foxwah::plugin, //2
    jenwah::plugin, //3
    maestrowah::plugin, //4
    selwah::plugin, //5
    voxwah::plugin, //6
};

static const size_t WAH_COUNT = sizeof(wah_model) / sizeof(wah_model[0]);


namespace colwah {

class Gx_colwah_
{
private:
  GxBypass                     bp;
  float*                       bypass;
  // pointer to buffer
  float*      output;
  float*      input;
  // pointer to dsp class
  PluginLV2*                   wah[WAH_COUNT];
  float*                       wahh_model;
  uint32_t                     wah_model_;
  uint32_t                     wah_max;
  // private functions
  inline void run_dsp_(uint32_t n_samples);
  inline void connect_(uint32_t port,void* data);
  inline void init_dsp_(uint32_t rate);
  inline void connect_all__ports(uint32_t port, void* data);
  inline void activate_f();
  inline void clean_up();
  inline void deactivate_f();

public:
  // LV2 Descriptor
  static const LV2_Descriptor descriptor;
  // static wrapper to private functions
  static void deactivate(LV2_Handle instance);
  static void cleanup(LV2_Handle instance);
  static void run(LV2_Handle instance, uint32_t n_samples);
  static void activate(LV2_Handle instance);
  static void connect_port(LV2_Handle instance, uint32_t port, void* data);
  static LV2_Handle instantiate(const LV2_Descriptor* descriptor,
                                double rate, const char* bundle_path,
                                const LV2_Feature* const* features);
  Gx_colwah_();
  ~Gx_colwah_();
};

// constructor
Gx_colwah_::Gx_colwah_() :
  bp(),
  bypass(0),
  output(NULL),
  input(NULL),
  wahh_model(NULL),
  wah_model_(0)  {};

// destructor
Gx_colwah_::~Gx_colwah_()
{
  for(uint32_t i=0; i<WAH_COUNT; i++) {
    wah[i]->delete_instance(wah[i]);
  }

};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_colwah_::init_dsp_(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
  bp.init_bypass(rate);

  for(uint32_t i=0; i<WAH_COUNT; i++) {
        wah[i] = wah_model[i]();
        wah[i]->set_samplerate(rate, wah[i]);
    }
  wah_max = WAH_COUNT-1;
}

// connect the Ports used by the plug-in class
void Gx_colwah_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    case MODEL:
      wahh_model =  static_cast<float*>(data);
      break;
    case BYPASS: 
      bypass = static_cast<float*>(data); // , 0.0, 0.0, 1.0, 1.0 
      break;
    default:
      break;
    }
}

void Gx_colwah_::activate_f()
{
  // allocate the internal DSP mem
}

void Gx_colwah_::clean_up()
{
  // delete the internal DSP mem
}

void Gx_colwah_::deactivate_f()
{
  // delete the internal DSP mem
}

void Gx_colwah_::run_dsp_(uint32_t n_samples)
{
  if (n_samples< 1) return;
  FAUSTFLOAT buf[n_samples];
  // do inplace processing at default
  if (output != input)
    memcpy(output, input, n_samples*sizeof(float));
  // check if bypass is pressed
  if (!bp.pre_check_bypass(bypass, buf, input, n_samples)) {
    wah_model_ = min(wah_max, static_cast<uint32_t>(*(wahh_model)));
    wah[wah_model_]->mono_audio(static_cast<int>(n_samples), input, output, wah[wah_model_]);
  }
  bp.post_check_bypass(buf, output, n_samples);
}

void Gx_colwah_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  for(uint32_t i=0; i<WAH_COUNT; i++) {
        wah[i]->connect_ports(port, data, wah[i]);
    }
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_colwah_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_colwah_ *self = new Gx_colwah_();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_colwah_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_colwah_*>(instance)->connect_all__ports(port, data);
}

void Gx_colwah_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_colwah_*>(instance)->activate_f();
}

void Gx_colwah_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_colwah_*>(instance)->run_dsp_(n_samples);
}

void Gx_colwah_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_colwah_*>(instance)->deactivate_f();
}

void Gx_colwah_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_colwah_* self = static_cast<Gx_colwah_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_colwah_::descriptor =
{
  GXPLUGIN_URI "#_colwah_",
  Gx_colwah_::instantiate,
  Gx_colwah_::connect_port,
  Gx_colwah_::activate,
  Gx_colwah_::run,
  Gx_colwah_::deactivate,
  Gx_colwah_::cleanup,
  NULL
};


} // end namespace colwah

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

extern "C"
LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &colwah::Gx_colwah_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
