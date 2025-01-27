// generated from file '../src/LV2/faust/gxamp18_stereo.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "valve.h"

namespace gxamp18_stereo {

class Dsp: public PluginLV2 {
private:
	uint32_t fSampleRate;
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT	*fCheckbox0_;
	double fConst4;
	double fConst6;
	double fConst7;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec5[2];
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT	*fCheckbox1_;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fConst10;
	double fConst12;
	double fConst14;
	double fConst15;
	double fConst17;
	double fConst19;
	double fConst20;
	double fConst23;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec23[2];
	double fConst24;
	double fConst25;
	double fRec22[3];
	double fVec0[2];
	double fConst26;
	double fConst27;
	double fRec21[2];
	double fRec20[2];
	double fConst28;
	double fConst30;
	double fConst31;
	double fRec19[3];
	double fVec1[2];
	double fConst32;
	double fConst33;
	double fConst34;
	double fRec18[2];
	double fConst35;
	double fConst36;
	double fRec17[3];
	double fConst37;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst45;
	double fConst46;
	double fRec16[3];
	double fConst47;
	double fRec27[2];
	double fRec26[3];
	double fConst48;
	double fConst49;
	double fConst50;
	double fRec25[3];
	double fRec24[3];
	double fConst51;
	double fConst52;
	double fConst53;
	double fRec31[2];
	double fRec30[3];
	double fVec2[2];
	double fConst54;
	double fConst55;
	double fRec29[2];
	double fConst56;
	double fRec28[3];
	double fConst57;
	double fConst58;
	double fRec33[2];
	double fRec32[3];
	double fVec3[2];
	double fRec15[2];
	double fVec4[2];
	double fRec14[2];
	double fRec13[3];
	double fConst60;
	double fVec5[2];
	double fConst61;
	double fRec34[2];
	double fRec12[2];
	double fRec11[2];
	double fConst63;
	double fConst64;
	double fRec35[2];
	double fVec6[2];
	double fRec10[2];
	double fRec9[2];
	double fRec8[3];
	double fConst66;
	double fVec7[2];
	double fConst67;
	double fRec36[2];
	double fRec7[2];
	double fRec6[2];
	double fRec37[2];
	double fVec8[2];
	double fRec4[2];
	double fRec3[2];
	double fRec2[3];
	double fConst69;
	double fVec9[2];
	double fConst70;
	double fRec38[2];
	double fRec1[2];
	double fRec0[2];
	double fRec39[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	double fRec40[2];
	double fRec62[3];
	double fVec10[2];
	double fRec61[2];
	double fRec60[2];
	double fRec59[3];
	double fVec11[2];
	double fRec58[2];
	double fRec57[3];
	double fRec56[3];
	double fRec66[2];
	double fRec65[3];
	double fRec64[3];
	double fRec63[3];
	double fRec70[2];
	double fRec69[3];
	double fVec12[2];
	double fRec68[2];
	double fRec67[3];
	double fRec72[2];
	double fRec71[3];
	double fVec13[2];
	double fRec55[2];
	double fVec14[2];
	double fRec54[2];
	double fRec53[3];
	double fVec15[2];
	double fRec73[2];
	double fRec52[2];
	double fRec51[2];
	double fRec74[2];
	double fVec16[2];
	double fRec50[2];
	double fRec49[2];
	double fRec48[3];
	double fVec17[2];
	double fRec75[2];
	double fRec47[2];
	double fRec46[2];
	double fRec76[2];
	double fVec18[2];
	double fRec45[2];
	double fRec44[2];
	double fRec43[3];
	double fVec19[2];
	double fRec77[2];
	double fRec42[2];
	double fRec41[2];
	double fRec78[2];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t sample_rate, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "6C16";
	name = N_("6C16");
	mono_audio = 0;
	stereo_audio = compute_static;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec5[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec23[l1] = 0.0;
	for (int l2 = 0; (l2 < 3); l2 = (l2 + 1)) fRec22[l2] = 0.0;
	for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) fVec0[l3] = 0.0;
	for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) fRec21[l4] = 0.0;
	for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) fRec20[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec19[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fVec1[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec18[l8] = 0.0;
	for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) fRec17[l9] = 0.0;
	for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) fRec16[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec27[l11] = 0.0;
	for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) fRec26[l12] = 0.0;
	for (int l13 = 0; (l13 < 3); l13 = (l13 + 1)) fRec25[l13] = 0.0;
	for (int l14 = 0; (l14 < 3); l14 = (l14 + 1)) fRec24[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec31[l15] = 0.0;
	for (int l16 = 0; (l16 < 3); l16 = (l16 + 1)) fRec30[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fVec2[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec29[l18] = 0.0;
	for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) fRec28[l19] = 0.0;
	for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) fRec33[l20] = 0.0;
	for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) fRec32[l21] = 0.0;
	for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) fVec3[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec15[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fVec4[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec14[l25] = 0.0;
	for (int l26 = 0; (l26 < 3); l26 = (l26 + 1)) fRec13[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fVec5[l27] = 0.0;
	for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) fRec34[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) fRec12[l29] = 0.0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec11[l30] = 0.0;
	for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) fRec35[l31] = 0.0;
	for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) fVec6[l32] = 0.0;
	for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) fRec10[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fRec9[l34] = 0.0;
	for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) fRec8[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fVec7[l36] = 0.0;
	for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) fRec36[l37] = 0.0;
	for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) fRec7[l38] = 0.0;
	for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) fRec6[l39] = 0.0;
	for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) fRec37[l40] = 0.0;
	for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) fVec8[l41] = 0.0;
	for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) fRec4[l42] = 0.0;
	for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) fRec3[l43] = 0.0;
	for (int l44 = 0; (l44 < 3); l44 = (l44 + 1)) fRec2[l44] = 0.0;
	for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) fVec9[l45] = 0.0;
	for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) fRec38[l46] = 0.0;
	for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) fRec1[l47] = 0.0;
	for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) fRec0[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fRec39[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) fRec40[l50] = 0.0;
	for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) fRec62[l51] = 0.0;
	for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) fVec10[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) fRec61[l53] = 0.0;
	for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) fRec60[l54] = 0.0;
	for (int l55 = 0; (l55 < 3); l55 = (l55 + 1)) fRec59[l55] = 0.0;
	for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) fVec11[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fRec58[l57] = 0.0;
	for (int l58 = 0; (l58 < 3); l58 = (l58 + 1)) fRec57[l58] = 0.0;
	for (int l59 = 0; (l59 < 3); l59 = (l59 + 1)) fRec56[l59] = 0.0;
	for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) fRec66[l60] = 0.0;
	for (int l61 = 0; (l61 < 3); l61 = (l61 + 1)) fRec65[l61] = 0.0;
	for (int l62 = 0; (l62 < 3); l62 = (l62 + 1)) fRec64[l62] = 0.0;
	for (int l63 = 0; (l63 < 3); l63 = (l63 + 1)) fRec63[l63] = 0.0;
	for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) fRec70[l64] = 0.0;
	for (int l65 = 0; (l65 < 3); l65 = (l65 + 1)) fRec69[l65] = 0.0;
	for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) fVec12[l66] = 0.0;
	for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) fRec68[l67] = 0.0;
	for (int l68 = 0; (l68 < 3); l68 = (l68 + 1)) fRec67[l68] = 0.0;
	for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) fRec72[l69] = 0.0;
	for (int l70 = 0; (l70 < 3); l70 = (l70 + 1)) fRec71[l70] = 0.0;
	for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) fVec13[l71] = 0.0;
	for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) fRec55[l72] = 0.0;
	for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) fVec14[l73] = 0.0;
	for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) fRec54[l74] = 0.0;
	for (int l75 = 0; (l75 < 3); l75 = (l75 + 1)) fRec53[l75] = 0.0;
	for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) fVec15[l76] = 0.0;
	for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) fRec73[l77] = 0.0;
	for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) fRec52[l78] = 0.0;
	for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) fRec51[l79] = 0.0;
	for (int l80 = 0; (l80 < 2); l80 = (l80 + 1)) fRec74[l80] = 0.0;
	for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) fVec16[l81] = 0.0;
	for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) fRec50[l82] = 0.0;
	for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) fRec49[l83] = 0.0;
	for (int l84 = 0; (l84 < 3); l84 = (l84 + 1)) fRec48[l84] = 0.0;
	for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) fVec17[l85] = 0.0;
	for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) fRec75[l86] = 0.0;
	for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) fRec47[l87] = 0.0;
	for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) fRec46[l88] = 0.0;
	for (int l89 = 0; (l89 < 2); l89 = (l89 + 1)) fRec76[l89] = 0.0;
	for (int l90 = 0; (l90 < 2); l90 = (l90 + 1)) fVec18[l90] = 0.0;
	for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) fRec45[l91] = 0.0;
	for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) fRec44[l92] = 0.0;
	for (int l93 = 0; (l93 < 3); l93 = (l93 + 1)) fRec43[l93] = 0.0;
	for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) fVec19[l94] = 0.0;
	for (int l95 = 0; (l95 < 2); l95 = (l95 + 1)) fRec77[l95] = 0.0;
	for (int l96 = 0; (l96 < 2); l96 = (l96 + 1)) fRec42[l96] = 0.0;
	for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) fRec41[l97] = 0.0;
	for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) fRec78[l98] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t sample_rate)
{
	fSampleRate = sample_rate;
	double fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	double fConst1 = std::tan((97.389372261283583 / fConst0));
	double fConst2 = (1.0 / fConst1);
	double fConst3 = (fConst2 + 1.0);
	fConst4 = (1.0 / (fConst1 * fConst3));
	double fConst5 = (1.0 / std::tan((20517.741620594938 / fConst0)));
	fConst6 = (1.0 / (fConst5 + 1.0));
	fConst7 = (1.0 - fConst5);
	double fConst8 = std::tan((3769.9111843077517 / fConst0));
	double fConst9 = (1.0 / fConst8);
	fConst10 = (1.0 / (((fConst9 + 1.0000000000000004) / fConst8) + 1.0));
	double fConst11 = mydsp_faustpower2_f(fConst8);
	fConst12 = (1.0 / fConst11);
	double fConst13 = std::tan((10053.096491487338 / fConst0));
	fConst14 = (1.0 / fConst13);
	fConst15 = (1.0 / (((fConst14 + 1.0000000000000004) / fConst13) + 1.0));
	double fConst16 = (fConst9 + 1.0);
	fConst17 = (1.0 / (fConst8 * fConst16));
	double fConst18 = (fConst14 + 1.0);
	fConst19 = (1.0 / fConst18);
	fConst20 = (1.0 - fConst14);
	double fConst21 = std::tan((47123.889803846898 / fConst0));
	double fConst22 = (1.0 / fConst21);
	fConst23 = (1.0 / (((fConst22 + 1.4142135623730949) / fConst21) + 1.0));
	fConst24 = (((fConst22 + -1.4142135623730949) / fConst21) + 1.0);
	fConst25 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst21))));
	fConst26 = (0.0 - fConst4);
	fConst27 = ((1.0 - fConst2) / fConst3);
	fConst28 = (((fConst14 + -1.0000000000000004) / fConst13) + 1.0);
	double fConst29 = mydsp_faustpower2_f(fConst13);
	fConst30 = (1.0 / fConst29);
	fConst31 = (2.0 * (1.0 - fConst30));
	fConst32 = (0.0 - fConst17);
	fConst33 = (1.0 - fConst9);
	fConst34 = (fConst33 / fConst16);
	fConst35 = (((fConst9 + -1.0000000000000004) / fConst8) + 1.0);
	fConst36 = (2.0 * (1.0 - fConst12));
	fConst37 = (0.0 - (2.0 / fConst11));
	double fConst38 = std::tan((942.47779607693792 / fConst0));
	double fConst39 = (1.0 / fConst38);
	double fConst40 = (fConst39 + 1.0);
	fConst41 = (1.0 / ((fConst40 / fConst38) + 1.0));
	fConst42 = (1.0 - fConst39);
	fConst43 = (1.0 - (fConst42 / fConst38));
	double fConst44 = mydsp_faustpower2_f(fConst38);
	fConst45 = (1.0 / fConst44);
	fConst46 = (2.0 * (1.0 - fConst45));
	fConst47 = (0.0 - (1.0 / (fConst13 * fConst18)));
	fConst48 = (0.0 - (2.0 / fConst29));
	fConst49 = (1.0 / ((fConst16 / fConst8) + 1.0));
	fConst50 = (1.0 - (fConst33 / fConst8));
	fConst51 = (1.0 / (((fConst39 + 1.0000000000000004) / fConst38) + 1.0));
	fConst52 = (1.0 / (fConst38 * fConst40));
	fConst53 = (1.0 / fConst16);
	fConst54 = (0.0 - fConst52);
	fConst55 = (fConst42 / fConst40);
	fConst56 = (((fConst39 + -1.0000000000000004) / fConst38) + 1.0);
	fConst57 = (0.0 - (2.0 / fConst44));
	fConst58 = (1.0 / fConst40);
	double fConst59 = (1.0 / std::tan((270.1769682087222 / fConst0)));
	fConst60 = (1.0 / (fConst59 + 1.0));
	fConst61 = (1.0 - fConst59);
	double fConst62 = (3.1415926535897931 / fConst0);
	fConst63 = (1.0 / (fConst62 + 1.0));
	fConst64 = (1.0 - fConst62);
	double fConst65 = (1.0 / std::tan((414.69023027385271 / fConst0)));
	fConst66 = (1.0 / (fConst65 + 1.0));
	fConst67 = (1.0 - fConst65);
	double fConst68 = (1.0 / std::tan((609.46897479641984 / fConst0)));
	fConst69 = (1.0 / (fConst68 + 1.0));
	fConst70 = (1.0 - fConst68);
	clear_state_f();
}

