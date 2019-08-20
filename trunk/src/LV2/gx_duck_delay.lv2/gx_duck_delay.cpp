/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose, Steve Poskitt
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
#include "gx_duck_delay.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "duck_delay.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

namespace duck_delay {

class Gx_duck_delay_
{
private:
  // pointer to buffer
  float*      output;
  float*      input;
  // pointer to dsp class
  PluginLV2*  duck_delay;
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
  Gx_duck_delay_();
  ~Gx_duck_delay_();
};

// constructor
Gx_duck_delay_::Gx_duck_delay_() :
  output(NULL),
  input(NULL),
  duck_delay(duck_delay::plugin()) {};

// destructor
Gx_duck_delay_::~Gx_duck_delay_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (duck_delay->activate_plugin !=0)
    duck_delay->activate_plugin(false, duck_delay);
  // delete DSP class
  duck_delay->delete_instance(duck_delay);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_duck_delay_::init_dsp_(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
  duck_delay->set_samplerate(rate, duck_delay); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_duck_delay_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    default:
      break;
    }
}

void Gx_duck_delay_::activate_f()
{
  // allocate the internal DSP mem
  if (duck_delay->activate_plugin !=0)
    duck_delay->activate_plugin(true, duck_delay);
}

void Gx_duck_delay_::clean_up()
{
  // delete the internal DSP mem
  if (duck_delay->activate_plugin !=0)
    duck_delay->activate_plugin(false, duck_delay);
}

void Gx_duck_delay_::deactivate_f()
{
  // delete the internal DSP mem
  if (duck_delay->activate_plugin !=0)
    duck_delay->activate_plugin(false, duck_delay);
}

void Gx_duck_delay_::run_dsp_(uint32_t n_samples)
{
  if (n_samples< 1) return;
  duck_delay->mono_audio(static_cast<int>(n_samples), input, output, duck_delay);
}

void Gx_duck_delay_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  duck_delay->connect_ports(port,  data, duck_delay);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_duck_delay_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_duck_delay_ *self = new Gx_duck_delay_();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_duck_delay_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_duck_delay_*>(instance)->connect_all__ports(port, data);
}

void Gx_duck_delay_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_duck_delay_*>(instance)->activate_f();
}

void Gx_duck_delay_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_duck_delay_*>(instance)->run_dsp_(n_samples);
}

void Gx_duck_delay_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_duck_delay_*>(instance)->deactivate_f();
}

void Gx_duck_delay_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_duck_delay_* self = static_cast<Gx_duck_delay_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_duck_delay_::descriptor =
{
  GXPLUGIN_URI "#_duck_delay_",
  Gx_duck_delay_::instantiate,
  Gx_duck_delay_::connect_port,
  Gx_duck_delay_::activate,
  Gx_duck_delay_::run,
  Gx_duck_delay_::deactivate,
  Gx_duck_delay_::cleanup,
  NULL
};


} // end namespace duck_delay

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

extern "C"
LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &duck_delay::Gx_duck_delay_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
