// generated from file '../src/plugins/mbdel.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace pluginlib {
namespace mbdel {

class Dsp: public PluginDef {
private:
	int fSampleRate;
	double fVec0[2];
	double fConst1;
	FAUSTFLOAT fVslider0;
	double fRec3[2];
	double fConst2;
	FAUSTFLOAT fHslider0;
	double fRec8[2];
	double fRec7[3];
	FAUSTFLOAT fHslider1;
	double fRec6[3];
	FAUSTFLOAT fHslider2;
	double fRec5[3];
	FAUSTFLOAT fHslider3;
	double fRec4[3];
	int IOTA;
	double fVec1[524288];
	double fConst3;
	FAUSTFLOAT fHslider4;
	double fConst4;
	double fConst5;
	double fRec9[2];
	double fRec10[2];
	double fRec11[2];
	double fRec12[2];
	double fRec0[2];
	int iRec1[2];
	double fRec2[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fVslider1;
	double fRec16[2];
	double fRec22[2];
	double fRec21[3];
	double fVec2[2];
	double fRec20[2];
	double fRec19[3];
	double fRec18[3];
	double fRec17[3];
	double fVec3[524288];
	FAUSTFLOAT fHslider5;
	double fRec23[2];
	double fRec24[2];
	double fRec25[2];
	double fRec26[2];
	double fRec13[2];
	int iRec14[2];
	double fRec15[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fVslider2;
	double fRec30[2];
	double fRec35[2];
	double fRec34[3];
	double fVec4[2];
	double fRec33[2];
	double fRec32[3];
	double fRec31[3];
	double fVec5[524288];
	FAUSTFLOAT fHslider6;
	double fRec36[2];
	double fRec37[2];
	double fRec38[2];
	double fRec39[2];
	double fRec27[2];
	int iRec28[2];
	double fRec29[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fVslider3;
	double fRec43[2];
	double fRec47[2];
	double fRec46[3];
	double fVec6[2];
	double fRec45[2];
	double fRec44[3];
	double fVec7[524288];
	FAUSTFLOAT fHslider7;
	double fRec48[2];
	double fRec49[2];
	double fRec50[2];
	double fRec51[2];
	double fRec40[2];
	int iRec41[2];
	double fRec42[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fVslider4;
	double fRec55[2];
	double fRec57[2];
	double fRec56[3];
	double fVec8[524288];
	FAUSTFLOAT fHslider8;
	double fRec58[2];
	double fRec59[2];
	double fRec60[2];
	double fRec61[2];
	double fRec52[2];
	int iRec53[2];
	double fRec54[2];
	FAUSTFLOAT fVbargraph4;

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
	id = "mbdel";
	name = N_("MultiBand Delay");
	groups = 0;
	description = N_("Multi Band Delay"); // description (tooltip)
	category = N_("Echo / Delay");       // category
	shortname = N_("MB Delay");     // shortname
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
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fVec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec3[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec8[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec7[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec6[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec5[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec4[l6] = 0.0;
	for (int l7 = 0; (l7 < 524288); l7 = (l7 + 1)) fVec1[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec9[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fRec10[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec11[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec12[l11] = 0.0;
	for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) fRec0[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) iRec1[l13] = 0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec2[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec16[l15] = 0.0;
	for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) fRec22[l16] = 0.0;
	for (int l17 = 0; (l17 < 3); l17 = (l17 + 1)) fRec21[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fVec2[l18] = 0.0;
	for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) fRec20[l19] = 0.0;
	for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) fRec19[l20] = 0.0;
	for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) fRec18[l21] = 0.0;
	for (int l22 = 0; (l22 < 3); l22 = (l22 + 1)) fRec17[l22] = 0.0;
	for (int l23 = 0; (l23 < 524288); l23 = (l23 + 1)) fVec3[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fRec23[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec24[l25] = 0.0;
	for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) fRec25[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fRec26[l27] = 0.0;
	for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) fRec13[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) iRec14[l29] = 0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec15[l30] = 0.0;
	for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) fRec30[l31] = 0.0;
	for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) fRec35[l32] = 0.0;
	for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) fRec34[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fVec4[l34] = 0.0;
	for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) fRec33[l35] = 0.0;
	for (int l36 = 0; (l36 < 3); l36 = (l36 + 1)) fRec32[l36] = 0.0;
	for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) fRec31[l37] = 0.0;
	for (int l38 = 0; (l38 < 524288); l38 = (l38 + 1)) fVec5[l38] = 0.0;
	for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) fRec36[l39] = 0.0;
	for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) fRec37[l40] = 0.0;
	for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) fRec38[l41] = 0.0;
	for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) fRec39[l42] = 0.0;
	for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) fRec27[l43] = 0.0;
	for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) iRec28[l44] = 0;
	for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) fRec29[l45] = 0.0;
	for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) fRec43[l46] = 0.0;
	for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) fRec47[l47] = 0.0;
	for (int l48 = 0; (l48 < 3); l48 = (l48 + 1)) fRec46[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fVec6[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) fRec45[l50] = 0.0;
	for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) fRec44[l51] = 0.0;
	for (int l52 = 0; (l52 < 524288); l52 = (l52 + 1)) fVec7[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) fRec48[l53] = 0.0;
	for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) fRec49[l54] = 0.0;
	for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) fRec50[l55] = 0.0;
	for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) fRec51[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fRec40[l57] = 0.0;
	for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) iRec41[l58] = 0;
	for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) fRec42[l59] = 0.0;
	for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) fRec55[l60] = 0.0;
	for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) fRec57[l61] = 0.0;
	for (int l62 = 0; (l62 < 3); l62 = (l62 + 1)) fRec56[l62] = 0.0;
	for (int l63 = 0; (l63 < 524288); l63 = (l63 + 1)) fVec8[l63] = 0.0;
	for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) fRec58[l64] = 0.0;
	for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) fRec59[l65] = 0.0;
	for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) fRec60[l66] = 0.0;
	for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) fRec61[l67] = 0.0;
	for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) fRec52[l68] = 0.0;
	for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) iRec53[l69] = 0;
	for (int l70 = 0; (l70 < 2); l70 = (l70 + 1)) fRec54[l70] = 0.0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int sample_rate)
{
	fSampleRate = sample_rate;
	double fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = (1.0 / fConst0);
	fConst2 = (3.1415926535897931 / fConst0);
	fConst3 = (60.0 * fConst0);
	fConst4 = (10.0 / fConst0);
	fConst5 = (0.0 - fConst4);
	IOTA = 0;
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double fSlow0 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider0))));
	double fSlow1 = std::tan((fConst2 * double(fHslider0)));
	double fSlow2 = (1.0 / fSlow1);
	double fSlow3 = (((fSlow2 + 1.0000000000000004) / fSlow1) + 1.0);
	double fSlow4 = (1.0 / fSlow3);
	double fSlow5 = mydsp_faustpower2_f(fSlow1);
	double fSlow6 = (1.0 / fSlow5);
	double fSlow7 = (fSlow2 + 1.0);
	double fSlow8 = (0.0 - (1.0 / (fSlow1 * fSlow7)));
	double fSlow9 = (1.0 / fSlow7);
	double fSlow10 = (1.0 - fSlow2);
	double fSlow11 = (((fSlow2 + -1.0000000000000004) / fSlow1) + 1.0);
	double fSlow12 = (2.0 * (1.0 - fSlow6));
	double fSlow13 = (0.0 - (2.0 / fSlow5));
	double fSlow14 = std::tan((fConst2 * double(fHslider1)));
	double fSlow15 = (1.0 / fSlow14);
	double fSlow16 = (fSlow15 + 1.0);
	double fSlow17 = (1.0 / ((fSlow16 / fSlow14) + 1.0));
	double fSlow18 = (1.0 - fSlow15);
	double fSlow19 = (1.0 - (fSlow18 / fSlow14));
	double fSlow20 = mydsp_faustpower2_f(fSlow14);
	double fSlow21 = (1.0 / fSlow20);
	double fSlow22 = (2.0 * (1.0 - fSlow21));
	double fSlow23 = std::tan((fConst2 * double(fHslider2)));
	double fSlow24 = (1.0 / fSlow23);
	double fSlow25 = (fSlow24 + 1.0);
	double fSlow26 = (1.0 / ((fSlow25 / fSlow23) + 1.0));
	double fSlow27 = (1.0 - fSlow24);
	double fSlow28 = (1.0 - (fSlow27 / fSlow23));
	double fSlow29 = mydsp_faustpower2_f(fSlow23);
	double fSlow30 = (1.0 / fSlow29);
	double fSlow31 = (2.0 * (1.0 - fSlow30));
	double fSlow32 = std::tan((fConst2 * double(fHslider3)));
	double fSlow33 = (1.0 / fSlow32);
	double fSlow34 = (fSlow33 + 1.0);
	double fSlow35 = (1.0 / ((fSlow34 / fSlow32) + 1.0));
	double fSlow36 = (1.0 - fSlow33);
	double fSlow37 = (1.0 - (fSlow36 / fSlow32));
	double fSlow38 = mydsp_faustpower2_f(fSlow32);
	double fSlow39 = (1.0 / fSlow38);
	double fSlow40 = (2.0 * (1.0 - fSlow39));
	double fSlow41 = (fConst3 / double(fHslider4));
	double fSlow42 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider1))));
	double fSlow43 = (((fSlow15 + 1.0000000000000004) / fSlow14) + 1.0);
	double fSlow44 = (1.0 / fSlow43);
	double fSlow45 = (0.0 - (1.0 / (fSlow14 * fSlow16)));
	double fSlow46 = (1.0 / fSlow16);
	double fSlow47 = (1.0 / (fSlow14 * fSlow3));
	double fSlow48 = (((fSlow15 + -1.0000000000000004) / fSlow14) + 1.0);
	double fSlow49 = (0.0 - (2.0 / fSlow20));
	double fSlow50 = (fConst3 / double(fHslider5));
	double fSlow51 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider2))));
	double fSlow52 = (((fSlow24 + 1.0000000000000004) / fSlow23) + 1.0);
	double fSlow53 = (1.0 / fSlow52);
	double fSlow54 = (0.0 - (1.0 / (fSlow23 * fSlow25)));
	double fSlow55 = (1.0 / fSlow25);
	double fSlow56 = (1.0 / (fSlow23 * fSlow43));
	double fSlow57 = (((fSlow24 + -1.0000000000000004) / fSlow23) + 1.0);
	double fSlow58 = (0.0 - (2.0 / fSlow29));
	double fSlow59 = (fConst3 / double(fHslider6));
	double fSlow60 = (1.0 / (((fSlow33 + 1.0000000000000004) / fSlow32) + 1.0));
	double fSlow61 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider3))));
	double fSlow62 = (0.0 - (1.0 / (fSlow32 * fSlow34)));
	double fSlow63 = (1.0 / fSlow34);
	double fSlow64 = (1.0 / (fSlow32 * fSlow52));
	double fSlow65 = (((fSlow33 + -1.0000000000000004) / fSlow32) + 1.0);
	double fSlow66 = (0.0 - (2.0 / fSlow38));
	double fSlow67 = (fConst3 / double(fHslider7));
	double fSlow68 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider4))));
	double fSlow69 = (fConst3 / double(fHslider8));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		double fTemp0 = double(input0[i0]);
		fVec0[0] = fTemp0;
		int iTemp1 = (iRec1[1] < 4096);
		fRec3[0] = (fSlow0 + (0.999 * fRec3[1]));
		fRec8[0] = ((fSlow8 * fVec0[1]) - (fSlow9 * ((fSlow10 * fRec8[1]) - (fSlow2 * fTemp0))));
		fRec7[0] = (fRec8[0] - (fSlow4 * ((fSlow11 * fRec7[2]) + (fSlow12 * fRec7[1]))));
		double fTemp2 = (fSlow22 * fRec6[1]);
		fRec6[0] = ((fSlow4 * (((fSlow6 * fRec7[0]) + (fSlow13 * fRec7[1])) + (fSlow6 * fRec7[2]))) - (fSlow17 * ((fSlow19 * fRec6[2]) + fTemp2)));
		double fTemp3 = (fSlow31 * fRec5[1]);
		fRec5[0] = ((fRec6[2] + (fSlow17 * (fTemp2 + (fSlow19 * fRec6[0])))) - (fSlow26 * ((fSlow28 * fRec5[2]) + fTemp3)));
		double fTemp4 = (fSlow40 * fRec4[1]);
		fRec4[0] = ((fRec5[2] + (fSlow26 * (fTemp3 + (fSlow28 * fRec5[0])))) - (fSlow35 * ((fSlow37 * fRec4[2]) + fTemp4)));
		double fTemp5 = (fRec3[0] * (fRec4[2] + (fSlow35 * (fTemp4 + (fSlow37 * fRec4[0])))));
		fVec1[(IOTA & 524287)] = fTemp5;
		double fThen1 = (((fRec10[1] == 1.0) & (fSlow41 != fRec12[1])) ? fConst5 : 0.0);
		double fThen3 = (((fRec10[1] == 0.0) & (fSlow41 != fRec11[1])) ? fConst4 : fThen1);
		double fElse3 = (((fRec10[1] > 0.0) & (fRec10[1] < 1.0)) ? fRec9[1] : 0.0);
		double fTemp6 = ((fRec9[1] != 0.0) ? fElse3 : fThen3);
		fRec9[0] = fTemp6;
		fRec10[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec10[1] + fTemp6)));
		fRec11[0] = (((fRec10[1] >= 1.0) & (fRec12[1] != fSlow41)) ? fSlow41 : fRec11[1]);
		fRec12[0] = (((fRec10[1] <= 0.0) & (fRec11[1] != fSlow41)) ? fSlow41 : fRec12[1]);
		double fTemp7 = fVec1[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec11[0])))) & 524287)];
		double fTemp8 = (fTemp7 + (fRec10[0] * (fVec1[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec12[0])))) & 524287)] - fTemp7)));
		double fTemp9 = std::max<double>(fConst1, std::fabs(fTemp8));
		double fElse6 = (fTemp9 + fRec0[1]);
		fRec0[0] = (iTemp1 ? fElse6 : fTemp9);
		int iElse7 = (iRec1[1] + 1);
		iRec1[0] = (iTemp1 ? iElse7 : 1);
		double fThen8 = (0.000244140625 * fRec0[1]);
		fRec2[0] = (iTemp1 ? fRec2[1] : fThen8);
		fVbargraph0 = FAUSTFLOAT(fRec2[0]);
		int iTemp10 = (iRec14[1] < 4096);
		fRec16[0] = (fSlow42 + (0.999 * fRec16[1]));
		fRec22[0] = (0.0 - (fSlow9 * ((fSlow10 * fRec22[1]) - (fTemp0 + fVec0[1]))));
		fRec21[0] = (fRec22[0] - (fSlow4 * ((fSlow11 * fRec21[2]) + (fSlow12 * fRec21[1]))));
		double fTemp11 = (fRec21[2] + (fRec21[0] + (2.0 * fRec21[1])));
		double fTemp12 = (fSlow4 * fTemp11);
		fVec2[0] = fTemp12;
		fRec20[0] = ((fSlow45 * fVec2[1]) - (fSlow46 * ((fSlow18 * fRec20[1]) - (fSlow47 * fTemp11))));
		fRec19[0] = (fRec20[0] - (fSlow44 * ((fSlow48 * fRec19[2]) + (fSlow22 * fRec19[1]))));
		double fTemp13 = (fSlow31 * fRec18[1]);
		fRec18[0] = ((fSlow44 * (((fSlow21 * fRec19[0]) + (fSlow49 * fRec19[1])) + (fSlow21 * fRec19[2]))) - (fSlow26 * ((fSlow28 * fRec18[2]) + fTemp13)));
		double fTemp14 = (fSlow40 * fRec17[1]);
		fRec17[0] = ((fRec18[2] + (fSlow26 * (fTemp13 + (fSlow28 * fRec18[0])))) - (fSlow35 * ((fSlow37 * fRec17[2]) + fTemp14)));
		double fTemp15 = (fRec16[0] * (fRec17[2] + (fSlow35 * (fTemp14 + (fSlow37 * fRec17[0])))));
		fVec3[(IOTA & 524287)] = fTemp15;
		double fThen10 = (((fRec24[1] == 1.0) & (fSlow50 != fRec26[1])) ? fConst5 : 0.0);
		double fThen12 = (((fRec24[1] == 0.0) & (fSlow50 != fRec25[1])) ? fConst4 : fThen10);
		double fElse12 = (((fRec24[1] > 0.0) & (fRec24[1] < 1.0)) ? fRec23[1] : 0.0);
		double fTemp16 = ((fRec23[1] != 0.0) ? fElse12 : fThen12);
		fRec23[0] = fTemp16;
		fRec24[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec24[1] + fTemp16)));
		fRec25[0] = (((fRec24[1] >= 1.0) & (fRec26[1] != fSlow50)) ? fSlow50 : fRec25[1]);
		fRec26[0] = (((fRec24[1] <= 0.0) & (fRec25[1] != fSlow50)) ? fSlow50 : fRec26[1]);
		double fTemp17 = fVec3[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec25[0])))) & 524287)];
		double fTemp18 = (fTemp17 + (fRec24[0] * (fVec3[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec26[0])))) & 524287)] - fTemp17)));
		double fTemp19 = std::max<double>(fConst1, std::fabs(fTemp18));
		double fElse15 = (fTemp19 + fRec13[1]);
		fRec13[0] = (iTemp10 ? fElse15 : fTemp19);
		int iElse16 = (iRec14[1] + 1);
		iRec14[0] = (iTemp10 ? iElse16 : 1);
		double fThen17 = (0.000244140625 * fRec13[1]);
		fRec15[0] = (iTemp10 ? fRec15[1] : fThen17);
		fVbargraph1 = FAUSTFLOAT(fRec15[0]);
		int iTemp20 = (iRec28[1] < 4096);
		fRec30[0] = (fSlow51 + (0.999 * fRec30[1]));
		fRec35[0] = (0.0 - (fSlow46 * ((fSlow18 * fRec35[1]) - (fTemp12 + fVec2[1]))));
		fRec34[0] = (fRec35[0] - (fSlow44 * ((fSlow48 * fRec34[2]) + (fSlow22 * fRec34[1]))));
		double fTemp21 = (fRec34[2] + (fRec34[0] + (2.0 * fRec34[1])));
		double fTemp22 = (fSlow44 * fTemp21);
		fVec4[0] = fTemp22;
		fRec33[0] = ((fSlow54 * fVec4[1]) - (fSlow55 * ((fSlow27 * fRec33[1]) - (fSlow56 * fTemp21))));
		fRec32[0] = (fRec33[0] - (fSlow53 * ((fSlow57 * fRec32[2]) + (fSlow31 * fRec32[1]))));
		double fTemp23 = (fSlow40 * fRec31[1]);
		fRec31[0] = ((fSlow53 * (((fSlow30 * fRec32[0]) + (fSlow58 * fRec32[1])) + (fSlow30 * fRec32[2]))) - (fSlow35 * ((fSlow37 * fRec31[2]) + fTemp23)));
		double fTemp24 = (fRec30[0] * (fRec31[2] + (fSlow35 * (fTemp23 + (fSlow37 * fRec31[0])))));
		fVec5[(IOTA & 524287)] = fTemp24;
		double fThen19 = (((fRec37[1] == 1.0) & (fSlow59 != fRec39[1])) ? fConst5 : 0.0);
		double fThen21 = (((fRec37[1] == 0.0) & (fSlow59 != fRec38[1])) ? fConst4 : fThen19);
		double fElse21 = (((fRec37[1] > 0.0) & (fRec37[1] < 1.0)) ? fRec36[1] : 0.0);
		double fTemp25 = ((fRec36[1] != 0.0) ? fElse21 : fThen21);
		fRec36[0] = fTemp25;
		fRec37[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec37[1] + fTemp25)));
		fRec38[0] = (((fRec37[1] >= 1.0) & (fRec39[1] != fSlow59)) ? fSlow59 : fRec38[1]);
		fRec39[0] = (((fRec37[1] <= 0.0) & (fRec38[1] != fSlow59)) ? fSlow59 : fRec39[1]);
		double fTemp26 = fVec5[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec38[0])))) & 524287)];
		double fTemp27 = (fTemp26 + (fRec37[0] * (fVec5[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec39[0])))) & 524287)] - fTemp26)));
		double fTemp28 = std::max<double>(fConst1, std::fabs(fTemp27));
		double fElse24 = (fTemp28 + fRec27[1]);
		fRec27[0] = (iTemp20 ? fElse24 : fTemp28);
		int iElse25 = (iRec28[1] + 1);
		iRec28[0] = (iTemp20 ? iElse25 : 1);
		double fThen26 = (0.000244140625 * fRec27[1]);
		fRec29[0] = (iTemp20 ? fRec29[1] : fThen26);
		fVbargraph2 = FAUSTFLOAT(fRec29[0]);
		int iTemp29 = (iRec41[1] < 4096);
		fRec43[0] = (fSlow61 + (0.999 * fRec43[1]));
		fRec47[0] = (0.0 - (fSlow55 * ((fSlow27 * fRec47[1]) - (fTemp22 + fVec4[1]))));
		fRec46[0] = (fRec47[0] - (fSlow53 * ((fSlow57 * fRec46[2]) + (fSlow31 * fRec46[1]))));
		double fTemp30 = (fRec46[2] + (fRec46[0] + (2.0 * fRec46[1])));
		double fTemp31 = (fSlow53 * fTemp30);
		fVec6[0] = fTemp31;
		fRec45[0] = ((fSlow62 * fVec6[1]) - (fSlow63 * ((fSlow36 * fRec45[1]) - (fSlow64 * fTemp30))));
		fRec44[0] = (fRec45[0] - (fSlow60 * ((fSlow65 * fRec44[2]) + (fSlow40 * fRec44[1]))));
		double fTemp32 = (fSlow60 * (fRec43[0] * (((fSlow39 * fRec44[0]) + (fSlow66 * fRec44[1])) + (fSlow39 * fRec44[2]))));
		fVec7[(IOTA & 524287)] = fTemp32;
		double fThen28 = (((fRec49[1] == 1.0) & (fSlow67 != fRec51[1])) ? fConst5 : 0.0);
		double fThen30 = (((fRec49[1] == 0.0) & (fSlow67 != fRec50[1])) ? fConst4 : fThen28);
		double fElse30 = (((fRec49[1] > 0.0) & (fRec49[1] < 1.0)) ? fRec48[1] : 0.0);
		double fTemp33 = ((fRec48[1] != 0.0) ? fElse30 : fThen30);
		fRec48[0] = fTemp33;
		fRec49[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec49[1] + fTemp33)));
		fRec50[0] = (((fRec49[1] >= 1.0) & (fRec51[1] != fSlow67)) ? fSlow67 : fRec50[1]);
		fRec51[0] = (((fRec49[1] <= 0.0) & (fRec50[1] != fSlow67)) ? fSlow67 : fRec51[1]);
		double fTemp34 = fVec7[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec50[0])))) & 524287)];
		double fTemp35 = (fTemp34 + (fRec49[0] * (fVec7[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec51[0])))) & 524287)] - fTemp34)));
		double fTemp36 = std::max<double>(fConst1, std::fabs(fTemp35));
		double fElse33 = (fTemp36 + fRec40[1]);
		fRec40[0] = (iTemp29 ? fElse33 : fTemp36);
		int iElse34 = (iRec41[1] + 1);
		iRec41[0] = (iTemp29 ? iElse34 : 1);
		double fThen35 = (0.000244140625 * fRec40[1]);
		fRec42[0] = (iTemp29 ? fRec42[1] : fThen35);
		fVbargraph3 = FAUSTFLOAT(fRec42[0]);
		int iTemp37 = (iRec53[1] < 4096);
		fRec55[0] = (fSlow68 + (0.999 * fRec55[1]));
		fRec57[0] = (0.0 - (fSlow63 * ((fSlow36 * fRec57[1]) - (fTemp31 + fVec6[1]))));
		fRec56[0] = (fRec57[0] - (fSlow60 * ((fSlow65 * fRec56[2]) + (fSlow40 * fRec56[1]))));
		double fTemp38 = (fSlow60 * (fRec55[0] * (fRec56[2] + (fRec56[0] + (2.0 * fRec56[1])))));
		fVec8[(IOTA & 524287)] = fTemp38;
		double fThen37 = (((fRec59[1] == 1.0) & (fSlow69 != fRec61[1])) ? fConst5 : 0.0);
		double fThen39 = (((fRec59[1] == 0.0) & (fSlow69 != fRec60[1])) ? fConst4 : fThen37);
		double fElse39 = (((fRec59[1] > 0.0) & (fRec59[1] < 1.0)) ? fRec58[1] : 0.0);
		double fTemp39 = ((fRec58[1] != 0.0) ? fElse39 : fThen39);
		fRec58[0] = fTemp39;
		fRec59[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec59[1] + fTemp39)));
		fRec60[0] = (((fRec59[1] >= 1.0) & (fRec61[1] != fSlow69)) ? fSlow69 : fRec60[1]);
		fRec61[0] = (((fRec59[1] <= 0.0) & (fRec60[1] != fSlow69)) ? fSlow69 : fRec61[1]);
		double fTemp40 = fVec8[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec60[0])))) & 524287)];
		double fTemp41 = (fTemp40 + (fRec59[0] * (fVec8[((IOTA - int(std::min<double>(262144.0, std::max<double>(0.0, fRec61[0])))) & 524287)] - fTemp40)));
		double fTemp42 = std::max<double>(fConst1, std::fabs(fTemp41));
		double fElse42 = (fTemp42 + fRec52[1]);
		fRec52[0] = (iTemp37 ? fElse42 : fTemp42);
		int iElse43 = (iRec53[1] + 1);
		iRec53[0] = (iTemp37 ? iElse43 : 1);
		double fThen44 = (0.000244140625 * fRec52[1]);
		fRec54[0] = (iTemp37 ? fRec54[1] : fThen44);
		fVbargraph4 = FAUSTFLOAT(fRec54[0]);
		output0[i0] = FAUSTFLOAT((fTemp0 + ((((fTemp8 + fTemp18) + fTemp27) + fTemp35) + fTemp41)));
		fVec0[1] = fVec0[0];
		fRec3[1] = fRec3[0];
		fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec5[2] = fRec5[1];
		fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1];
		fRec4[1] = fRec4[0];
		IOTA = (IOTA + 1);
		fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fRec0[1] = fRec0[0];
		iRec1[1] = iRec1[0];
		fRec2[1] = fRec2[0];
		fRec16[1] = fRec16[0];
		fRec22[1] = fRec22[0];
		fRec21[2] = fRec21[1];
		fRec21[1] = fRec21[0];
		fVec2[1] = fVec2[0];
		fRec20[1] = fRec20[0];
		fRec19[2] = fRec19[1];
		fRec19[1] = fRec19[0];
		fRec18[2] = fRec18[1];
		fRec18[1] = fRec18[0];
		fRec17[2] = fRec17[1];
		fRec17[1] = fRec17[0];
		fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fRec13[1] = fRec13[0];
		iRec14[1] = iRec14[0];
		fRec15[1] = fRec15[0];
		fRec30[1] = fRec30[0];
		fRec35[1] = fRec35[0];
		fRec34[2] = fRec34[1];
		fRec34[1] = fRec34[0];
		fVec4[1] = fVec4[0];
		fRec33[1] = fRec33[0];
		fRec32[2] = fRec32[1];
		fRec32[1] = fRec32[0];
		fRec31[2] = fRec31[1];
		fRec31[1] = fRec31[0];
		fRec36[1] = fRec36[0];
		fRec37[1] = fRec37[0];
		fRec38[1] = fRec38[0];
		fRec39[1] = fRec39[0];
		fRec27[1] = fRec27[0];
		iRec28[1] = iRec28[0];
		fRec29[1] = fRec29[0];
		fRec43[1] = fRec43[0];
		fRec47[1] = fRec47[0];
		fRec46[2] = fRec46[1];
		fRec46[1] = fRec46[0];
		fVec6[1] = fVec6[0];
		fRec45[1] = fRec45[0];
		fRec44[2] = fRec44[1];
		fRec44[1] = fRec44[0];
		fRec48[1] = fRec48[0];
		fRec49[1] = fRec49[0];
		fRec50[1] = fRec50[0];
		fRec51[1] = fRec51[0];
		fRec40[1] = fRec40[0];
		iRec41[1] = iRec41[0];
		fRec42[1] = fRec42[0];
		fRec55[1] = fRec55[0];
		fRec57[1] = fRec57[0];
		fRec56[2] = fRec56[1];
		fRec56[1] = fRec56[0];
		fRec58[1] = fRec58[0];
		fRec59[1] = fRec59[0];
		fRec60[1] = fRec60[0];
		fRec61[1] = fRec61[0];
		fRec52[1] = fRec52[0];
		iRec53[1] = iRec53[0];
		fRec54[1] = fRec54[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerFloatVar("mbdel.crossover_b1_b2",N_("Crossover B1-B2 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider3, 80.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbdel.crossover_b2_b3",N_("Crossover B2-B3 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider2, 210.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbdel.crossover_b3_b4",N_("Crossover B3-B4 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider1, 1700.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbdel.crossover_b4_b5",N_("Crossover B4-B5 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider0, 5000.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbdel.delay1","","S",N_("Delay in Beats per Minute"),&fHslider8, 30.0, 24.0, 360.0, 1.0, 0);
	reg.registerFloatVar("mbdel.delay2","","S",N_("Delay in Beats per Minute"),&fHslider7, 60.0, 24.0, 360.0, 1.0, 0);
	reg.registerFloatVar("mbdel.delay3","","S",N_("Delay in Beats per Minute"),&fHslider6, 90.0, 24.0, 360.0, 1.0, 0);
	reg.registerFloatVar("mbdel.delay4","","S",N_("Delay in Beats per Minute"),&fHslider5, 120.0, 24.0, 360.0, 1.0, 0);
	reg.registerFloatVar("mbdel.delay5","","S",N_("Delay in Beats per Minute"),&fHslider4, 150.0, 24.0, 360.0, 1.0, 0);
	reg.registerFloatVar("mbdel.gain1","","S","",&fVslider4, -10.0, -20.0, 20.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbdel.gain2","","S","",&fVslider3, -5.0, -20.0, 20.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbdel.gain3","","S","",&fVslider2, -2.0, -20.0, 20.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbdel.gain4","","S","",&fVslider1, 0.0, -20.0, 20.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbdel.gain5","","S","",&fVslider0, -10.0, -20.0, 20.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbdel.v1","","SOLN","",&fVbargraph4, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbdel.v2","","SOLN","",&fVbargraph3, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbdel.v3","","SOLN","",&fVbargraph2, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbdel.v4","","SOLN","",&fVbargraph1, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbdel.v5","","SOLN","",&fVbargraph0, 0, -70.0, 5.0, 0, 0);
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
  <requires lib=\"gtk+\" version=\"3.0\"/>\n\
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
                <child>\n\
                  <object class=\"GtkNotebook\" id=\"notebook\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">True</property>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"margin_left\">4</property>\n\
                        <property name=\"margin_right\">4</property>\n\
                        <property name=\"margin_top\">4</property>\n\
                        <property name=\"margin_bottom\">4</property>\n\
                        <property name=\"spacing\">4</property>\n\
                        <child>\n\
                          <object class=\"GtkBox\" id=\"hbox4\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox3\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_81:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">BPM</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob1\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"show_fill_level\">True</property>\n\
                                    <property name=\"var_id\">mbdel.delay1</property>\n\
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
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_91:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">Gain</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob2\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"var_id\">mbdel.gain1</property>\n\
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
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table1\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"margin_left\">4</property>\n\
                            <property name=\"margin_right\">4</property>\n\
                            <property name=\"margin_top\">4</property>\n\
                            <property name=\"margin_bottom\">4</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_spacing\">4</property>\n\
                            <property name=\"row_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_141:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob2\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b1_b2</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <placeholder/>\n\
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
                    <child type=\"tab\">\n\
                      <object class=\"GtkLabel\" id=\"label1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Band 1</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"tab_fill\">False</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox5\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"margin_left\">4</property>\n\
                        <property name=\"margin_right\">4</property>\n\
                        <property name=\"margin_top\">4</property>\n\
                        <property name=\"margin_bottom\">4</property>\n\
                        <property name=\"spacing\">4</property>\n\
                        <child>\n\
                          <object class=\"GtkBox\" id=\"hbox6\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox8\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_8:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">BPM</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob4\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"show_fill_level\">True</property>\n\
                                    <property name=\"var_id\">mbdel.delay2</property>\n\
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
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox9\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_9:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">Gain</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob5\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"var_id\">mbdel.gain2</property>\n\
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
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table2\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"margin_left\">4</property>\n\
                            <property name=\"margin_right\">4</property>\n\
                            <property name=\"margin_top\">4</property>\n\
                            <property name=\"margin_bottom\">4</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_spacing\">4</property>\n\
                            <property name=\"row_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_13:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob7\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b1_b2</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_14:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob6\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b2_b3</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
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
                      <packing>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child type=\"tab\">\n\
                      <object class=\"GtkLabel\" id=\"label2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Band 2</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"position\">1</property>\n\
                        <property name=\"tab_fill\">False</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox7\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"margin_left\">4</property>\n\
                        <property name=\"margin_right\">4</property>\n\
                        <property name=\"margin_top\">4</property>\n\
                        <property name=\"margin_bottom\">4</property>\n\
                        <property name=\"spacing\">4</property>\n\
                        <child>\n\
                          <object class=\"GtkBox\" id=\"hbox8\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox7\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_82:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">BPM</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob7\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"show_fill_level\">True</property>\n\
                                    <property name=\"var_id\">mbdel.delay3</property>\n\
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
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox11\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_92:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">Gain</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob8\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"var_id\">mbdel.gain3</property>\n\
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
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table3\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"margin_left\">4</property>\n\
                            <property name=\"margin_right\">4</property>\n\
                            <property name=\"margin_top\">4</property>\n\
                            <property name=\"margin_bottom\">4</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_spacing\">4</property>\n\
                            <property name=\"row_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_132:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob3\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b2_b3</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_142:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b3_b4</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
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
                      <packing>\n\
                        <property name=\"position\">2</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child type=\"tab\">\n\
                      <object class=\"GtkLabel\" id=\"label3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Band 3</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"position\">2</property>\n\
                        <property name=\"tab_fill\">False</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox9\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"margin_left\">4</property>\n\
                        <property name=\"margin_right\">4</property>\n\
                        <property name=\"margin_top\">4</property>\n\
                        <property name=\"margin_bottom\">4</property>\n\
                        <property name=\"spacing\">4</property>\n\
                        <child>\n\
                          <object class=\"GtkBox\" id=\"hbox10\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox14\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_83:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">BPM</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob10\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"show_fill_level\">True</property>\n\
                                    <property name=\"var_id\">mbdel.delay4</property>\n\
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
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox15\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_93:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">Gain</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob11\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"var_id\">mbdel.gain4</property>\n\
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
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table4\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"margin_left\">4</property>\n\
                            <property name=\"margin_right\">4</property>\n\
                            <property name=\"margin_top\">4</property>\n\
                            <property name=\"margin_bottom\">4</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_spacing\">4</property>\n\
                            <property name=\"row_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_133:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob5\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b3_b4</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_143:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob8\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b4_b5</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
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
                      <packing>\n\
                        <property name=\"position\">3</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child type=\"tab\">\n\
                      <object class=\"GtkLabel\" id=\"label4\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Band 4</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"position\">3</property>\n\
                        <property name=\"tab_fill\">False</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox11\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"margin_left\">4</property>\n\
                        <property name=\"margin_right\">4</property>\n\
                        <property name=\"margin_top\">4</property>\n\
                        <property name=\"margin_bottom\">4</property>\n\
                        <property name=\"spacing\">4</property>\n\
                        <child>\n\
                          <object class=\"GtkBox\" id=\"hbox12\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox18\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_84:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">BPM</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob13\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"show_fill_level\">True</property>\n\
                                    <property name=\"var_id\">mbdel.delay5</property>\n\
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
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"vbox19\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"orientation\">vertical</property>\n\
                                <child>\n\
                                  <object class=\"GtkLabel\" id=\"label_94:rack_label\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"label\" translatable=\"yes\">Gain</property>\n\
                                  </object>\n\
                                  <packing>\n\
                                    <property name=\"expand\">False</property>\n\
                                    <property name=\"fill\">False</property>\n\
                                    <property name=\"position\">0</property>\n\
                                  </packing>\n\
                                </child>\n\
                                <child>\n\
                                  <object class=\"GxSmallKnobR\" id=\"gxmediumknob14\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">True</property>\n\
                                    <property name=\"receives_default\">True</property>\n\
                                    <property name=\"var_id\">mbdel.gain5</property>\n\
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
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table5\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"margin_left\">4</property>\n\
                            <property name=\"margin_right\">4</property>\n\
                            <property name=\"margin_top\">4</property>\n\
                            <property name=\"margin_bottom\">4</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_spacing\">4</property>\n\
                            <property name=\"row_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_134:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"hexpand\">True</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob9\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbdel.crossover_b4_b5</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <placeholder/>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">1</property>\n\
                          </packing>\n\
                        </child>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"position\">4</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child type=\"tab\">\n\
                      <object class=\"GtkLabel\" id=\"label6\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Band 5</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"position\">4</property>\n\
                        <property name=\"tab_fill\">False</property>\n\
                      </packing>\n\
                    </child>\n\
                    <style>\n\
                      <class name=\"tab_rack\"/>\n\
                    </style>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">True</property>\n\
                    <property name=\"fill\">True</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"halign\">center</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label5:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Levels</property>\n\
                        <property name=\"xalign\">0</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"margin_bottom\">4</property>\n\
                        <property name=\"spacing\">10</property>\n\
                        <child>\n\
                          <object class=\"GxFastMeter\" id=\"gxfastmeter1\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbdel.v1</property>\n\
                            <property name=\"falloff\">True</property>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GxFastMeter\" id=\"gxfastmeter2\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbdel.v2</property>\n\
                            <property name=\"falloff\">True</property>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">1</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GxFastMeter\" id=\"gxfastmeter3\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbdel.v3</property>\n\
                            <property name=\"falloff\">True</property>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">2</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GxFastMeter\" id=\"gxfastmeter4\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbdel.v4</property>\n\
                            <property name=\"falloff\">True</property>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">3</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GxFastMeter\" id=\"gxfastmeter5\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbdel.v5</property>\n\
                            <property name=\"falloff\">True</property>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">4</property>\n\
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
                  <packing>\n\
                    <property name=\"expand\">True</property>\n\
                    <property name=\"fill\">True</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">True</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <placeholder/>\n\
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
#define PARAM(p) ("mbdel" "." p)

b.openHorizontalhideBox("");
b.closeBox();

b.openHorizontalBox("");
b.openVerticalBox("");

b.openTabBox("");

b.openHorizontalBox(N_("Band 1"));
b.openVerticalBox("");
b.openpaintampBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("delay1"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("gain1"), N_("Gain (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b1_b2"), N_("Low Shelf (Hz)"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 2"));
b.openVerticalBox("");
b.openpaintampBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("delay2"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("gain2"), N_("Gain (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b1_b2"), N_("Low (Hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b2_b3"), N_("High (hz)"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 3"));
b.openVerticalBox("");
b.openpaintampBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("delay3"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("gain3"), N_("Gain (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b2_b3"), N_("Low (Hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b3_b4"), N_("High (hz)"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 4"));
b.openVerticalBox("");
b.openpaintampBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("delay4"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("gain4"), N_("Gain (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b3_b4"), N_("Low (Hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b4_b5"), N_("High (hz)"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 5"));
b.openVerticalBox("");
b.openpaintampBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("delay5"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("gain5"), N_("Gain (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b4_b5"), N_("High Shelf (Hz)"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.closeBox();
b.closeBox();
b.openVerticalBox2("Analyze");
b.create_simple_meter(PARAM("v1"));
b.create_simple_meter(PARAM("v2"));
b.create_simple_meter(PARAM("v3"));
b.create_simple_meter(PARAM("v4"));
b.create_simple_meter(PARAM("v5"));
b.closeBox();
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

} // end namespace mbdel
} // end namespace pluginlib