void Dsp::init_static(uint32_t sample_rate, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1)
{
#define fCheckbox0 (*fCheckbox0_)
#define fVslider0 (*fVslider0_)
#define fCheckbox1 (*fCheckbox1_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fVslider3 (*fVslider3_)
	int iSlow0 = int(double(fCheckbox0));
	double fSlow1 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider0))));
	int iSlow2 = int(double(fCheckbox1));
	double fSlow3 = double(fVslider1);
	double fSlow4 = (2.0 * (fSlow3 + -0.5));
	double fSlow5 = (1.0 - std::max<double>(0.0, (-1.0 * fSlow4)));
	double fSlow6 = std::pow(10.0, (1.2 * fSlow3));
	double fSlow7 = (1.0000000000000009e-05 * double(fVslider2));
	double fSlow8 = std::pow(10.0, (0.80000000000000004 * fSlow3));
	double fSlow9 = (fConst51 * std::pow(10.0, (2.0 * fSlow3)));
	double fSlow10 = (fConst51 * std::pow(10.0, (0.90000000000000002 * fSlow3)));
	double fSlow11 = (1.25 * fSlow3);
	double fSlow12 = (1.0 - std::max<double>(0.0, fSlow4));
	double fSlow13 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider3))));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		fRec5[0] = (fSlow1 + (0.999 * fRec5[1]));
		double fTemp0 = double(input0[i0]);
		fRec23[0] = (fSlow7 + (0.999 * fRec23[1]));
		double fTemp1 = (fTemp0 * fRec23[0]);
		fRec22[0] = (fTemp1 + (1.0000000000000001e-15 - (fConst23 * ((fConst24 * fRec22[2]) + (fConst25 * fRec22[1])))));
		double fTemp2 = (fRec22[2] + (fRec22[0] + (2.0 * fRec22[1])));
		fVec0[0] = fTemp2;
		fRec21[0] = ((fConst23 * ((fConst4 * fTemp2) + (fConst26 * fVec0[1]))) - (fConst27 * fRec21[1]));
		fRec20[0] = (0.0 - (fConst19 * ((fConst20 * fRec20[1]) - (fRec21[0] + fRec21[1]))));
		fRec19[0] = (fRec20[0] - (fConst15 * ((fConst28 * fRec19[2]) + (fConst31 * fRec19[1]))));
		double fTemp3 = (fRec19[2] + (fRec19[0] + (2.0 * fRec19[1])));
		fVec1[0] = fTemp3;
		fRec18[0] = ((fConst15 * ((fConst17 * fTemp3) + (fConst32 * fVec1[1]))) - (fConst34 * fRec18[1]));
		fRec17[0] = (fRec18[0] - (fConst10 * ((fConst35 * fRec17[2]) + (fConst36 * fRec17[1]))));
		double fTemp4 = (fConst46 * fRec16[1]);
		fRec16[0] = ((fConst10 * (((fConst12 * fRec17[0]) + (fConst37 * fRec17[1])) + (fConst12 * fRec17[2]))) - (fConst41 * ((fConst43 * fRec16[2]) + fTemp4)));
		double fTemp5 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow6 * (fRec16[2] + (fConst41 * (fTemp4 + (fConst43 * fRec16[0])))))));
		fRec27[0] = ((fConst47 * fRec21[1]) - (fConst19 * ((fConst20 * fRec27[1]) - (fConst14 * fRec21[0]))));
		fRec26[0] = (fRec27[0] - (fConst15 * ((fConst28 * fRec26[2]) + (fConst31 * fRec26[1]))));
		double fTemp6 = (fConst36 * fRec25[1]);
		fRec25[0] = ((fConst15 * (((fConst30 * fRec26[0]) + (fConst48 * fRec26[1])) + (fConst30 * fRec26[2]))) - (fConst49 * ((fConst50 * fRec25[2]) + fTemp6)));
		double fTemp7 = (fConst46 * fRec24[1]);
		fRec24[0] = ((fRec25[2] + (fConst49 * (fTemp6 + (fConst50 * fRec25[0])))) - (fConst41 * ((fConst43 * fRec24[2]) + fTemp7)));
		double fTemp8 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow8 * (fRec24[2] + (fConst41 * (fTemp7 + (fConst43 * fRec24[0])))))));
		fRec31[0] = (0.0 - (fConst53 * ((fConst33 * fRec31[1]) - (fConst15 * (fTemp3 + fVec1[1])))));
		fRec30[0] = (fRec31[0] - (fConst10 * ((fConst35 * fRec30[2]) + (fConst36 * fRec30[1]))));
		double fTemp9 = (fRec30[2] + (fRec30[0] + (2.0 * fRec30[1])));
		fVec2[0] = fTemp9;
		fRec29[0] = ((fConst10 * ((fConst52 * fTemp9) + (fConst54 * fVec2[1]))) - (fConst55 * fRec29[1]));
		fRec28[0] = (fRec29[0] - (fConst51 * ((fConst56 * fRec28[2]) + (fConst46 * fRec28[1]))));
		double fTemp10 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow9 * (((fConst45 * fRec28[0]) + (fConst57 * fRec28[1])) + (fConst45 * fRec28[2])))));
		fRec33[0] = (0.0 - (fConst58 * ((fConst42 * fRec33[1]) - (fConst10 * (fTemp9 + fVec2[1])))));
		fRec32[0] = (fRec33[0] - (fConst51 * ((fConst56 * fRec32[2]) + (fConst46 * fRec32[1]))));
		double fTemp11 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow10 * (fRec32[2] + (fRec32[0] + (2.0 * fRec32[1]))))));
		double fTemp12 = (((1.333521432 * (fTemp5 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp5))))) + (1.584893192 * ((fTemp8 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp8)))) + (fTemp10 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp10))))))) + (1.2589412 * (fTemp11 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp11))))));
		fVec3[0] = fTemp12;
		fRec15[0] = (0.0 - (fConst6 * ((fConst7 * fRec15[1]) - (fTemp12 + fVec3[1]))));
		double fTemp13 = (1.0 - fRec23[0]);
		double fTemp14 = (fTemp0 * fTemp13);
		double fTemp15 = (fTemp14 + 1.0000000000000001e-15);
		double fTemp16 = (((fSlow5 * fRec15[0]) + ((fTemp14 + (fSlow11 * ((4.0 * (fTemp15 * (1.0 - std::fabs(fTemp15)))) + (-1.0000000000000001e-15 - fTemp14)))) + (fSlow12 * (fTemp1 + 1.0000000000000001e-15)))) + 1.0000000000000001e-15);
		fVec4[0] = fTemp16;
		fRec14[0] = ((0.93028479253239138 * (fTemp16 + fVec4[1])) - (0.86056958506478287 * fRec14[1]));
		fRec13[0] = (fRec14[0] - ((1.8405051250752198 * fRec13[1]) + (0.86129424393186271 * fRec13[2])));
		double fTemp17 = (0.92544984225177063 * (fRec13[0] + fRec13[2]));
		double fTemp18 = (1.8508996845035413 * fRec13[1]);
		double fTemp19 = ((fTemp18 + fTemp17) / (double(Ranode(int(TUBE_TABLE_6C16_68k), double(fRec12[1]))) + 100000.0));
		fVec5[0] = fTemp19;
		fRec34[0] = (fConst60 * ((2700.0 * (fTemp19 + fVec5[1])) - (fConst61 * fRec34[1])));
		fRec12[0] = (double(Ftube(int(TUBE_TABLE_6C16_68k), double(((fTemp17 + (fRec34[0] + fTemp18)) + -2.9218060000000001)))) + -141.78496296296294);
		fRec11[0] = ((0.025000000000000001 * ((fConst4 * fRec12[0]) + (fConst26 * fRec12[1]))) - (fConst27 * fRec11[1]));
		fRec35[0] = (fConst63 * ((fConst64 * fRec35[1]) + (0.025000000000000001 * (fRec12[0] - fRec12[1]))));
		double fTemp20 = ((iSlow2 ? fRec35[0] : fRec11[0]) * fRec5[0]);
		fVec6[0] = fTemp20;
		fRec10[0] = (0.0 - (fConst6 * ((fConst7 * fRec10[1]) - (fTemp20 + fVec6[1]))));
		fRec9[0] = ((0.93028479253239138 * (fRec10[0] + fRec10[1])) - (0.86056958506478287 * fRec9[1]));
		fRec8[0] = (fRec9[0] - ((1.8405051250752198 * fRec8[1]) + (0.86129424393186271 * fRec8[2])));
		double fTemp21 = (0.92544984225177063 * (fRec8[0] + fRec8[2]));
		double fTemp22 = (1.8508996845035413 * fRec8[1]);
		double fTemp23 = ((fTemp22 + fTemp21) / (double(Ranode(int(TUBE_TABLE_6C16_250k), double(fRec7[1]))) + 100000.0));
		fVec7[0] = fTemp23;
		fRec36[0] = (fConst66 * ((1500.0 * (fTemp23 + fVec7[1])) - (fConst67 * fRec36[1])));
		fRec7[0] = (double(Ftube(int(TUBE_TABLE_6C16_250k), double(((fTemp21 + (fRec36[0] + fTemp22)) + -2.0977429999999999)))) + -110.15046666666666);
		fRec6[0] = ((0.025000000000000001 * ((fConst4 * fRec7[0]) + (fConst26 * fRec7[1]))) - (fConst27 * fRec6[1]));
		fRec37[0] = (fConst63 * ((fConst64 * fRec37[1]) + (0.025000000000000001 * (fRec7[0] - fRec7[1]))));
		double fTemp24 = (fRec5[0] * (iSlow2 ? fRec37[0] : fRec6[0]));
		fVec8[0] = fTemp24;
		fRec4[0] = (0.0 - (fConst6 * ((fConst7 * fRec4[1]) - (fTemp24 + fVec8[1]))));
		fRec3[0] = ((0.93028479253239138 * (fRec4[0] + fRec4[1])) - (0.86056958506478287 * fRec3[1]));
		fRec2[0] = (fRec3[0] - ((1.8405051250752198 * fRec2[1]) + (0.86129424393186271 * fRec2[2])));
		double fTemp25 = (0.92544984225177063 * (fRec2[0] + fRec2[2]));
		double fTemp26 = (1.8508996845035413 * fRec2[1]);
		double fTemp27 = ((fTemp26 + fTemp25) / (double(Ranode(int(TUBE_TABLE_6C16_250k), double(fRec1[1]))) + 100000.0));
		fVec9[0] = fTemp27;
		fRec38[0] = (fConst69 * ((820.0 * (fTemp27 + fVec9[1])) - (fConst70 * fRec38[1])));
		fRec1[0] = (double(Ftube(int(TUBE_TABLE_6C16_250k), double(((fTemp25 + (fRec38[0] + fTemp26)) + -1.3787419999999999)))) + -81.860731707317086);
		fRec0[0] = ((0.025000000000000001 * ((fConst4 * fRec1[0]) + (fConst26 * fRec1[1]))) - (fConst27 * fRec0[1]));
		fRec39[0] = (fConst63 * ((fConst64 * fRec39[1]) + (0.025000000000000001 * (fRec1[0] - fRec1[1]))));
		fRec40[0] = (fSlow13 + (0.999 * fRec40[1]));
		output0[i0] = FAUSTFLOAT(((iSlow0 ? fRec39[0] : fRec0[0]) * fRec40[0]));
		double fTemp28 = double(input1[i0]);
		double fTemp29 = (fTemp28 * fRec23[0]);
		fRec62[0] = (fTemp29 + (1.0000000000000001e-15 - (fConst23 * ((fConst24 * fRec62[2]) + (fConst25 * fRec62[1])))));
		double fTemp30 = (fRec62[2] + (fRec62[0] + (2.0 * fRec62[1])));
		fVec10[0] = fTemp30;
		fRec61[0] = ((fConst23 * ((fConst4 * fTemp30) + (fConst26 * fVec10[1]))) - (fConst27 * fRec61[1]));
		fRec60[0] = (0.0 - (fConst19 * ((fConst20 * fRec60[1]) - (fRec61[0] + fRec61[1]))));
		fRec59[0] = (fRec60[0] - (fConst15 * ((fConst28 * fRec59[2]) + (fConst31 * fRec59[1]))));
		double fTemp31 = (fRec59[2] + (fRec59[0] + (2.0 * fRec59[1])));
		fVec11[0] = fTemp31;
		fRec58[0] = ((fConst15 * ((fConst17 * fTemp31) + (fConst32 * fVec11[1]))) - (fConst34 * fRec58[1]));
		fRec57[0] = (fRec58[0] - (fConst10 * ((fConst35 * fRec57[2]) + (fConst36 * fRec57[1]))));
		double fTemp32 = (fConst46 * fRec56[1]);
		fRec56[0] = ((fConst10 * (((fConst12 * fRec57[0]) + (fConst37 * fRec57[1])) + (fConst12 * fRec57[2]))) - (fConst41 * ((fConst43 * fRec56[2]) + fTemp32)));
		double fTemp33 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow6 * (fRec56[2] + (fConst41 * (fTemp32 + (fConst43 * fRec56[0])))))));
		fRec66[0] = ((fConst47 * fRec61[1]) - (fConst19 * ((fConst20 * fRec66[1]) - (fConst14 * fRec61[0]))));
		fRec65[0] = (fRec66[0] - (fConst15 * ((fConst28 * fRec65[2]) + (fConst31 * fRec65[1]))));
		double fTemp34 = (fConst36 * fRec64[1]);
		fRec64[0] = ((fConst15 * (((fConst30 * fRec65[0]) + (fConst48 * fRec65[1])) + (fConst30 * fRec65[2]))) - (fConst49 * ((fConst50 * fRec64[2]) + fTemp34)));
		double fTemp35 = (fConst46 * fRec63[1]);
		fRec63[0] = ((fRec64[2] + (fConst49 * (fTemp34 + (fConst50 * fRec64[0])))) - (fConst41 * ((fConst43 * fRec63[2]) + fTemp35)));
		double fTemp36 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow8 * (fRec63[2] + (fConst41 * (fTemp35 + (fConst43 * fRec63[0])))))));
		fRec70[0] = (0.0 - (fConst53 * ((fConst33 * fRec70[1]) - (fConst15 * (fTemp31 + fVec11[1])))));
		fRec69[0] = (fRec70[0] - (fConst10 * ((fConst35 * fRec69[2]) + (fConst36 * fRec69[1]))));
		double fTemp37 = (fRec69[2] + (fRec69[0] + (2.0 * fRec69[1])));
		fVec12[0] = fTemp37;
		fRec68[0] = ((fConst10 * ((fConst52 * fTemp37) + (fConst54 * fVec12[1]))) - (fConst55 * fRec68[1]));
		fRec67[0] = (fRec68[0] - (fConst51 * ((fConst56 * fRec67[2]) + (fConst46 * fRec67[1]))));
		double fTemp38 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow9 * (((fConst45 * fRec67[0]) + (fConst57 * fRec67[1])) + (fConst45 * fRec67[2])))));
		fRec72[0] = (0.0 - (fConst58 * ((fConst42 * fRec72[1]) - (fConst10 * (fTemp37 + fVec12[1])))));
		fRec71[0] = (fRec72[0] - (fConst51 * ((fConst56 * fRec71[2]) + (fConst46 * fRec71[1]))));
		double fTemp39 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow10 * (fRec71[2] + (fRec71[0] + (2.0 * fRec71[1]))))));
		double fTemp40 = (((1.333521432 * (fTemp33 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp33))))) + (1.584893192 * ((fTemp36 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp36)))) + (fTemp38 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp38))))))) + (1.2589412 * (fTemp39 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp39))))));
		fVec13[0] = fTemp40;
		fRec55[0] = (0.0 - (fConst6 * ((fConst7 * fRec55[1]) - (fTemp40 + fVec13[1]))));
		double fTemp41 = (fTemp28 * fTemp13);
		double fTemp42 = (fTemp41 + 1.0000000000000001e-15);
		double fTemp43 = (((fSlow5 * fRec55[0]) + ((fTemp41 + (fSlow11 * ((4.0 * (fTemp42 * (1.0 - std::fabs(fTemp42)))) + (-1.0000000000000001e-15 - fTemp41)))) + (fSlow12 * (fTemp29 + 1.0000000000000001e-15)))) + 1.0000000000000001e-15);
		fVec14[0] = fTemp43;
		fRec54[0] = ((0.93028479253239138 * (fTemp43 + fVec14[1])) - (0.86056958506478287 * fRec54[1]));
		fRec53[0] = (fRec54[0] - ((1.8405051250752198 * fRec53[1]) + (0.86129424393186271 * fRec53[2])));
		double fTemp44 = (0.92544984225177063 * (fRec53[0] + fRec53[2]));
		double fTemp45 = (1.8508996845035413 * fRec53[1]);
		double fTemp46 = ((fTemp45 + fTemp44) / (double(Ranode(int(TUBE_TABLE_6C16_68k), double(fRec52[1]))) + 100000.0));
		fVec15[0] = fTemp46;
		fRec73[0] = (fConst60 * ((2700.0 * (fTemp46 + fVec15[1])) - (fConst61 * fRec73[1])));
		fRec52[0] = (double(Ftube(int(TUBE_TABLE_6C16_68k), double(((fTemp44 + (fRec73[0] + fTemp45)) + -2.9218060000000001)))) + -141.78496296296294);
		fRec51[0] = ((0.025000000000000001 * ((fConst4 * fRec52[0]) + (fConst26 * fRec52[1]))) - (fConst27 * fRec51[1]));
		fRec74[0] = (fConst63 * ((fConst64 * fRec74[1]) + (0.025000000000000001 * (fRec52[0] - fRec52[1]))));
		double fTemp47 = (fRec5[0] * (iSlow2 ? fRec74[0] : fRec51[0]));
		fVec16[0] = fTemp47;
		fRec50[0] = (0.0 - (fConst6 * ((fConst7 * fRec50[1]) - (fTemp47 + fVec16[1]))));
		fRec49[0] = ((0.93028479253239138 * (fRec50[0] + fRec50[1])) - (0.86056958506478287 * fRec49[1]));
		fRec48[0] = (fRec49[0] - ((1.8405051250752198 * fRec48[1]) + (0.86129424393186271 * fRec48[2])));
		double fTemp48 = (0.92544984225177063 * (fRec48[0] + fRec48[2]));
		double fTemp49 = (1.8508996845035413 * fRec48[1]);
		double fTemp50 = ((fTemp49 + fTemp48) / (double(Ranode(int(TUBE_TABLE_6C16_250k), double(fRec47[1]))) + 100000.0));
		fVec17[0] = fTemp50;
		fRec75[0] = (fConst66 * ((1500.0 * (fTemp50 + fVec17[1])) - (fConst67 * fRec75[1])));
		fRec47[0] = (double(Ftube(int(TUBE_TABLE_6C16_250k), double(((fTemp48 + (fRec75[0] + fTemp49)) + -2.0977429999999999)))) + -110.15046666666666);
		fRec46[0] = ((0.025000000000000001 * ((fConst4 * fRec47[0]) + (fConst26 * fRec47[1]))) - (fConst27 * fRec46[1]));
		fRec76[0] = (fConst63 * ((fConst64 * fRec76[1]) + (0.025000000000000001 * (fRec47[0] - fRec47[1]))));
		double fTemp51 = (fRec5[0] * (iSlow2 ? fRec76[0] : fRec46[0]));
		fVec18[0] = fTemp51;
		fRec45[0] = (0.0 - (fConst6 * ((fConst7 * fRec45[1]) - (fTemp51 + fVec18[1]))));
		fRec44[0] = ((0.93028479253239138 * (fRec45[0] + fRec45[1])) - (0.86056958506478287 * fRec44[1]));
		fRec43[0] = (fRec44[0] - ((1.8405051250752198 * fRec43[1]) + (0.86129424393186271 * fRec43[2])));
		double fTemp52 = (0.92544984225177063 * (fRec43[0] + fRec43[2]));
		double fTemp53 = (1.8508996845035413 * fRec43[1]);
		double fTemp54 = ((fTemp53 + fTemp52) / (double(Ranode(int(TUBE_TABLE_6C16_250k), double(fRec42[1]))) + 100000.0));
		fVec19[0] = fTemp54;
		fRec77[0] = (fConst69 * ((820.0 * (fTemp54 + fVec19[1])) - (fConst70 * fRec77[1])));
		fRec42[0] = (double(Ftube(int(TUBE_TABLE_6C16_250k), double(((fTemp52 + (fRec77[0] + fTemp53)) + -1.3787419999999999)))) + -81.860731707317086);
		fRec41[0] = ((0.025000000000000001 * ((fConst4 * fRec42[0]) + (fConst26 * fRec42[1]))) - (fConst27 * fRec41[1]));
		fRec78[0] = (fConst63 * ((fConst64 * fRec78[1]) + (0.025000000000000001 * (fRec42[0] - fRec42[1]))));
		output1[i0] = FAUSTFLOAT((fRec40[0] * (iSlow0 ? fRec78[0] : fRec41[0])));
		fRec5[1] = fRec5[0];
		fRec23[1] = fRec23[0];
		fRec22[2] = fRec22[1];
		fRec22[1] = fRec22[0];
		fVec0[1] = fVec0[0];
		fRec21[1] = fRec21[0];
		fRec20[1] = fRec20[0];
		fRec19[2] = fRec19[1];
		fRec19[1] = fRec19[0];
		fVec1[1] = fVec1[0];
		fRec18[1] = fRec18[0];
		fRec17[2] = fRec17[1];
		fRec17[1] = fRec17[0];
		fRec16[2] = fRec16[1];
		fRec16[1] = fRec16[0];
		fRec27[1] = fRec27[0];
		fRec26[2] = fRec26[1];
		fRec26[1] = fRec26[0];
		fRec25[2] = fRec25[1];
		fRec25[1] = fRec25[0];
		fRec24[2] = fRec24[1];
		fRec24[1] = fRec24[0];
		fRec31[1] = fRec31[0];
		fRec30[2] = fRec30[1];
		fRec30[1] = fRec30[0];
		fVec2[1] = fVec2[0];
		fRec29[1] = fRec29[0];
		fRec28[2] = fRec28[1];
		fRec28[1] = fRec28[0];
		fRec33[1] = fRec33[0];
		fRec32[2] = fRec32[1];
		fRec32[1] = fRec32[0];
		fVec3[1] = fVec3[0];
		fRec15[1] = fRec15[0];
		fVec4[1] = fVec4[0];
		fRec14[1] = fRec14[0];
		fRec13[2] = fRec13[1];
		fRec13[1] = fRec13[0];
		fVec5[1] = fVec5[0];
		fRec34[1] = fRec34[0];
		fRec12[1] = fRec12[0];
		fRec11[1] = fRec11[0];
		fRec35[1] = fRec35[0];
		fVec6[1] = fVec6[0];
		fRec10[1] = fRec10[0];
		fRec9[1] = fRec9[0];
		fRec8[2] = fRec8[1];
		fRec8[1] = fRec8[0];
		fVec7[1] = fVec7[0];
		fRec36[1] = fRec36[0];
		fRec7[1] = fRec7[0];
		fRec6[1] = fRec6[0];
		fRec37[1] = fRec37[0];
		fVec8[1] = fVec8[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fVec9[1] = fVec9[0];
		fRec38[1] = fRec38[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
		fRec39[1] = fRec39[0];
		fRec40[1] = fRec40[0];
		fRec62[2] = fRec62[1];
		fRec62[1] = fRec62[0];
		fVec10[1] = fVec10[0];
		fRec61[1] = fRec61[0];
		fRec60[1] = fRec60[0];
		fRec59[2] = fRec59[1];
		fRec59[1] = fRec59[0];
		fVec11[1] = fVec11[0];
		fRec58[1] = fRec58[0];
		fRec57[2] = fRec57[1];
		fRec57[1] = fRec57[0];
		fRec56[2] = fRec56[1];
		fRec56[1] = fRec56[0];
		fRec66[1] = fRec66[0];
		fRec65[2] = fRec65[1];
		fRec65[1] = fRec65[0];
		fRec64[2] = fRec64[1];
		fRec64[1] = fRec64[0];
		fRec63[2] = fRec63[1];
		fRec63[1] = fRec63[0];
		fRec70[1] = fRec70[0];
		fRec69[2] = fRec69[1];
		fRec69[1] = fRec69[0];
		fVec12[1] = fVec12[0];
		fRec68[1] = fRec68[0];
		fRec67[2] = fRec67[1];
		fRec67[1] = fRec67[0];
		fRec72[1] = fRec72[0];
		fRec71[2] = fRec71[1];
		fRec71[1] = fRec71[0];
		fVec13[1] = fVec13[0];
		fRec55[1] = fRec55[0];
		fVec14[1] = fVec14[0];
		fRec54[1] = fRec54[0];
		fRec53[2] = fRec53[1];
		fRec53[1] = fRec53[0];
		fVec15[1] = fVec15[0];
		fRec73[1] = fRec73[0];
		fRec52[1] = fRec52[0];
		fRec51[1] = fRec51[0];
		fRec74[1] = fRec74[0];
		fVec16[1] = fVec16[0];
		fRec50[1] = fRec50[0];
		fRec49[1] = fRec49[0];
		fRec48[2] = fRec48[1];
		fRec48[1] = fRec48[0];
		fVec17[1] = fVec17[0];
		fRec75[1] = fRec75[0];
		fRec47[1] = fRec47[0];
		fRec46[1] = fRec46[0];
		fRec76[1] = fRec76[0];
		fVec18[1] = fVec18[0];
		fRec45[1] = fRec45[0];
		fRec44[1] = fRec44[0];
		fRec43[2] = fRec43[1];
		fRec43[1] = fRec43[0];
		fVec19[1] = fVec19[0];
		fRec77[1] = fRec77[0];
		fRec42[1] = fRec42[0];
		fRec41[1] = fRec41[0];
		fRec78[1] = fRec78[0];
	}
#undef fCheckbox0
#undef fVslider0
#undef fCheckbox1
#undef fVslider1
#undef fVslider2
#undef fVslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, input1, output0, output1);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case HIGHGAIN: 
		fCheckbox1_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		fCheckbox0_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case DRIVE: 
		fVslider1_ = (float*)data; // , 0.34999999999999998, 0.0, 1.0, 0.01 
		break;
	case WET_DRY: 
		fVslider2_ = (float*)data; // , 100.0, 0.0, 100.0, 1.0 
		break;
	case PREGAIN: 
		fVslider0_ = (float*)data; // , -6.0, -20.0, 20.0, 0.10000000000000001 
		break;
	case GAIN1: 
		fVslider3_ = (float*)data; // , -6.0, -20.0, 20.0, 0.10000000000000001 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DRIVE, 
   WET_DRY, 
   HIGHGAIN, 
   PREGAIN, 
   GAIN1, 
} PortIndex;
*/

} // end namespace gxamp18_stereo
