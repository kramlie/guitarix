// generated from file '../src/plugins/hfb.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace pluginlib {
namespace hfb {

class Dsp: public PluginDef {
private:
	int fSampleRate;
	double fConst0;
	double fConst1;
	FAUSTFLOAT fVslider0;
	double fRec1[2];
	FAUSTFLOAT fVslider1;
	double fRec2[2];
	double fConst3;
	double fConst5;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fRec0[3];

	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int sample_rate, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "hfb";
	name = N_("HF Brightener");
	groups = 0;
	description = N_("High Frequency Brightener"); // description (tooltip)
	category = N_("Tone Control");       // category
	shortname = N_("HF Brighten");     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec1[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec2[l1] = 0.0;
	for (int l2 = 0; (l2 < 3); l2 = (l2 + 1)) fRec0[l2] = 0.0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int sample_rate)
{
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = mydsp_faustpower2_f(fConst0);
	double fConst2 = (1.1827552040751701e-09 * fConst0);
	fConst3 = (fConst2 + -6.6128772258314704e-08);
	double fConst4 = (1.1702375430685401e-09 * fConst0);
	fConst5 = (6.5060860471186096e-08 - fConst4);
	double fConst6 = (2.3655104081503399e-10 * fConst0);
	fConst7 = (fConst6 + -1.32257544516629e-08);
	fConst8 = (fConst2 + 6.6128772258314704e-08);
	fConst9 = (-6.5060860471186096e-08 - fConst4);
	fConst10 = (fConst6 + 1.32257544516629e-08);
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double fSlow0 = (0.0070000000000000062 * double(fVslider0));
	double fSlow1 = (0.0070000000000000062 * (1.0 - double(fVslider1)));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
		fRec2[0] = (fSlow1 + (0.99299999999999999 * fRec2[1]));
		double fTemp0 = ((fConst0 * (((fRec1[0] * (fConst8 + (fConst9 * fRec1[0]))) + (fConst10 * fRec2[0])) + 7.8850346938344698e-07)) + 4.4085848172209803e-05);
		fRec0[0] = (double(input0[i0]) - (((fRec0[1] * ((fConst1 * ((fRec1[0] * ((2.3404750861370802e-09 * fRec1[0]) + -2.3655104081503402e-09)) - (4.7310208163006798e-10 * fRec2[0]))) + 8.8171696344419606e-05)) + (fRec0[2] * ((fConst0 * (((fRec1[0] * (fConst3 + (fConst5 * fRec1[0]))) + (fConst7 * fRec2[0])) + -7.8850346938344698e-07)) + 4.4085848172209803e-05))) / fTemp0));
		double fTemp1 = (fConst0 * ((fRec1[0] * ((5.12666523663255e-23 * fRec1[0]) + -1.59041010538546e-09)) - (3.1808202107709101e-10 * fRec2[0])));
		output0[i0] = FAUSTFLOAT((fConst0 * ((((fRec0[0] * (fTemp1 + -1.06027340359031e-06)) + (fConst0 * (fRec0[1] * ((6.3616404215418305e-10 * fRec2[0]) + (fRec1[0] * ((0.0 - (1.02533304732651e-22 * fRec1[0])) + 3.18082021077092e-09)))))) + (fRec0[2] * (fTemp1 + 1.06027340359031e-06))) / fTemp0)));
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fRec0[2] = fRec0[1];
		fRec0[1] = fRec0[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerFloatVar("hfb.Intensity",N_("Intensity"),"S","",&fVslider0, 0.5, 0.0, 1.0, 0.01, 0);
	reg.registerFloatVar("hfb.Volume",N_("Volume"),"S","",&fVslider1, 0.5, 0.0, 1.0, 0.01, 0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

const char *Dsp::glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<!-- Generated with glade 3.22.1 -->\n\
<interface>\n\
  <requires lib=\"gtk+\" version=\"3.20\"/>\n\
  <requires lib=\"gxwidgets\" version=\"0.0\"/>\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <child>\n\
      <placeholder/>\n\
    </child>\n\
    <child>\n\
      <object class=\"GtkBox\" id=\"vbox1\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <property name=\"orientation\">vertical</property>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"rackbox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GtkBox\" id=\"hbox1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"spacing\">10</property>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">hfb.Intensity</property>\n\
                        <property name=\"label_ref\">label1:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label2:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxMidKnob\" id=\"gxbigknob2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">hfb.Volume</property>\n\
                        <property name=\"label_ref\">label2:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"pack_type\">end</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">False</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GxHSlider\" id=\"gxhslider1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">True</property>\n\
                <property name=\"receives_default\">True</property>\n\
                <property name=\"round_digits\">0</property>\n\
                <property name=\"var_id\">hfb.Volume</property>\n\
                <property name=\"show_value\">False</property>\n\
                <property name=\"value_position\">right</property>\n\
                <property name=\"value_xalign\">0.52000000000000002</property>\n\
                <property name=\"label_ref\">label0:rack_label</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkLabel\" id=\"label0:rack_label\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label\" translatable=\"yes\">Volume</property>\n\
                <property name=\"xalign\">0</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_GLADE) {
        b.load_glade(glade_def);
        return 0;
    }
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("hfb" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("Volume"), N_("Volume"));
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("Volume"), N_("Volume"));

    b.create_small_rackknobr(PARAM("Intensity"), N_("Intensity"));
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace hfb
} // end namespace pluginlib
