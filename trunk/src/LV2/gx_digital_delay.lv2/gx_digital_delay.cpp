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
#include "gx_digital_delay.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "digital_delay.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

namespace digital_delay {

class Gx_digital_delay_
{
private:
  LV2_URID_Map* map;   // URID map feature
  GxDDURIs     uris;  // Cache of mapped URIDs
  LV2_Atom_Sequence* control;
  // Variables to keep track of the tempo information sent by the host
  float  bpm;    // Beats per minute (tempo)
  float  speed;  // Transport speed (usually 0=stop, 1=play)
  float* bpm_set;
  float bpm_sync_;
  float* bpm_sync;
  // pointer to buffer
  float*      output;
  float*      input;
  // pointer to dsp class
  PluginLV2*  digital_delay;
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
  static void update_bpm(Gx_digital_delay_* self, const LV2_Atom_Object* obj);
  static void run(LV2_Handle instance, uint32_t n_samples);
  static void activate(LV2_Handle instance);
  static void connect_port(LV2_Handle instance, uint32_t port, void* data);
  static LV2_Handle instantiate(const LV2_Descriptor* descriptor,
                                double rate, const char* bundle_path,
                                const LV2_Feature* const* features);
  Gx_digital_delay_();
  ~Gx_digital_delay_();
};

// constructor
Gx_digital_delay_::Gx_digital_delay_() :
  bpm(0),
  bpm_set(NULL),
  bpm_sync_(0),
  bpm_sync(NULL),
  output(NULL),
  input(NULL),
  digital_delay(digital_delay::plugin()) {};

// destructor
Gx_digital_delay_::~Gx_digital_delay_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (digital_delay->activate_plugin !=0)
    digital_delay->activate_plugin(false, digital_delay);
  // delete DSP class
  digital_delay->delete_instance(digital_delay);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_digital_delay_::init_dsp_(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
  digital_delay->set_samplerate(rate, digital_delay); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_digital_delay_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    case DD_CONTROL:
      control = (LV2_Atom_Sequence*)data;
      break;
    case DD_NOTIFY:
      bpm_set = static_cast<float*>(data);
      break;
    case SYNC:
      bpm_sync = static_cast<float*>(data);
      break;
    default:
      break;
    }
}

void Gx_digital_delay_::activate_f()
{
  // allocate the internal DSP mem
  if (digital_delay->activate_plugin !=0)
    digital_delay->activate_plugin(true, digital_delay);
}

void Gx_digital_delay_::clean_up()
{
  // delete the internal DSP mem
  if (digital_delay->activate_plugin !=0)
    digital_delay->activate_plugin(false, digital_delay);
}

void Gx_digital_delay_::deactivate_f()
{
  // delete the internal DSP mem
  if (digital_delay->activate_plugin !=0)
    digital_delay->activate_plugin(false, digital_delay);
}

void Gx_digital_delay_::run_dsp_(uint32_t n_samples)
{
  if (n_samples< 1) return;
  bpm_sync_ = *(bpm_sync);
  if (bpm_sync_) {
    if (*(bpm_set) != bpm) *(bpm_set) = bpm;
  }
  digital_delay->mono_audio(static_cast<int>(n_samples), input, output, digital_delay);
}

void Gx_digital_delay_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  digital_delay->connect_ports(port,  data, digital_delay);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_digital_delay_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_digital_delay_ *self = new Gx_digital_delay_();
  if (!self)
    {
      return NULL;
    }
  // Scan host features for URID map
  LV2_URID_Map* map = NULL;
  for (int i = 0; features[i]; ++i) {
    if (!strcmp(features[i]->URI, LV2_URID_URI "#map")) {
      map = (LV2_URID_Map*)features[i]->data;
    }
  }
  if (!map) {
    fprintf(stderr, "Host does not support urid:map.\n");
    free(self);
    return NULL;
  }

 // Map URIS
  GxDDURIs* const uris = &self->uris;
  self->map = map;
  uris->atom_Blank          = map->map(map->handle, LV2_ATOM__Blank);
  uris->atom_Float          = map->map(map->handle, LV2_ATOM__Float);
  uris->atom_Object         = map->map(map->handle, LV2_ATOM__Object);
  uris->atom_Path           = map->map(map->handle, LV2_ATOM__Path);
  uris->atom_Resource       = map->map(map->handle, LV2_ATOM__Resource);
  uris->atom_Sequence       = map->map(map->handle, LV2_ATOM__Sequence);
  uris->time_Position       = map->map(map->handle, LV2_TIME__Position);
  uris->time_barBeat        = map->map(map->handle, LV2_TIME__barBeat);
  uris->time_beatsPerMinute = map->map(map->handle, LV2_TIME__beatsPerMinute);
  uris->time_speed          = map->map(map->handle, LV2_TIME__speed);

  self->bpm        = 120.0;

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_digital_delay_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_digital_delay_*>(instance)->connect_all__ports(port, data);
}

void Gx_digital_delay_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_digital_delay_*>(instance)->activate_f();
}

void Gx_digital_delay_::update_bpm(Gx_digital_delay_* self, const LV2_Atom_Object* obj)
{
  const GxDDURIs* uris = &self->uris;

  // Received new transport position/speed
  LV2_Atom *beat = NULL, *bpm = NULL, *speed = NULL;
  lv2_atom_object_get(obj, uris->time_barBeat, &beat,
                      uris->time_beatsPerMinute, &bpm,
                      uris->time_speed, &speed, NULL);
  if (bpm && bpm->type == uris->atom_Float) {
    // Tempo changed, update BPM
    self->bpm = ((LV2_Atom_Float*)bpm)->body;
  }
  if (speed && speed->type == uris->atom_Float) {
    // Speed changed, e.g. 0 (stop) to 1 (play)
    self->speed = ((LV2_Atom_Float*)speed)->body;
  }
}

void Gx_digital_delay_::run(LV2_Handle instance, uint32_t n_samples)
{
  Gx_digital_delay_* self = static_cast<Gx_digital_delay_*>(instance);
  const GxDDURIs* uris = &self->uris;

  // Work forwards in time frame by frame, handling events as we go
  const LV2_Atom_Sequence* in     = self->control;
  for (const LV2_Atom_Event* ev = lv2_atom_sequence_begin(&in->body);
             !lv2_atom_sequence_is_end(&in->body, in->atom.size, ev);
             ev = lv2_atom_sequence_next(ev)) {
    // Check if this event is an Object
    // (or deprecated Blank to tolerate old hosts)
    if (ev->body.type == uris->atom_Object || ev->body.type == uris->atom_Blank) {
      const LV2_Atom_Object* obj = (const LV2_Atom_Object*)&ev->body;
      if (obj->body.otype == uris->time_Position) {
        // Received position information, update
        update_bpm(self, obj);
      }
    }
  }
  // run dsp
  self->run_dsp_(n_samples);
}

void Gx_digital_delay_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_digital_delay_*>(instance)->deactivate_f();
}

void Gx_digital_delay_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_digital_delay_* self = static_cast<Gx_digital_delay_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_digital_delay_::descriptor =
{
  GXPLUGIN_URI "#_digital_delay_",
  Gx_digital_delay_::instantiate,
  Gx_digital_delay_::connect_port,
  Gx_digital_delay_::activate,
  Gx_digital_delay_::run,
  Gx_digital_delay_::deactivate,
  Gx_digital_delay_::cleanup,
  NULL
};


} // end namespace digital_delay

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

extern "C"
LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &digital_delay::Gx_digital_delay_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
