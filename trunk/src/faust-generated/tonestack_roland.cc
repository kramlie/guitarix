// generated from file '../src/faust/tonestack_roland.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)


namespace tonestack_roland {

class Dsp: public PluginDef {
private:
	int fSampleRate;
	double fConst0;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fConst1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fConst2;
	double fRec0[4];

	void clear_state_f();
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
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
	id = "Roland";
	name = N_("Roland Style");
	groups = 0;
	description = ""; // description (tooltip)
	category = "";       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = 0;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 4); l0 = (l0 + 1)) fRec0[l0] = 0.0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int sample_rate)
{
	fSampleRate = sample_rate;
	fConst0 = (2.0 * std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate))));
	fConst1 = mydsp_faustpower2_f(fConst0);
	fConst2 = (3.0 * fConst0);
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
	double fSlow0 = double(fVslider0);
	double fSlow1 = std::exp((3.3999999999999999 * (double(fVslider1) + -1.0)));
	double fSlow2 = ((0.00082000000000000009 * fSlow0) + (0.0083099999999999997 * fSlow1));
	double fSlow3 = (fConst0 * (fSlow2 + 0.0051074000000000007));
	double fSlow4 = (2.7256800000000006e-07 * fSlow0);
	double fSlow5 = (((fSlow0 * (((6.8142000000000025e-06 * fSlow1) + -7.8769200000000009e-07) - fSlow4)) + (2.8514400000000009e-05 * fSlow1)) + 1.4234760000000002e-06);
	double fSlow6 = ((4.7246760000000009e-10 * fSlow1) - (1.8898704000000002e-11 * fSlow0));
	double fSlow7 = (1.6641900000000002e-09 * fSlow1);
	double fSlow8 = (((fSlow0 * (fSlow6 + -4.7668896000000004e-11)) + fSlow7) + 6.6567600000000006e-11);
	double fSlow9 = (fConst0 * fSlow8);
	double fSlow10 = (1.0 / (-1.0 - (fSlow3 + (fConst1 * (fSlow5 + fSlow9)))));
	double fSlow11 = double(fVslider2);
	double fSlow12 = (fConst0 * ((fSlow2 + (6.0000000000000002e-05 * fSlow11)) + 0.00033240000000000006));
	double fSlow13 = (((2.8290000000000003e-07 * fSlow11) + ((fSlow0 * (3.2176800000000005e-07 - fSlow4)) + (fSlow1 * ((6.8142000000000025e-06 * fSlow0) + 7.7790000000000021e-07)))) + 3.1116000000000005e-08);
	double fSlow14 = ((fSlow0 * (fSlow6 + 1.8898704000000002e-11)) + (fSlow11 * (fSlow7 - (6.6567600000000006e-11 * (fSlow0 + -1.0)))));
	double fSlow15 = (fConst0 * fSlow14);
	double fSlow16 = (0.0 - (fSlow12 + (fConst1 * (fSlow13 + fSlow15))));
	double fSlow17 = (fConst2 * fSlow8);
	double fSlow18 = ((fConst1 * (fSlow5 + fSlow17)) + (-3.0 - fSlow3));
	double fSlow19 = ((fSlow3 + (fConst1 * (fSlow5 - fSlow17))) + -3.0);
	double fSlow20 = (fSlow3 + (-1.0 - (fConst1 * (fSlow5 - fSlow9))));
	double fSlow21 = (fConst2 * fSlow14);
	double fSlow22 = ((fConst1 * (fSlow13 + fSlow21)) - fSlow12);
	double fSlow23 = (fSlow12 + (fConst1 * (fSlow13 - fSlow21)));
	double fSlow24 = (fSlow12 - (fConst1 * (fSlow13 - fSlow15)));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		fRec0[0] = (double(input0[i0]) - (fSlow10 * (((fSlow18 * fRec0[1]) + (fSlow19 * fRec0[2])) + (fSlow20 * fRec0[3]))));
		output0[i0] = FAUSTFLOAT((fSlow10 * ((((fSlow16 * fRec0[0]) + (fSlow22 * fRec0[1])) + (fSlow23 * fRec0[2])) + (fSlow24 * fRec0[3]))));
		for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
			fRec0[j0] = fRec0[(j0 - 1)];
		}
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	fVslider1_ = reg.registerFloatVar("amp.tonestack.Bass","","SA","",&fVslider1, 0.5, 0.0, 1.0, 0.01, 0);
	fVslider0_ = reg.registerFloatVar("amp.tonestack.Middle","","SA","",&fVslider0, 0.5, 0.0, 1.0, 0.01, 0);
	fVslider2_ = reg.registerFloatVar("amp.tonestack.Treble","","SA","",&fVslider2, 0.5, 0.0, 1.0, 0.01, 0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace tonestack_roland
