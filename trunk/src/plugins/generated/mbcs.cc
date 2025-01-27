// generated from file '../src/plugins/mbcs.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace pluginlib {
namespace mbcs {

class Dsp: public PluginDef {
private:
	int fSampleRate;
	double fConst1;
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	double fRec3[2];
	double fConst2;
	FAUSTFLOAT fHslider3;
	double fVec0[2];
	double fRec8[2];
	double fRec7[3];
	FAUSTFLOAT fHslider4;
	double fRec6[3];
	FAUSTFLOAT fHslider5;
	double fRec5[3];
	FAUSTFLOAT fHslider6;
	double fRec4[3];
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	double fVec1[2];
	double fRec16[2];
	double fRec15[3];
	double fRec14[3];
	double fRec13[3];
	double fRec12[3];
	FAUSTFLOAT fHslider9;
	double fRec11[2];
	double fRec10[2];
	double fRec9[2];
	double fRec0[2];
	int iRec1[2];
	double fRec2[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	double fRec20[2];
	double fRec26[2];
	double fRec25[3];
	double fVec2[2];
	double fRec24[2];
	double fRec23[3];
	double fRec22[3];
	double fRec21[3];
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	double fRec35[2];
	double fRec34[3];
	double fVec3[2];
	double fRec33[2];
	double fRec32[3];
	double fRec31[3];
	double fRec30[3];
	FAUSTFLOAT fHslider15;
	double fRec29[2];
	double fRec28[2];
	double fRec27[2];
	double fRec17[2];
	int iRec18[2];
	double fRec19[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	double fRec39[2];
	double fRec44[2];
	double fRec43[3];
	double fVec4[2];
	double fRec42[2];
	double fRec41[3];
	double fRec40[3];
	FAUSTFLOAT fHslider19;
	FAUSTFLOAT fHslider20;
	double fRec52[2];
	double fRec51[3];
	double fVec5[2];
	double fRec50[2];
	double fRec49[3];
	double fRec48[3];
	FAUSTFLOAT fHslider21;
	double fRec47[2];
	double fRec46[2];
	double fRec45[2];
	double fRec36[2];
	int iRec37[2];
	double fRec38[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	FAUSTFLOAT fHslider24;
	double fRec56[2];
	double fRec60[2];
	double fRec59[3];
	double fVec6[2];
	double fRec58[2];
	double fRec57[3];
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	double fRec67[2];
	double fRec66[3];
	double fVec7[2];
	double fRec65[2];
	double fRec64[3];
	FAUSTFLOAT fHslider27;
	double fRec63[2];
	double fRec62[2];
	double fRec61[2];
	double fRec53[2];
	int iRec54[2];
	double fRec55[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	double fRec71[2];
	double fRec73[2];
	double fRec72[3];
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	double fRec78[2];
	double fRec77[3];
	FAUSTFLOAT fHslider33;
	double fRec76[2];
	double fRec75[2];
	double fRec74[2];
	double fRec68[2];
	int iRec69[2];
	double fRec70[2];
	FAUSTFLOAT fVbargraph4;

	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int sample_rate, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginDef*);
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
	id = "mbcs";
	name = N_("Multi Band Compressor Stereo");
	groups = 0;
	description = N_("Multi Band Compressor contributed by kokoko3k"); // description (tooltip)
	category = N_("Guitar Effects");       // category
	shortname = N_("MB Comp St");     // shortname
	mono_audio = 0;
	stereo_audio = compute_static;
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
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec3[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fVec0[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec8[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec7[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec6[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec5[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec4[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fVec1[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec16[l8] = 0.0;
	for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) fRec15[l9] = 0.0;
	for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) fRec14[l10] = 0.0;
	for (int l11 = 0; (l11 < 3); l11 = (l11 + 1)) fRec13[l11] = 0.0;
	for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) fRec12[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec11[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec10[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec9[l15] = 0.0;
	for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) fRec0[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) iRec1[l17] = 0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec2[l18] = 0.0;
	for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) fRec20[l19] = 0.0;
	for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) fRec26[l20] = 0.0;
	for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) fRec25[l21] = 0.0;
	for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) fVec2[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec24[l23] = 0.0;
	for (int l24 = 0; (l24 < 3); l24 = (l24 + 1)) fRec23[l24] = 0.0;
	for (int l25 = 0; (l25 < 3); l25 = (l25 + 1)) fRec22[l25] = 0.0;
	for (int l26 = 0; (l26 < 3); l26 = (l26 + 1)) fRec21[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fRec35[l27] = 0.0;
	for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) fRec34[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) fVec3[l29] = 0.0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec33[l30] = 0.0;
	for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) fRec32[l31] = 0.0;
	for (int l32 = 0; (l32 < 3); l32 = (l32 + 1)) fRec31[l32] = 0.0;
	for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) fRec30[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fRec29[l34] = 0.0;
	for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) fRec28[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fRec27[l36] = 0.0;
	for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) fRec17[l37] = 0.0;
	for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) iRec18[l38] = 0;
	for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) fRec19[l39] = 0.0;
	for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) fRec39[l40] = 0.0;
	for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) fRec44[l41] = 0.0;
	for (int l42 = 0; (l42 < 3); l42 = (l42 + 1)) fRec43[l42] = 0.0;
	for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) fVec4[l43] = 0.0;
	for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) fRec42[l44] = 0.0;
	for (int l45 = 0; (l45 < 3); l45 = (l45 + 1)) fRec41[l45] = 0.0;
	for (int l46 = 0; (l46 < 3); l46 = (l46 + 1)) fRec40[l46] = 0.0;
	for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) fRec52[l47] = 0.0;
	for (int l48 = 0; (l48 < 3); l48 = (l48 + 1)) fRec51[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fVec5[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) fRec50[l50] = 0.0;
	for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) fRec49[l51] = 0.0;
	for (int l52 = 0; (l52 < 3); l52 = (l52 + 1)) fRec48[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) fRec47[l53] = 0.0;
	for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) fRec46[l54] = 0.0;
	for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) fRec45[l55] = 0.0;
	for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) fRec36[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) iRec37[l57] = 0;
	for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) fRec38[l58] = 0.0;
	for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) fRec56[l59] = 0.0;
	for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) fRec60[l60] = 0.0;
	for (int l61 = 0; (l61 < 3); l61 = (l61 + 1)) fRec59[l61] = 0.0;
	for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) fVec6[l62] = 0.0;
	for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) fRec58[l63] = 0.0;
	for (int l64 = 0; (l64 < 3); l64 = (l64 + 1)) fRec57[l64] = 0.0;
	for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) fRec67[l65] = 0.0;
	for (int l66 = 0; (l66 < 3); l66 = (l66 + 1)) fRec66[l66] = 0.0;
	for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) fVec7[l67] = 0.0;
	for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) fRec65[l68] = 0.0;
	for (int l69 = 0; (l69 < 3); l69 = (l69 + 1)) fRec64[l69] = 0.0;
	for (int l70 = 0; (l70 < 2); l70 = (l70 + 1)) fRec63[l70] = 0.0;
	for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) fRec62[l71] = 0.0;
	for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) fRec61[l72] = 0.0;
	for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) fRec53[l73] = 0.0;
	for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) iRec54[l74] = 0;
	for (int l75 = 0; (l75 < 2); l75 = (l75 + 1)) fRec55[l75] = 0.0;
	for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) fRec71[l76] = 0.0;
	for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) fRec73[l77] = 0.0;
	for (int l78 = 0; (l78 < 3); l78 = (l78 + 1)) fRec72[l78] = 0.0;
	for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) fRec78[l79] = 0.0;
	for (int l80 = 0; (l80 < 3); l80 = (l80 + 1)) fRec77[l80] = 0.0;
	for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) fRec76[l81] = 0.0;
	for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) fRec75[l82] = 0.0;
	for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) fRec74[l83] = 0.0;
	for (int l84 = 0; (l84 < 2); l84 = (l84 + 1)) fRec68[l84] = 0.0;
	for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) iRec69[l85] = 0;
	for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) fRec70[l86] = 0.0;
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
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1)
{
	double fSlow0 = double(fHslider0);
	double fSlow1 = std::fabs((std::max<double>(0.0, (fSlow0 + -2.0)) + -1.0));
	double fSlow2 = double(fHslider1);
	double fSlow3 = std::max<double>(0.0, (fSlow0 + -1.0));
	double fSlow4 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * ((fSlow2 - double(fHslider2)) * std::fabs((fSlow3 + -1.0))))));
	int iSlow5 = int(fSlow3);
	double fSlow6 = std::tan((fConst2 * double(fHslider3)));
	double fSlow7 = (1.0 / fSlow6);
	double fSlow8 = (((fSlow7 + 1.0000000000000004) / fSlow6) + 1.0);
	double fSlow9 = (1.0 / fSlow8);
	double fSlow10 = mydsp_faustpower2_f(fSlow6);
	double fSlow11 = (1.0 / fSlow10);
	double fSlow12 = (fSlow7 + 1.0);
	double fSlow13 = (0.0 - (1.0 / (fSlow6 * fSlow12)));
	double fSlow14 = (1.0 / fSlow12);
	double fSlow15 = (1.0 - fSlow7);
	double fSlow16 = (((fSlow7 + -1.0000000000000004) / fSlow6) + 1.0);
	double fSlow17 = (2.0 * (1.0 - fSlow11));
	double fSlow18 = (0.0 - (2.0 / fSlow10));
	double fSlow19 = std::tan((fConst2 * double(fHslider4)));
	double fSlow20 = (1.0 / fSlow19);
	double fSlow21 = (fSlow20 + 1.0);
	double fSlow22 = (1.0 / ((fSlow21 / fSlow19) + 1.0));
	double fSlow23 = (1.0 - fSlow20);
	double fSlow24 = (1.0 - (fSlow23 / fSlow19));
	double fSlow25 = mydsp_faustpower2_f(fSlow19);
	double fSlow26 = (1.0 / fSlow25);
	double fSlow27 = (2.0 * (1.0 - fSlow26));
	double fSlow28 = std::tan((fConst2 * double(fHslider5)));
	double fSlow29 = (1.0 / fSlow28);
	double fSlow30 = (fSlow29 + 1.0);
	double fSlow31 = (1.0 / ((fSlow30 / fSlow28) + 1.0));
	double fSlow32 = (1.0 - fSlow29);
	double fSlow33 = (1.0 - (fSlow32 / fSlow28));
	double fSlow34 = mydsp_faustpower2_f(fSlow28);
	double fSlow35 = (1.0 / fSlow34);
	double fSlow36 = (2.0 * (1.0 - fSlow35));
	double fSlow37 = std::tan((fConst2 * double(fHslider6)));
	double fSlow38 = (1.0 / fSlow37);
	double fSlow39 = (fSlow38 + 1.0);
	double fSlow40 = (1.0 / ((fSlow39 / fSlow37) + 1.0));
	double fSlow41 = (1.0 - fSlow38);
	double fSlow42 = (1.0 - (fSlow41 / fSlow37));
	double fSlow43 = mydsp_faustpower2_f(fSlow37);
	double fSlow44 = (1.0 / fSlow43);
	double fSlow45 = (2.0 * (1.0 - fSlow44));
	double fSlow46 = double(fHslider7);
	double fSlow47 = (0.5 * fSlow46);
	int iSlow48 = (std::fabs(fSlow47) < 2.2204460492503131e-16);
	double fThen2 = std::exp((0.0 - (fConst1 / (iSlow48 ? 1.0 : fSlow47))));
	double fSlow49 = (iSlow48 ? 0.0 : fThen2);
	double fSlow50 = ((1.0 / std::max<double>(2.2204460492503131e-16, double(fHslider8))) + -1.0);
	int iSlow51 = (std::fabs(fSlow46) < 2.2204460492503131e-16);
	double fThen5 = std::exp((0.0 - (fConst1 / (iSlow51 ? 1.0 : fSlow46))));
	double fSlow52 = (iSlow51 ? 0.0 : fThen5);
	double fSlow53 = double(fHslider9);
	int iSlow54 = (std::fabs(fSlow53) < 2.2204460492503131e-16);
	double fThen7 = std::exp((0.0 - (fConst1 / (iSlow54 ? 1.0 : fSlow53))));
	double fSlow55 = (iSlow54 ? 0.0 : fThen7);
	double fSlow56 = (1.0 - fSlow49);
	double fSlow57 = double(fHslider10);
	double fSlow58 = std::fabs((std::max<double>(0.0, (fSlow57 + -2.0)) + -1.0));
	double fSlow59 = double(fHslider11);
	double fSlow60 = std::max<double>(0.0, (fSlow57 + -1.0));
	double fSlow61 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * ((fSlow59 - double(fHslider12)) * std::fabs((fSlow60 + -1.0))))));
	int iSlow62 = int(fSlow60);
	double fSlow63 = (((fSlow20 + 1.0000000000000004) / fSlow19) + 1.0);
	double fSlow64 = (1.0 / fSlow63);
	double fSlow65 = (0.0 - (1.0 / (fSlow19 * fSlow21)));
	double fSlow66 = (1.0 / fSlow21);
	double fSlow67 = (1.0 / (fSlow19 * fSlow8));
	double fSlow68 = (((fSlow20 + -1.0000000000000004) / fSlow19) + 1.0);
	double fSlow69 = (0.0 - (2.0 / fSlow25));
	double fSlow70 = double(fHslider13);
	double fSlow71 = (0.5 * fSlow70);
	int iSlow72 = (std::fabs(fSlow71) < 2.2204460492503131e-16);
	double fThen16 = std::exp((0.0 - (fConst1 / (iSlow72 ? 1.0 : fSlow71))));
	double fSlow73 = (iSlow72 ? 0.0 : fThen16);
	double fSlow74 = ((1.0 / std::max<double>(2.2204460492503131e-16, double(fHslider14))) + -1.0);
	int iSlow75 = (std::fabs(fSlow70) < 2.2204460492503131e-16);
	double fThen19 = std::exp((0.0 - (fConst1 / (iSlow75 ? 1.0 : fSlow70))));
	double fSlow76 = (iSlow75 ? 0.0 : fThen19);
	double fSlow77 = double(fHslider15);
	int iSlow78 = (std::fabs(fSlow77) < 2.2204460492503131e-16);
	double fThen21 = std::exp((0.0 - (fConst1 / (iSlow78 ? 1.0 : fSlow77))));
	double fSlow79 = (iSlow78 ? 0.0 : fThen21);
	double fSlow80 = (1.0 - fSlow73);
	double fSlow81 = double(fHslider16);
	double fSlow82 = std::fabs((std::max<double>(0.0, (fSlow81 + -2.0)) + -1.0));
	double fSlow83 = double(fHslider17);
	double fSlow84 = std::max<double>(0.0, (fSlow81 + -1.0));
	double fSlow85 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * ((fSlow83 - double(fHslider18)) * std::fabs((fSlow84 + -1.0))))));
	int iSlow86 = int(fSlow84);
	double fSlow87 = (((fSlow29 + 1.0000000000000004) / fSlow28) + 1.0);
	double fSlow88 = (1.0 / fSlow87);
	double fSlow89 = (0.0 - (1.0 / (fSlow28 * fSlow30)));
	double fSlow90 = (1.0 / fSlow30);
	double fSlow91 = (1.0 / (fSlow28 * fSlow63));
	double fSlow92 = (((fSlow29 + -1.0000000000000004) / fSlow28) + 1.0);
	double fSlow93 = (0.0 - (2.0 / fSlow34));
	double fSlow94 = double(fHslider19);
	double fSlow95 = (0.5 * fSlow94);
	int iSlow96 = (std::fabs(fSlow95) < 2.2204460492503131e-16);
	double fThen30 = std::exp((0.0 - (fConst1 / (iSlow96 ? 1.0 : fSlow95))));
	double fSlow97 = (iSlow96 ? 0.0 : fThen30);
	double fSlow98 = ((1.0 / std::max<double>(2.2204460492503131e-16, double(fHslider20))) + -1.0);
	int iSlow99 = (std::fabs(fSlow94) < 2.2204460492503131e-16);
	double fThen33 = std::exp((0.0 - (fConst1 / (iSlow99 ? 1.0 : fSlow94))));
	double fSlow100 = (iSlow99 ? 0.0 : fThen33);
	double fSlow101 = double(fHslider21);
	int iSlow102 = (std::fabs(fSlow101) < 2.2204460492503131e-16);
	double fThen35 = std::exp((0.0 - (fConst1 / (iSlow102 ? 1.0 : fSlow101))));
	double fSlow103 = (iSlow102 ? 0.0 : fThen35);
	double fSlow104 = (1.0 - fSlow97);
	double fSlow105 = double(fHslider22);
	double fSlow106 = std::fabs((std::max<double>(0.0, (fSlow105 + -2.0)) + -1.0));
	double fSlow107 = double(fHslider23);
	double fSlow108 = std::max<double>(0.0, (fSlow105 + -1.0));
	double fSlow109 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * ((fSlow107 - double(fHslider24)) * std::fabs((fSlow108 + -1.0))))));
	int iSlow110 = int(fSlow108);
	double fSlow111 = (1.0 / (((fSlow38 + 1.0000000000000004) / fSlow37) + 1.0));
	double fSlow112 = (0.0 - (1.0 / (fSlow37 * fSlow39)));
	double fSlow113 = (1.0 / fSlow39);
	double fSlow114 = (1.0 / (fSlow37 * fSlow87));
	double fSlow115 = (((fSlow38 + -1.0000000000000004) / fSlow37) + 1.0);
	double fSlow116 = (0.0 - (2.0 / fSlow43));
	double fSlow117 = double(fHslider25);
	double fSlow118 = (0.5 * fSlow117);
	int iSlow119 = (std::fabs(fSlow118) < 2.2204460492503131e-16);
	double fThen44 = std::exp((0.0 - (fConst1 / (iSlow119 ? 1.0 : fSlow118))));
	double fSlow120 = (iSlow119 ? 0.0 : fThen44);
	double fSlow121 = ((1.0 / std::max<double>(2.2204460492503131e-16, double(fHslider26))) + -1.0);
	int iSlow122 = (std::fabs(fSlow117) < 2.2204460492503131e-16);
	double fThen47 = std::exp((0.0 - (fConst1 / (iSlow122 ? 1.0 : fSlow117))));
	double fSlow123 = (iSlow122 ? 0.0 : fThen47);
	double fSlow124 = double(fHslider27);
	int iSlow125 = (std::fabs(fSlow124) < 2.2204460492503131e-16);
	double fThen49 = std::exp((0.0 - (fConst1 / (iSlow125 ? 1.0 : fSlow124))));
	double fSlow126 = (iSlow125 ? 0.0 : fThen49);
	double fSlow127 = (1.0 - fSlow120);
	double fSlow128 = double(fHslider28);
	double fSlow129 = std::fabs((std::max<double>(0.0, (fSlow128 + -2.0)) + -1.0));
	double fSlow130 = double(fHslider29);
	double fSlow131 = std::max<double>(0.0, (fSlow128 + -1.0));
	double fSlow132 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * ((fSlow130 - double(fHslider30)) * std::fabs((fSlow131 + -1.0))))));
	int iSlow133 = int(fSlow131);
	double fSlow134 = double(fHslider31);
	double fSlow135 = (0.5 * fSlow134);
	int iSlow136 = (std::fabs(fSlow135) < 2.2204460492503131e-16);
	double fThen58 = std::exp((0.0 - (fConst1 / (iSlow136 ? 1.0 : fSlow135))));
	double fSlow137 = (iSlow136 ? 0.0 : fThen58);
	double fSlow138 = ((1.0 / std::max<double>(2.2204460492503131e-16, double(fHslider32))) + -1.0);
	int iSlow139 = (std::fabs(fSlow134) < 2.2204460492503131e-16);
	double fThen61 = std::exp((0.0 - (fConst1 / (iSlow139 ? 1.0 : fSlow134))));
	double fSlow140 = (iSlow139 ? 0.0 : fThen61);
	double fSlow141 = double(fHslider33);
	int iSlow142 = (std::fabs(fSlow141) < 2.2204460492503131e-16);
	double fThen63 = std::exp((0.0 - (fConst1 / (iSlow142 ? 1.0 : fSlow141))));
	double fSlow143 = (iSlow142 ? 0.0 : fThen63);
	double fSlow144 = (1.0 - fSlow137);
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		int iTemp0 = (iRec1[1] < 4096);
		fRec3[0] = (fSlow4 + (0.999 * fRec3[1]));
		double fTemp1 = double(input0[i0]);
		fVec0[0] = fTemp1;
		fRec8[0] = ((fSlow13 * fVec0[1]) - (fSlow14 * ((fSlow15 * fRec8[1]) - (fSlow7 * fTemp1))));
		fRec7[0] = (fRec8[0] - (fSlow9 * ((fSlow16 * fRec7[2]) + (fSlow17 * fRec7[1]))));
		double fTemp2 = (fSlow27 * fRec6[1]);
		fRec6[0] = ((fSlow9 * (((fSlow11 * fRec7[0]) + (fSlow18 * fRec7[1])) + (fSlow11 * fRec7[2]))) - (fSlow22 * ((fSlow24 * fRec6[2]) + fTemp2)));
		double fTemp3 = (fSlow36 * fRec5[1]);
		fRec5[0] = ((fRec6[2] + (fSlow22 * (fTemp2 + (fSlow24 * fRec6[0])))) - (fSlow31 * ((fSlow33 * fRec5[2]) + fTemp3)));
		double fTemp4 = (fSlow45 * fRec4[1]);
		fRec4[0] = ((fRec5[2] + (fSlow31 * (fTemp3 + (fSlow33 * fRec5[0])))) - (fSlow40 * ((fSlow42 * fRec4[2]) + fTemp4)));
		double fTemp5 = (fRec4[2] + (fSlow40 * (fTemp4 + (fSlow42 * fRec4[0]))));
		double fTemp6 = (iSlow5 ? 0.0 : fTemp5);
		double fTemp7 = double(input1[i0]);
		fVec1[0] = fTemp7;
		fRec16[0] = ((fSlow13 * fVec1[1]) - (fSlow14 * ((fSlow15 * fRec16[1]) - (fSlow7 * fTemp7))));
		fRec15[0] = (fRec16[0] - (fSlow9 * ((fSlow16 * fRec15[2]) + (fSlow17 * fRec15[1]))));
		double fTemp8 = (fSlow27 * fRec14[1]);
		fRec14[0] = ((fSlow9 * (((fSlow11 * fRec15[0]) + (fSlow18 * fRec15[1])) + (fSlow11 * fRec15[2]))) - (fSlow22 * ((fSlow24 * fRec14[2]) + fTemp8)));
		double fTemp9 = (fSlow36 * fRec13[1]);
		fRec13[0] = ((fRec14[2] + (fSlow22 * (fTemp8 + (fSlow24 * fRec14[0])))) - (fSlow31 * ((fSlow33 * fRec13[2]) + fTemp9)));
		double fTemp10 = (fSlow45 * fRec12[1]);
		fRec12[0] = ((fRec13[2] + (fSlow31 * (fTemp9 + (fSlow33 * fRec13[0])))) - (fSlow40 * ((fSlow42 * fRec12[2]) + fTemp10)));
		double fTemp11 = (fRec12[2] + (fSlow40 * (fTemp10 + (fSlow42 * fRec12[0]))));
		double fTemp12 = (iSlow5 ? 0.0 : fTemp11);
		double fTemp13 = std::fabs((std::fabs(fTemp6) + std::fabs(fTemp12)));
		double fTemp14 = ((fRec10[1] > fTemp13) ? fSlow55 : fSlow52);
		fRec11[0] = ((fRec11[1] * fTemp14) + (fTemp13 * (1.0 - fTemp14)));
		fRec10[0] = fRec11[0];
		fRec9[0] = ((fRec9[1] * fSlow49) + (fSlow50 * (std::max<double>((fSlow2 + (20.0 * std::log10(std::max<double>(2.2250738585072014e-308, fRec10[0])))), 0.0) * fSlow56)));
		double fTemp15 = std::pow(10.0, (0.050000000000000003 * fRec9[0]));
		double fThen9 = (fTemp6 * fTemp15);
		double fTemp16 = (fSlow1 * (fRec3[0] * (iSlow5 ? fTemp5 : fThen9)));
		double fThen10 = (fTemp12 * fTemp15);
		double fTemp17 = (fSlow1 * (fRec3[0] * (iSlow5 ? fTemp11 : fThen10)));
		double fTemp18 = std::max<double>(fConst1, (std::fabs(fTemp16) + std::fabs(fTemp17)));
		double fElse11 = (fTemp18 + fRec0[1]);
		fRec0[0] = (iTemp0 ? fElse11 : fTemp18);
		int iElse12 = (iRec1[1] + 1);
		iRec1[0] = (iTemp0 ? iElse12 : 1);
		double fThen13 = (0.000244140625 * fRec0[1]);
		fRec2[0] = (iTemp0 ? fRec2[1] : fThen13);
		fVbargraph0 = FAUSTFLOAT((0.5 * fRec2[0]));
		int iTemp19 = (iRec18[1] < 4096);
		fRec20[0] = (fSlow61 + (0.999 * fRec20[1]));
		fRec26[0] = (0.0 - (fSlow14 * ((fSlow15 * fRec26[1]) - (fTemp1 + fVec0[1]))));
		fRec25[0] = (fRec26[0] - (fSlow9 * ((fSlow16 * fRec25[2]) + (fSlow17 * fRec25[1]))));
		double fTemp20 = (fRec25[2] + (fRec25[0] + (2.0 * fRec25[1])));
		double fTemp21 = (fSlow9 * fTemp20);
		fVec2[0] = fTemp21;
		fRec24[0] = ((fSlow65 * fVec2[1]) - (fSlow66 * ((fSlow23 * fRec24[1]) - (fSlow67 * fTemp20))));
		fRec23[0] = (fRec24[0] - (fSlow64 * ((fSlow68 * fRec23[2]) + (fSlow27 * fRec23[1]))));
		double fTemp22 = (fSlow36 * fRec22[1]);
		fRec22[0] = ((fSlow64 * (((fSlow26 * fRec23[0]) + (fSlow69 * fRec23[1])) + (fSlow26 * fRec23[2]))) - (fSlow31 * ((fSlow33 * fRec22[2]) + fTemp22)));
		double fTemp23 = (fSlow45 * fRec21[1]);
		fRec21[0] = ((fRec22[2] + (fSlow31 * (fTemp22 + (fSlow33 * fRec22[0])))) - (fSlow40 * ((fSlow42 * fRec21[2]) + fTemp23)));
		double fTemp24 = (fRec21[2] + (fSlow40 * (fTemp23 + (fSlow42 * fRec21[0]))));
		double fTemp25 = (iSlow62 ? 0.0 : fTemp24);
		fRec35[0] = (0.0 - (fSlow14 * ((fSlow15 * fRec35[1]) - (fTemp7 + fVec1[1]))));
		fRec34[0] = (fRec35[0] - (fSlow9 * ((fSlow16 * fRec34[2]) + (fSlow17 * fRec34[1]))));
		double fTemp26 = (fRec34[2] + (fRec34[0] + (2.0 * fRec34[1])));
		double fTemp27 = (fSlow9 * fTemp26);
		fVec3[0] = fTemp27;
		fRec33[0] = ((fSlow65 * fVec3[1]) - (fSlow66 * ((fSlow23 * fRec33[1]) - (fSlow67 * fTemp26))));
		fRec32[0] = (fRec33[0] - (fSlow64 * ((fSlow68 * fRec32[2]) + (fSlow27 * fRec32[1]))));
		double fTemp28 = (fSlow36 * fRec31[1]);
		fRec31[0] = ((fSlow64 * (((fSlow26 * fRec32[0]) + (fSlow69 * fRec32[1])) + (fSlow26 * fRec32[2]))) - (fSlow31 * ((fSlow33 * fRec31[2]) + fTemp28)));
		double fTemp29 = (fSlow45 * fRec30[1]);
		fRec30[0] = ((fRec31[2] + (fSlow31 * (fTemp28 + (fSlow33 * fRec31[0])))) - (fSlow40 * ((fSlow42 * fRec30[2]) + fTemp29)));
		double fTemp30 = (fRec30[2] + (fSlow40 * (fTemp29 + (fSlow42 * fRec30[0]))));
		double fTemp31 = (iSlow62 ? 0.0 : fTemp30);
		double fTemp32 = std::fabs((std::fabs(fTemp25) + std::fabs(fTemp31)));
		double fTemp33 = ((fRec28[1] > fTemp32) ? fSlow79 : fSlow76);
		fRec29[0] = ((fRec29[1] * fTemp33) + (fTemp32 * (1.0 - fTemp33)));
		fRec28[0] = fRec29[0];
		fRec27[0] = ((fRec27[1] * fSlow73) + (fSlow74 * (std::max<double>((fSlow59 + (20.0 * std::log10(std::max<double>(2.2250738585072014e-308, fRec28[0])))), 0.0) * fSlow80)));
		double fTemp34 = std::pow(10.0, (0.050000000000000003 * fRec27[0]));
		double fThen23 = (fTemp25 * fTemp34);
		double fTemp35 = (fSlow58 * (fRec20[0] * (iSlow62 ? fTemp24 : fThen23)));
		double fThen24 = (fTemp31 * fTemp34);
		double fTemp36 = (fSlow58 * (fRec20[0] * (iSlow62 ? fTemp30 : fThen24)));
		double fTemp37 = std::max<double>(fConst1, (std::fabs(fTemp35) + std::fabs(fTemp36)));
		double fElse25 = (fTemp37 + fRec17[1]);
		fRec17[0] = (iTemp19 ? fElse25 : fTemp37);
		int iElse26 = (iRec18[1] + 1);
		iRec18[0] = (iTemp19 ? iElse26 : 1);
		double fThen27 = (0.000244140625 * fRec17[1]);
		fRec19[0] = (iTemp19 ? fRec19[1] : fThen27);
		fVbargraph1 = FAUSTFLOAT((0.5 * fRec19[0]));
		int iTemp38 = (iRec37[1] < 4096);
		fRec39[0] = (fSlow85 + (0.999 * fRec39[1]));
		fRec44[0] = (0.0 - (fSlow66 * ((fSlow23 * fRec44[1]) - (fTemp21 + fVec2[1]))));
		fRec43[0] = (fRec44[0] - (fSlow64 * ((fSlow68 * fRec43[2]) + (fSlow27 * fRec43[1]))));
		double fTemp39 = (fRec43[2] + (fRec43[0] + (2.0 * fRec43[1])));
		double fTemp40 = (fSlow64 * fTemp39);
		fVec4[0] = fTemp40;
		fRec42[0] = ((fSlow89 * fVec4[1]) - (fSlow90 * ((fSlow32 * fRec42[1]) - (fSlow91 * fTemp39))));
		fRec41[0] = (fRec42[0] - (fSlow88 * ((fSlow92 * fRec41[2]) + (fSlow36 * fRec41[1]))));
		double fTemp41 = (fSlow45 * fRec40[1]);
		fRec40[0] = ((fSlow88 * (((fSlow35 * fRec41[0]) + (fSlow93 * fRec41[1])) + (fSlow35 * fRec41[2]))) - (fSlow40 * ((fSlow42 * fRec40[2]) + fTemp41)));
		double fTemp42 = (fRec40[2] + (fSlow40 * (fTemp41 + (fSlow42 * fRec40[0]))));
		double fTemp43 = (iSlow86 ? 0.0 : fTemp42);
		fRec52[0] = (0.0 - (fSlow66 * ((fSlow23 * fRec52[1]) - (fTemp27 + fVec3[1]))));
		fRec51[0] = (fRec52[0] - (fSlow64 * ((fSlow68 * fRec51[2]) + (fSlow27 * fRec51[1]))));
		double fTemp44 = (fRec51[2] + (fRec51[0] + (2.0 * fRec51[1])));
		double fTemp45 = (fSlow64 * fTemp44);
		fVec5[0] = fTemp45;
		fRec50[0] = ((fSlow89 * fVec5[1]) - (fSlow90 * ((fSlow32 * fRec50[1]) - (fSlow91 * fTemp44))));
		fRec49[0] = (fRec50[0] - (fSlow88 * ((fSlow92 * fRec49[2]) + (fSlow36 * fRec49[1]))));
		double fTemp46 = (fSlow45 * fRec48[1]);
		fRec48[0] = ((fSlow88 * (((fSlow35 * fRec49[0]) + (fSlow93 * fRec49[1])) + (fSlow35 * fRec49[2]))) - (fSlow40 * ((fSlow42 * fRec48[2]) + fTemp46)));
		double fTemp47 = (fRec48[2] + (fSlow40 * (fTemp46 + (fSlow42 * fRec48[0]))));
		double fTemp48 = (iSlow86 ? 0.0 : fTemp47);
		double fTemp49 = std::fabs((std::fabs(fTemp43) + std::fabs(fTemp48)));
		double fTemp50 = ((fRec46[1] > fTemp49) ? fSlow103 : fSlow100);
		fRec47[0] = ((fRec47[1] * fTemp50) + (fTemp49 * (1.0 - fTemp50)));
		fRec46[0] = fRec47[0];
		fRec45[0] = ((fRec45[1] * fSlow97) + (fSlow98 * (std::max<double>((fSlow83 + (20.0 * std::log10(std::max<double>(2.2250738585072014e-308, fRec46[0])))), 0.0) * fSlow104)));
		double fTemp51 = std::pow(10.0, (0.050000000000000003 * fRec45[0]));
		double fThen37 = (fTemp43 * fTemp51);
		double fTemp52 = (fSlow82 * (fRec39[0] * (iSlow86 ? fTemp42 : fThen37)));
		double fThen38 = (fTemp48 * fTemp51);
		double fTemp53 = (fSlow82 * (fRec39[0] * (iSlow86 ? fTemp47 : fThen38)));
		double fTemp54 = std::max<double>(fConst1, (std::fabs(fTemp52) + std::fabs(fTemp53)));
		double fElse39 = (fTemp54 + fRec36[1]);
		fRec36[0] = (iTemp38 ? fElse39 : fTemp54);
		int iElse40 = (iRec37[1] + 1);
		iRec37[0] = (iTemp38 ? iElse40 : 1);
		double fThen41 = (0.000244140625 * fRec36[1]);
		fRec38[0] = (iTemp38 ? fRec38[1] : fThen41);
		fVbargraph2 = FAUSTFLOAT((0.5 * fRec38[0]));
		int iTemp55 = (iRec54[1] < 4096);
		fRec56[0] = (fSlow109 + (0.999 * fRec56[1]));
		fRec60[0] = (0.0 - (fSlow90 * ((fSlow32 * fRec60[1]) - (fTemp40 + fVec4[1]))));
		fRec59[0] = (fRec60[0] - (fSlow88 * ((fSlow92 * fRec59[2]) + (fSlow36 * fRec59[1]))));
		double fTemp56 = (fRec59[2] + (fRec59[0] + (2.0 * fRec59[1])));
		double fTemp57 = (fSlow88 * fTemp56);
		fVec6[0] = fTemp57;
		fRec58[0] = ((fSlow112 * fVec6[1]) - (fSlow113 * ((fSlow41 * fRec58[1]) - (fSlow114 * fTemp56))));
		fRec57[0] = (fRec58[0] - (fSlow111 * ((fSlow115 * fRec57[2]) + (fSlow45 * fRec57[1]))));
		double fTemp58 = (fSlow111 * (((fSlow44 * fRec57[0]) + (fSlow116 * fRec57[1])) + (fSlow44 * fRec57[2])));
		double fTemp59 = (iSlow110 ? 0.0 : fTemp58);
		fRec67[0] = (0.0 - (fSlow90 * ((fSlow32 * fRec67[1]) - (fTemp45 + fVec5[1]))));
		fRec66[0] = (fRec67[0] - (fSlow88 * ((fSlow92 * fRec66[2]) + (fSlow36 * fRec66[1]))));
		double fTemp60 = (fRec66[2] + (fRec66[0] + (2.0 * fRec66[1])));
		double fTemp61 = (fSlow88 * fTemp60);
		fVec7[0] = fTemp61;
		fRec65[0] = ((fSlow112 * fVec7[1]) - (fSlow113 * ((fSlow41 * fRec65[1]) - (fSlow114 * fTemp60))));
		fRec64[0] = (fRec65[0] - (fSlow111 * ((fSlow115 * fRec64[2]) + (fSlow45 * fRec64[1]))));
		double fTemp62 = (fSlow111 * (((fSlow44 * fRec64[0]) + (fSlow116 * fRec64[1])) + (fSlow44 * fRec64[2])));
		double fTemp63 = (iSlow110 ? 0.0 : fTemp62);
		double fTemp64 = std::fabs((std::fabs(fTemp59) + std::fabs(fTemp63)));
		double fTemp65 = ((fRec62[1] > fTemp64) ? fSlow126 : fSlow123);
		fRec63[0] = ((fRec63[1] * fTemp65) + (fTemp64 * (1.0 - fTemp65)));
		fRec62[0] = fRec63[0];
		fRec61[0] = ((fRec61[1] * fSlow120) + (fSlow121 * (std::max<double>((fSlow107 + (20.0 * std::log10(std::max<double>(2.2250738585072014e-308, fRec62[0])))), 0.0) * fSlow127)));
		double fTemp66 = std::pow(10.0, (0.050000000000000003 * fRec61[0]));
		double fThen51 = (fTemp59 * fTemp66);
		double fTemp67 = (fSlow106 * (fRec56[0] * (iSlow110 ? fTemp58 : fThen51)));
		double fThen52 = (fTemp63 * fTemp66);
		double fTemp68 = (fSlow106 * (fRec56[0] * (iSlow110 ? fTemp62 : fThen52)));
		double fTemp69 = std::max<double>(fConst1, (std::fabs(fTemp67) + std::fabs(fTemp68)));
		double fElse53 = (fTemp69 + fRec53[1]);
		fRec53[0] = (iTemp55 ? fElse53 : fTemp69);
		int iElse54 = (iRec54[1] + 1);
		iRec54[0] = (iTemp55 ? iElse54 : 1);
		double fThen55 = (0.000244140625 * fRec53[1]);
		fRec55[0] = (iTemp55 ? fRec55[1] : fThen55);
		fVbargraph3 = FAUSTFLOAT((0.5 * fRec55[0]));
		int iTemp70 = (iRec69[1] < 4096);
		fRec71[0] = (fSlow132 + (0.999 * fRec71[1]));
		fRec73[0] = (0.0 - (fSlow113 * ((fSlow41 * fRec73[1]) - (fTemp57 + fVec6[1]))));
		fRec72[0] = (fRec73[0] - (fSlow111 * ((fSlow115 * fRec72[2]) + (fSlow45 * fRec72[1]))));
		double fTemp71 = (fSlow111 * (fRec72[2] + (fRec72[0] + (2.0 * fRec72[1]))));
		double fTemp72 = (iSlow133 ? 0.0 : fTemp71);
		fRec78[0] = (0.0 - (fSlow113 * ((fSlow41 * fRec78[1]) - (fTemp61 + fVec7[1]))));
		fRec77[0] = (fRec78[0] - (fSlow111 * ((fSlow115 * fRec77[2]) + (fSlow45 * fRec77[1]))));
		double fTemp73 = (fSlow111 * (fRec77[2] + (fRec77[0] + (2.0 * fRec77[1]))));
		double fTemp74 = (iSlow133 ? 0.0 : fTemp73);
		double fTemp75 = std::fabs((std::fabs(fTemp72) + std::fabs(fTemp74)));
		double fTemp76 = ((fRec75[1] > fTemp75) ? fSlow143 : fSlow140);
		fRec76[0] = ((fRec76[1] * fTemp76) + (fTemp75 * (1.0 - fTemp76)));
		fRec75[0] = fRec76[0];
		fRec74[0] = ((fRec74[1] * fSlow137) + (fSlow138 * (std::max<double>((fSlow130 + (20.0 * std::log10(std::max<double>(2.2250738585072014e-308, fRec75[0])))), 0.0) * fSlow144)));
		double fTemp77 = std::pow(10.0, (0.050000000000000003 * fRec74[0]));
		double fThen65 = (fTemp72 * fTemp77);
		double fTemp78 = (fSlow129 * (fRec71[0] * (iSlow133 ? fTemp71 : fThen65)));
		double fThen66 = (fTemp74 * fTemp77);
		double fTemp79 = (fSlow129 * (fRec71[0] * (iSlow133 ? fTemp73 : fThen66)));
		double fTemp80 = std::max<double>(fConst1, (std::fabs(fTemp78) + std::fabs(fTemp79)));
		double fElse67 = (fTemp80 + fRec68[1]);
		fRec68[0] = (iTemp70 ? fElse67 : fTemp80);
		int iElse68 = (iRec69[1] + 1);
		iRec69[0] = (iTemp70 ? iElse68 : 1);
		double fThen69 = (0.000244140625 * fRec68[1]);
		fRec70[0] = (iTemp70 ? fRec70[1] : fThen69);
		fVbargraph4 = FAUSTFLOAT((0.5 * fRec70[0]));
		output0[i0] = FAUSTFLOAT(((((fTemp16 + fTemp35) + fTemp52) + fTemp67) + fTemp78));
		output1[i0] = FAUSTFLOAT((fTemp79 + (fTemp68 + (fTemp53 + (fTemp17 + fTemp36)))));
		fRec3[1] = fRec3[0];
		fVec0[1] = fVec0[0];
		fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec5[2] = fRec5[1];
		fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1];
		fRec4[1] = fRec4[0];
		fVec1[1] = fVec1[0];
		fRec16[1] = fRec16[0];
		fRec15[2] = fRec15[1];
		fRec15[1] = fRec15[0];
		fRec14[2] = fRec14[1];
		fRec14[1] = fRec14[0];
		fRec13[2] = fRec13[1];
		fRec13[1] = fRec13[0];
		fRec12[2] = fRec12[1];
		fRec12[1] = fRec12[0];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fRec9[1] = fRec9[0];
		fRec0[1] = fRec0[0];
		iRec1[1] = iRec1[0];
		fRec2[1] = fRec2[0];
		fRec20[1] = fRec20[0];
		fRec26[1] = fRec26[0];
		fRec25[2] = fRec25[1];
		fRec25[1] = fRec25[0];
		fVec2[1] = fVec2[0];
		fRec24[1] = fRec24[0];
		fRec23[2] = fRec23[1];
		fRec23[1] = fRec23[0];
		fRec22[2] = fRec22[1];
		fRec22[1] = fRec22[0];
		fRec21[2] = fRec21[1];
		fRec21[1] = fRec21[0];
		fRec35[1] = fRec35[0];
		fRec34[2] = fRec34[1];
		fRec34[1] = fRec34[0];
		fVec3[1] = fVec3[0];
		fRec33[1] = fRec33[0];
		fRec32[2] = fRec32[1];
		fRec32[1] = fRec32[0];
		fRec31[2] = fRec31[1];
		fRec31[1] = fRec31[0];
		fRec30[2] = fRec30[1];
		fRec30[1] = fRec30[0];
		fRec29[1] = fRec29[0];
		fRec28[1] = fRec28[0];
		fRec27[1] = fRec27[0];
		fRec17[1] = fRec17[0];
		iRec18[1] = iRec18[0];
		fRec19[1] = fRec19[0];
		fRec39[1] = fRec39[0];
		fRec44[1] = fRec44[0];
		fRec43[2] = fRec43[1];
		fRec43[1] = fRec43[0];
		fVec4[1] = fVec4[0];
		fRec42[1] = fRec42[0];
		fRec41[2] = fRec41[1];
		fRec41[1] = fRec41[0];
		fRec40[2] = fRec40[1];
		fRec40[1] = fRec40[0];
		fRec52[1] = fRec52[0];
		fRec51[2] = fRec51[1];
		fRec51[1] = fRec51[0];
		fVec5[1] = fVec5[0];
		fRec50[1] = fRec50[0];
		fRec49[2] = fRec49[1];
		fRec49[1] = fRec49[0];
		fRec48[2] = fRec48[1];
		fRec48[1] = fRec48[0];
		fRec47[1] = fRec47[0];
		fRec46[1] = fRec46[0];
		fRec45[1] = fRec45[0];
		fRec36[1] = fRec36[0];
		iRec37[1] = iRec37[0];
		fRec38[1] = fRec38[0];
		fRec56[1] = fRec56[0];
		fRec60[1] = fRec60[0];
		fRec59[2] = fRec59[1];
		fRec59[1] = fRec59[0];
		fVec6[1] = fVec6[0];
		fRec58[1] = fRec58[0];
		fRec57[2] = fRec57[1];
		fRec57[1] = fRec57[0];
		fRec67[1] = fRec67[0];
		fRec66[2] = fRec66[1];
		fRec66[1] = fRec66[0];
		fVec7[1] = fVec7[0];
		fRec65[1] = fRec65[0];
		fRec64[2] = fRec64[1];
		fRec64[1] = fRec64[0];
		fRec63[1] = fRec63[0];
		fRec62[1] = fRec62[0];
		fRec61[1] = fRec61[0];
		fRec53[1] = fRec53[0];
		iRec54[1] = iRec54[0];
		fRec55[1] = fRec55[0];
		fRec71[1] = fRec71[0];
		fRec73[1] = fRec73[0];
		fRec72[2] = fRec72[1];
		fRec72[1] = fRec72[0];
		fRec78[1] = fRec78[0];
		fRec77[2] = fRec77[1];
		fRec77[1] = fRec77[0];
		fRec76[1] = fRec76[0];
		fRec75[1] = fRec75[0];
		fRec74[1] = fRec74[0];
		fRec68[1] = fRec68[0];
		iRec69[1] = iRec69[0];
		fRec70[1] = fRec70[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, input1, output0, output1);
}

int Dsp::register_par(const ParamReg& reg)
{
	static const value_pair fHslider28_values[] = {{"Compress"},{"Bypass"},{"Mute"},{0}};
	reg.registerFloatVar("mbcs.Mode1","","S",N_("Compress or Mute the selected band, or Bypass The Compressor"),&fHslider28, 1.0, 1.0, 3.0, 1.0, fHslider28_values);
	static const value_pair fHslider22_values[] = {{"Compress"},{"Bypass"},{"Mute"},{0}};
	reg.registerFloatVar("mbcs.Mode2","","S",N_("Compress or Mute the selected band, or Bypass The Compressor"),&fHslider22, 1.0, 1.0, 3.0, 1.0, fHslider22_values);
	static const value_pair fHslider16_values[] = {{"Compress"},{"Bypass"},{"Mute"},{0}};
	reg.registerFloatVar("mbcs.Mode3","","S",N_("Compress or Mute the selected band, or Bypass The Compressor"),&fHslider16, 1.0, 1.0, 3.0, 1.0, fHslider16_values);
	static const value_pair fHslider10_values[] = {{"Compress"},{"Bypass"},{"Mute"},{0}};
	reg.registerFloatVar("mbcs.Mode4","","S",N_("Compress or Mute the selected band, or Bypass The Compressor"),&fHslider10, 1.0, 1.0, 3.0, 1.0, fHslider10_values);
	static const value_pair fHslider0_values[] = {{"Compress"},{"Bypass"},{"Mute"},{0}};
	reg.registerFloatVar("mbcs.Mode5","","S",N_("Compress or Mute the selected band, or Bypass The Compressor"),&fHslider0, 1.0, 1.0, 3.0, 1.0, fHslider0_values);
	reg.registerFloatVar("mbcs.Makeup1","","S",N_("Post amplification and threshold"),&fHslider29, 13.0, -50.0, 50.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup2","","S",N_("Post amplification and threshold"),&fHslider23, 10.0, -50.0, 50.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup3","","S",N_("Post amplification and threshold"),&fHslider17, 4.0, -50.0, 50.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup4","","S",N_("Post amplification and threshold"),&fHslider11, 8.0, -50.0, 50.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup5","","S",N_("Post amplification and threshold"),&fHslider1, 11.0, -50.0, 50.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup-Threshold1","","S",N_("Threshold correction, an anticlip measure"),&fHslider30, 2.0, 0.0, 10.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup-Threshold2","","S",N_("Threshold correction, an anticlip measure"),&fHslider24, 2.0, 0.0, 10.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup-Threshold3","","S",N_("Threshold correction, an anticlip measure"),&fHslider18, 2.0, 0.0, 10.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup-Threshold4","","S",N_("Threshold correction, an anticlip measure"),&fHslider12, 2.0, 0.0, 10.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Makeup-Threshold5","","S",N_("Threshold correction, an anticlip measure"),&fHslider2, 2.0, 0.0, 10.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Ratio1","","S",N_("Compression ratio"),&fHslider32, 2.0, 1.0, 100.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Ratio2","","S",N_("Compression ratio"),&fHslider26, 2.0, 1.0, 100.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Ratio3","","S",N_("Compression ratio"),&fHslider20, 2.0, 1.0, 100.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Ratio4","","S",N_("Compression ratio"),&fHslider14, 2.0, 1.0, 100.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Ratio5","","S",N_("Compression ratio"),&fHslider8, 2.0, 1.0, 100.0, 0.10000000000000001, 0);
	reg.registerFloatVar("mbcs.Attack1","","S",N_("Time before the compressor starts to kick in"),&fHslider31, 0.012, 0.001, 1.0, 0.001, 0);
	reg.registerFloatVar("mbcs.Attack2","","S",N_("Time before the compressor starts to kick in"),&fHslider25, 0.012, 0.001, 1.0, 0.001, 0);
	reg.registerFloatVar("mbcs.Attack3","","S",N_("Time before the compressor starts to kick in"),&fHslider19, 0.012, 0.001, 1.0, 0.001, 0);
	reg.registerFloatVar("mbcs.Attack4","","S",N_("Time before the compressor starts to kick in"),&fHslider13, 0.012, 0.001, 1.0, 0.001, 0);
	reg.registerFloatVar("mbcs.Attack5","","S",N_("Time before the compressor starts to kick in"),&fHslider7, 0.012, 0.001, 1.0, 0.001, 0);
	reg.registerFloatVar("mbcs.Release1","","S",N_("Time before the compressor releases the sound"),&fHslider33, 1.25, 0.01, 10.0, 0.01, 0);
	reg.registerFloatVar("mbcs.Release2","","S",N_("Time before the compressor releases the sound"),&fHslider27, 1.25, 0.01, 10.0, 0.01, 0);
	reg.registerFloatVar("mbcs.Release3","","S",N_("Time before the compressor releases the sound"),&fHslider21, 1.25, 0.01, 10.0, 0.01, 0);
	reg.registerFloatVar("mbcs.Release4","","S",N_("Time before the compressor releases the sound"),&fHslider15, 1.25, 0.01, 10.0, 0.01, 0);
	reg.registerFloatVar("mbcs.Release5","","S",N_("Time before the compressor releases the sound"),&fHslider9, 1.25, 0.01, 10.0, 0.01, 0);
	reg.registerFloatVar("mbcs.crossover_b1_b2",N_("Crossover B1-B2 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider6, 80.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbcs.crossover_b2_b3",N_("Crossover B2-B3 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider5, 210.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbcs.crossover_b3_b4",N_("Crossover B3-B4 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider4, 1700.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbcs.crossover_b4_b5",N_("Crossover B4-B5 (hz)"),"SL",N_("Crossover fi.bandpass frequency"),&fHslider3, 5000.0, 20.0, 20000.0, 1.0800000000000001, 0);
	reg.registerFloatVar("mbcs.v1","","SOLN",N_("Sum of Band1"),&fVbargraph4, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbcs.v2","","SOLN",N_("Sum of Band2"),&fVbargraph3, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbcs.v3","","SOLN",N_("Sum of Band3"),&fVbargraph2, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbcs.v4","","SOLN",N_("Sum of Band4"),&fVbargraph1, 0, -70.0, 5.0, 0, 0);
	reg.registerFloatVar("mbcs.v5","","SOLN",N_("Sum of Band5"),&fVbargraph0, 0, -70.0, 5.0, 0, 0);
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
                <property name=\"spacing\">8</property>\n\
                <child>\n\
                  <object class=\"GtkNotebook\" id=\"notebook\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">True</property>\n\
                    <child>\n\
                      <object class=\"GtkBox\" id=\"hbox2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <child>\n\
                          <object class=\"GtkBox\" id=\"vbox3\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"spacing\">4</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"hbox4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"spacing\">15</property>\n\
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox4\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_1:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Ratio</property>\n\
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
                                        <property name=\"var_id\">mbcs.Ratio1</property>\n\
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
                                  <object class=\"GtkBox\" id=\"vbox5\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_2:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Makeup</property>\n\
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
                                        <property name=\"var_id\">mbcs.Makeup1</property>\n\
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
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox6\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_3:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Anticlip</property>\n\
                                      </object>\n\
                                      <packing>\n\
                                        <property name=\"expand\">False</property>\n\
                                        <property name=\"fill\">False</property>\n\
                                        <property name=\"position\">0</property>\n\
                                      </packing>\n\
                                    </child>\n\
                                    <child>\n\
                                      <object class=\"GxSmallKnobR\" id=\"gxmediumknob3\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">True</property>\n\
                                        <property name=\"receives_default\">True</property>\n\
                                        <property name=\"var_id\">mbcs.Makeup-Threshold1</property>\n\
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
                                    <property name=\"position\">2</property>\n\
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
                              <object class=\"GxSelector\" id=\"gxselector1\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Mode1</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">False</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table1\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob1\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Attack1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b1_b2</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_4:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Att</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_7:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_5:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Rel</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob3\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Release1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <placeholder/>\n\
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
                        <child>\n\
                          <object class=\"GtkBox\" id=\"vbox7\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"spacing\">4</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"hbox6\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"spacing\">15</property>\n\
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox8\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_8:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Ratio</property>\n\
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
                                        <property name=\"var_id\">mbcs.Ratio2</property>\n\
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
                                  <object class=\"GtkBox\" id=\"vbox9\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_9:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Makeup</property>\n\
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
                                        <property name=\"var_id\">mbcs.Makeup2</property>\n\
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
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox10\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_10:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Anticlip</property>\n\
                                      </object>\n\
                                      <packing>\n\
                                        <property name=\"expand\">False</property>\n\
                                        <property name=\"fill\">False</property>\n\
                                        <property name=\"position\">0</property>\n\
                                      </packing>\n\
                                    </child>\n\
                                    <child>\n\
                                      <object class=\"GxSmallKnobR\" id=\"gxmediumknob6\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">True</property>\n\
                                        <property name=\"receives_default\">True</property>\n\
                                        <property name=\"var_id\">mbcs.Makeup-Threshold2</property>\n\
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
                                    <property name=\"position\">2</property>\n\
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
                              <object class=\"GxSelector\" id=\"gxselector2\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Mode2</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">False</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table2\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob5\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Attack2</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob6\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b2_b3</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_11:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Att</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_14:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_13:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_12:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Rel</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob7\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b1_b2</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob8\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Release2</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
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
                        <child>\n\
                          <object class=\"GtkBox\" id=\"vbox11\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"spacing\">4</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"hbox8\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"spacing\">15</property>\n\
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox12\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_15:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Ratio</property>\n\
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
                                        <property name=\"var_id\">mbcs.Ratio3</property>\n\
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
                                  <object class=\"GtkBox\" id=\"vbox13\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_16:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Makeup</property>\n\
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
                                        <property name=\"var_id\">mbcs.Makeup3</property>\n\
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
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox14\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_17:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Anticlip</property>\n\
                                      </object>\n\
                                      <packing>\n\
                                        <property name=\"expand\">False</property>\n\
                                        <property name=\"fill\">False</property>\n\
                                        <property name=\"position\">0</property>\n\
                                      </packing>\n\
                                    </child>\n\
                                    <child>\n\
                                      <object class=\"GxSmallKnobR\" id=\"gxmediumknob9\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">True</property>\n\
                                        <property name=\"receives_default\">True</property>\n\
                                        <property name=\"var_id\">mbcs.Makeup-Threshold3</property>\n\
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
                                    <property name=\"position\">2</property>\n\
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
                              <object class=\"GxSelector\" id=\"gxselector3\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Mode3</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">False</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table3\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob9\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Attack3</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob10\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b3_b4</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_18:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Att</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_21:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_20:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_19:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Rel</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob11\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b2_b3</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob12\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Release3</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
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
                        <child>\n\
                          <object class=\"GtkBox\" id=\"vbox15\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"spacing\">4</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"hbox10\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"spacing\">15</property>\n\
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox16\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_22:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Ratio</property>\n\
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
                                        <property name=\"var_id\">mbcs.Ratio4</property>\n\
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
                                  <object class=\"GtkBox\" id=\"vbox17\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_23:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Makeup</property>\n\
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
                                        <property name=\"var_id\">mbcs.Makeup4</property>\n\
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
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox18\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_24:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Anticlip</property>\n\
                                      </object>\n\
                                      <packing>\n\
                                        <property name=\"expand\">False</property>\n\
                                        <property name=\"fill\">False</property>\n\
                                        <property name=\"position\">0</property>\n\
                                      </packing>\n\
                                    </child>\n\
                                    <child>\n\
                                      <object class=\"GxSmallKnobR\" id=\"gxmediumknob12\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">True</property>\n\
                                        <property name=\"receives_default\">True</property>\n\
                                        <property name=\"var_id\">mbcs.Makeup-Threshold4</property>\n\
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
                                    <property name=\"position\">2</property>\n\
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
                              <object class=\"GxSelector\" id=\"gxselector4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Mode4</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">False</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table4\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob13\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Attack4</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob14\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b4_b5</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_25:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Att</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_28:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_27:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_26:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Rel</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob15\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b3_b4</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob16\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Release4</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
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
                        <child>\n\
                          <object class=\"GtkBox\" id=\"vbox19\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"spacing\">4</property>\n\
                            <child>\n\
                              <object class=\"GtkBox\" id=\"hbox12\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"spacing\">15</property>\n\
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox20\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_29:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Ratio</property>\n\
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
                                        <property name=\"var_id\">mbcs.Ratio5</property>\n\
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
                                  <object class=\"GtkBox\" id=\"vbox21\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_30:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Makeup</property>\n\
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
                                        <property name=\"var_id\">mbcs.Makeup5</property>\n\
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
                                <child>\n\
                                  <object class=\"GtkBox\" id=\"vbox22\">\n\
                                    <property name=\"visible\">True</property>\n\
                                    <property name=\"can_focus\">False</property>\n\
                                    <property name=\"orientation\">vertical</property>\n\
                                    <child>\n\
                                      <object class=\"GtkLabel\" id=\"label_31:rack_label\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">False</property>\n\
                                        <property name=\"label\" translatable=\"yes\">Anticlip</property>\n\
                                      </object>\n\
                                      <packing>\n\
                                        <property name=\"expand\">False</property>\n\
                                        <property name=\"fill\">False</property>\n\
                                        <property name=\"position\">0</property>\n\
                                      </packing>\n\
                                    </child>\n\
                                    <child>\n\
                                      <object class=\"GxSmallKnobR\" id=\"gxmediumknob15\">\n\
                                        <property name=\"visible\">True</property>\n\
                                        <property name=\"can_focus\">True</property>\n\
                                        <property name=\"receives_default\">True</property>\n\
                                        <property name=\"var_id\">mbcs.Makeup-Threshold5</property>\n\
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
                                    <property name=\"position\">2</property>\n\
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
                              <object class=\"GxSelector\" id=\"gxselector5\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Mode5</property>\n\
                                <property name=\"value_position\">right</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">False</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkGrid\" id=\"table5\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"halign\">center</property>\n\
                            <property name=\"row_spacing\">4</property>\n\
                            <property name=\"column_homogeneous\">True</property>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob17\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Attack5</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_32:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Att</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_34:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Low</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">0</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_33:rack_label\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">Rel</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob19\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.crossover_b4_b5</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">1</property>\n\
                                <property name=\"top_attach\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob20\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"var_id\">mbcs.Release5</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">3</property>\n\
                                <property name=\"top_attach\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label_35:rack_label\">\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\" translatable=\"yes\">High</property>\n\
                                <property name=\"xalign\">1</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"left_attach\">2</property>\n\
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
                        <child>\n\
                          <object class=\"GxFastMeter\" id=\"gxfastmeter1\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <property name=\"tooltip_text\" translatable=\"yes\">Sum of Band1 </property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbcs.v1</property>\n\
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
                            <property name=\"tooltip_text\" translatable=\"yes\">Sum of Band2</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbcs.v2</property>\n\
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
                            <property name=\"tooltip_text\" translatable=\"yes\">Sum of Band3</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbcs.v3</property>\n\
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
                            <property name=\"tooltip_text\" translatable=\"yes\">Sum of Band4</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbcs.v4</property>\n\
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
                            <property name=\"tooltip_text\" translatable=\"yes\">Sum of Band5</property>\n\
                            <property name=\"orientation\">vertical</property>\n\
                            <property name=\"hold\">0</property>\n\
                            <property name=\"dimen\">0</property>\n\
                            <property name=\"var_id\">mbcs.v5</property>\n\
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
#define PARAM(p) ("mbcs" "." p)

b.openHorizontalhideBox("");
b.closeBox();

b.openHorizontalBox("");
b.openVerticalBox("");

b.openTabBox("");

b.openHorizontalBox(N_("Band 1"));
b.openpaintampBox("");
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup1"), N_("Makeup (db)"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup-Threshold1"), N_("Anticlip (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b1_b2"), N_("Low Shelf (Hz)"));
b.closeBox();
b.openHorizontalBox("");
b.create_selector_no_caption(PARAM("Mode1"));
b.create_small_rackknob(PARAM("Ratio1"), N_("Ratio"));
b.create_small_rackknob(PARAM("Attack1"), N_("Attack"));
b.create_small_rackknob(PARAM("Release1") ,N_("Release"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 2"));
b.openpaintampBox("");
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup2"), N_("Makeup (db)"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup-Threshold2"), N_("Anticlip (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b1_b2"), N_("Low (hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b2_b3"), N_("High (hz)"));
b.closeBox();
b.openHorizontalBox("");
b.create_selector_no_caption(PARAM("Mode2"));
b.create_small_rackknob(PARAM("Ratio2"), N_("Ratio"));
b.create_small_rackknob(PARAM("Attack2"), N_("Attack"));
b.create_small_rackknob(PARAM("Release2"), N_("Release"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 3"));
b.openpaintampBox("");
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup3"), N_("Makeup (db)"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup-Threshold3"), N_("Anticlip (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b2_b3"), N_("Low (hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b3_b4"), N_("High (hz)"));
b.closeBox();
b.openHorizontalBox("");
b.create_selector_no_caption(PARAM("Mode3"));
b.create_small_rackknob(PARAM("Ratio3"), N_("Ratio"));
b.create_small_rackknob(PARAM("Attack3"), N_("Attack"));
b.create_small_rackknob(PARAM("Release3"), N_("Release"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 4"));
b.openpaintampBox("");
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup4"), N_("Makeup (db)"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup-Threshold4"), N_("Anticlip (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b3_b4"),N_("Low (hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b4_b5"),N_("High (hz)"));
b.closeBox();
b.openHorizontalBox("");
b.create_selector_no_caption(PARAM("Mode4"));
b.create_small_rackknob(PARAM("Ratio4"), N_("Ratio"));
b.create_small_rackknob(PARAM("Attack4"), N_("Attack"));
b.create_small_rackknob(PARAM("Release4"), N_("Release"));
b.closeBox();
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 5"));
b.openpaintampBox("");
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup5"), N_("Makeup (db)"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("Makeup-Threshold5"), N_( "Anticlip (db)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b4_b5"), N_("High Shelf (hz)"));
b.closeBox();
b.openHorizontalBox("");
b.create_selector_no_caption(PARAM("Mode5"));
b.create_small_rackknob(PARAM("Ratio5"), N_("Ratio"));
b.create_small_rackknob(PARAM("Attack5"), N_("Attack"));
b.create_small_rackknob(PARAM("Release5"), N_("Release"));
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

} // end namespace mbcs
} // end namespace pluginlib
