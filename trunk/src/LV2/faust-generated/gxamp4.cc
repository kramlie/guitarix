// generated from file '../src/LV2/faust/gxamp4.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "valve.h"

namespace gxamp4 {

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
	double fConst10;
	double fConst12;
	double fConst14;
	double fConst15;
	double fConst17;
	double fConst19;
	double fConst20;
	double fConst23;
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT	*fCheckbox1_;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec26[2];
	double fVec0[2];
	double fRec25[2];
	double fRec24[3];
	double fConst25;
	double fVec1[2];
	double fConst26;
	double fRec27[2];
	double fRec23[2];
	double fConst27;
	double fConst28;
	double fRec22[2];
	double fConst30;
	double fConst31;
	double fRec28[2];
	double fVec2[2];
	double fRec21[2];
	double fRec20[2];
	double fRec19[3];
	double fConst33;
	double fVec3[2];
	double fConst34;
	double fRec29[2];
	double fRec18[2];
	double fRec17[2];
	double fRec30[2];
	double fVec4[2];
	double fRec16[2];
	double fRec15[3];
	double fConst36;
	double fVec5[2];
	double fConst37;
	double fRec31[2];
	double fRec14[2];
	double fRec13[2];
	double fRec32[2];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec33[2];
	double fConst38;
	double fConst39;
	double fRec12[3];
	double fVec6[2];
	double fRec11[2];
	double fRec10[2];
	double fConst40;
	double fConst42;
	double fConst43;
	double fRec9[3];
	double fVec7[2];
	double fConst44;
	double fConst45;
	double fConst46;
	double fRec8[2];
	double fConst47;
	double fConst48;
	double fRec7[3];
	double fConst49;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst57;
	double fConst58;
	double fRec6[3];
	double fConst59;
	double fRec37[2];
	double fRec36[3];
	double fConst60;
	double fConst61;
	double fConst62;
	double fRec35[3];
	double fRec34[3];
	double fConst63;
	double fConst64;
	double fConst65;
	double fRec41[2];
	double fRec40[3];
	double fVec8[2];
	double fConst66;
	double fConst67;
	double fRec39[2];
	double fConst68;
	double fRec38[3];
	double fConst69;
	double fConst70;
	double fRec43[2];
	double fRec42[3];
	double fVec9[2];
	double fRec5[2];
	double fVec10[2];
	double fRec4[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	double fRec44[2];
	double fVec11[2];
	double fRec3[2];
	double fRec2[3];
	double fVec12[2];
	double fRec45[2];
	double fRec1[2];
	double fRec0[2];
	double fRec46[2];
	double fVec13[2];
	double fRec49[2];
	double fRec48[2];
	double fRec47[2];
	double fRec50[2];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t sample_rate, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "pre 12AU7/ master 6V6";
	name = N_("pre 12AU7/ master 6V6");
	mono_audio = compute_static;
	stereo_audio = 0;
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
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec26[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fVec0[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec25[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec24[l3] = 0.0;
	for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) fVec1[l4] = 0.0;
	for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) fRec27[l5] = 0.0;
	for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) fRec23[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fRec22[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec28[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fVec2[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec21[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec20[l11] = 0.0;
	for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) fRec19[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fVec3[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec29[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec18[l15] = 0.0;
	for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) fRec17[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fRec30[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fVec4[l18] = 0.0;
	for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) fRec16[l19] = 0.0;
	for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) fRec15[l20] = 0.0;
	for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) fVec5[l21] = 0.0;
	for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) fRec31[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec14[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fRec13[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec32[l25] = 0.0;
	for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) fRec33[l26] = 0.0;
	for (int l27 = 0; (l27 < 3); l27 = (l27 + 1)) fRec12[l27] = 0.0;
	for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) fVec6[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) fRec11[l29] = 0.0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec10[l30] = 0.0;
	for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) fRec9[l31] = 0.0;
	for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) fVec7[l32] = 0.0;
	for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) fRec8[l33] = 0.0;
	for (int l34 = 0; (l34 < 3); l34 = (l34 + 1)) fRec7[l34] = 0.0;
	for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) fRec6[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fRec37[l36] = 0.0;
	for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) fRec36[l37] = 0.0;
	for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) fRec35[l38] = 0.0;
	for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) fRec34[l39] = 0.0;
	for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) fRec41[l40] = 0.0;
	for (int l41 = 0; (l41 < 3); l41 = (l41 + 1)) fRec40[l41] = 0.0;
	for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) fVec8[l42] = 0.0;
	for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) fRec39[l43] = 0.0;
	for (int l44 = 0; (l44 < 3); l44 = (l44 + 1)) fRec38[l44] = 0.0;
	for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) fRec43[l45] = 0.0;
	for (int l46 = 0; (l46 < 3); l46 = (l46 + 1)) fRec42[l46] = 0.0;
	for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) fVec9[l47] = 0.0;
	for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) fRec5[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fVec10[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) fRec4[l50] = 0.0;
	for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) fRec44[l51] = 0.0;
	for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) fVec11[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) fRec3[l53] = 0.0;
	for (int l54 = 0; (l54 < 3); l54 = (l54 + 1)) fRec2[l54] = 0.0;
	for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) fVec12[l55] = 0.0;
	for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) fRec45[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fRec1[l57] = 0.0;
	for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) fRec0[l58] = 0.0;
	for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) fRec46[l59] = 0.0;
	for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) fVec13[l60] = 0.0;
	for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) fRec49[l61] = 0.0;
	for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) fRec48[l62] = 0.0;
	for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) fRec47[l63] = 0.0;
	for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) fRec50[l64] = 0.0;
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
	double fConst24 = (1.0 / std::tan((270.1769682087222 / fConst0)));
	fConst25 = (1.0 / (fConst24 + 1.0));
	fConst26 = (1.0 - fConst24);
	fConst27 = (0.0 - fConst4);
	fConst28 = ((1.0 - fConst2) / fConst3);
	double fConst29 = (3.1415926535897931 / fConst0);
	fConst30 = (1.0 / (fConst29 + 1.0));
	fConst31 = (1.0 - fConst29);
	double fConst32 = (1.0 / std::tan((414.69023027385271 / fConst0)));
	fConst33 = (1.0 / (fConst32 + 1.0));
	fConst34 = (1.0 - fConst32);
	double fConst35 = (1.0 / std::tan((609.46897479641984 / fConst0)));
	fConst36 = (1.0 / (fConst35 + 1.0));
	fConst37 = (1.0 - fConst35);
	fConst38 = (((fConst22 + -1.4142135623730949) / fConst21) + 1.0);
	fConst39 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst21))));
	fConst40 = (((fConst14 + -1.0000000000000004) / fConst13) + 1.0);
	double fConst41 = mydsp_faustpower2_f(fConst13);
	fConst42 = (1.0 / fConst41);
	fConst43 = (2.0 * (1.0 - fConst42));
	fConst44 = (0.0 - fConst17);
	fConst45 = (1.0 - fConst9);
	fConst46 = (fConst45 / fConst16);
	fConst47 = (((fConst9 + -1.0000000000000004) / fConst8) + 1.0);
	fConst48 = (2.0 * (1.0 - fConst12));
	fConst49 = (0.0 - (2.0 / fConst11));
	double fConst50 = std::tan((942.47779607693792 / fConst0));
	double fConst51 = (1.0 / fConst50);
	double fConst52 = (fConst51 + 1.0);
	fConst53 = (1.0 / ((fConst52 / fConst50) + 1.0));
	fConst54 = (1.0 - fConst51);
	fConst55 = (1.0 - (fConst54 / fConst50));
	double fConst56 = mydsp_faustpower2_f(fConst50);
	fConst57 = (1.0 / fConst56);
	fConst58 = (2.0 * (1.0 - fConst57));
	fConst59 = (0.0 - (1.0 / (fConst13 * fConst18)));
	fConst60 = (0.0 - (2.0 / fConst41));
	fConst61 = (1.0 / ((fConst16 / fConst8) + 1.0));
	fConst62 = (1.0 - (fConst45 / fConst8));
	fConst63 = (1.0 / (((fConst51 + 1.0000000000000004) / fConst50) + 1.0));
	fConst64 = (1.0 / (fConst50 * fConst52));
	fConst65 = (1.0 / fConst16);
	fConst66 = (0.0 - fConst64);
	fConst67 = (fConst54 / fConst52);
	fConst68 = (((fConst51 + -1.0000000000000004) / fConst50) + 1.0);
	fConst69 = (0.0 - (2.0 / fConst56));
	fConst70 = (1.0 / fConst52);
	clear_state_f();
}

void Dsp::init_static(uint32_t sample_rate, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fCheckbox0 (*fCheckbox0_)
#define fVslider0 (*fVslider0_)
#define fCheckbox1 (*fCheckbox1_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fVslider3 (*fVslider3_)
	int iSlow0 = int(double(fCheckbox0));
	double fSlow1 = double(fVslider0);
	double fSlow2 = (2.0 * (fSlow1 + -0.5));
	double fSlow3 = (1.0 - std::max<double>(0.0, (-1.0 * fSlow2)));
	double fSlow4 = std::pow(10.0, (1.2 * fSlow1));
	int iSlow5 = int(double(fCheckbox1));
	double fSlow6 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider1))));
	double fSlow7 = (1.0000000000000009e-05 * double(fVslider2));
	double fSlow8 = std::pow(10.0, (0.80000000000000004 * fSlow1));
	double fSlow9 = (fConst63 * std::pow(10.0, (2.0 * fSlow1)));
	double fSlow10 = (fConst63 * std::pow(10.0, (0.90000000000000002 * fSlow1)));
	double fSlow11 = (1.25 * fSlow1);
	double fSlow12 = (1.0 - std::max<double>(0.0, fSlow2));
	double fSlow13 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider3))));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		fRec26[0] = (fSlow6 + (0.999 * fRec26[1]));
		double fTemp0 = (double(input0[i0]) * fRec26[0]);
		fVec0[0] = fTemp0;
		fRec25[0] = ((0.93028479253239138 * (fTemp0 + fVec0[1])) - (0.86056958506478287 * fRec25[1]));
		fRec24[0] = (fRec25[0] - ((1.8405051250752198 * fRec24[1]) + (0.86129424393186271 * fRec24[2])));
		double fTemp1 = (0.92544984225177063 * (fRec24[0] + fRec24[2]));
		double fTemp2 = (1.8508996845035413 * fRec24[1]);
		double fTemp3 = ((fTemp2 + fTemp1) / (double(Ranode(int(TUBE_TABLE_12AU7_68k), double(fRec23[1]))) + 100000.0));
		fVec1[0] = fTemp3;
		fRec27[0] = (fConst25 * ((2700.0 * (fTemp3 + fVec1[1])) - (fConst26 * fRec27[1])));
		fRec23[0] = (double(Ftube(int(TUBE_TABLE_12AU7_68k), double(((fTemp1 + (fRec27[0] + fTemp2)) + -1.2572399999999999)))) + -83.435555555555567);
		fRec22[0] = ((0.10000000000000001 * ((fConst4 * fRec23[0]) + (fConst27 * fRec23[1]))) - (fConst28 * fRec22[1]));
		fRec28[0] = (fConst30 * ((fConst31 * fRec28[1]) + (0.10000000000000001 * (fRec23[0] - fRec23[1]))));
		double fTemp4 = (iSlow5 ? fRec28[0] : fRec22[0]);
		fVec2[0] = fTemp4;
		fRec21[0] = (0.0 - (fConst6 * ((fConst7 * fRec21[1]) - (fTemp4 + fVec2[1]))));
		fRec20[0] = ((0.93028479253239138 * (fRec21[0] + fRec21[1])) - (0.86056958506478287 * fRec20[1]));
		fRec19[0] = (fRec20[0] - ((1.8405051250752198 * fRec19[1]) + (0.86129424393186271 * fRec19[2])));
		double fTemp5 = (0.92544984225177063 * (fRec19[0] + fRec19[2]));
		double fTemp6 = (1.8508996845035413 * fRec19[1]);
		double fTemp7 = ((fTemp6 + fTemp5) / (double(Ranode(int(TUBE_TABLE_12AU7_250k), double(fRec18[1]))) + 100000.0));
		fVec3[0] = fTemp7;
		fRec29[0] = (fConst33 * ((1500.0 * (fTemp7 + fVec3[1])) - (fConst34 * fRec29[1])));
		fRec18[0] = (double(Ftube(int(TUBE_TABLE_12AU7_250k), double(((fTemp5 + (fRec29[0] + fTemp6)) + -0.77616200000000002)))) + -78.255866666666662);
		fRec17[0] = ((0.10000000000000001 * ((fConst4 * fRec18[0]) + (fConst27 * fRec18[1]))) - (fConst28 * fRec17[1]));
		fRec30[0] = (fConst30 * ((fConst31 * fRec30[1]) + (0.10000000000000001 * (fRec18[0] - fRec18[1]))));
		double fTemp8 = (iSlow5 ? fRec30[0] : fRec17[0]);
		fVec4[0] = fTemp8;
		fRec16[0] = ((0.93028479253239138 * (fTemp8 + fVec4[1])) - (0.86056958506478287 * fRec16[1]));
		fRec15[0] = (fRec16[0] - ((1.8405051250752198 * fRec15[1]) + (0.86129424393186271 * fRec15[2])));
		double fTemp9 = (0.92544984225177063 * (fRec15[0] + fRec15[2]));
		double fTemp10 = (1.8508996845035413 * fRec15[1]);
		double fTemp11 = ((fTemp10 + fTemp9) / (double(Ranode(int(TUBE_TABLE_12AU7_250k), double(fRec14[1]))) + 100000.0));
		fVec5[0] = fTemp11;
		fRec31[0] = (fConst36 * ((820.0 * (fTemp11 + fVec5[1])) - (fConst37 * fRec31[1])));
		fRec14[0] = (double(Ftube(int(TUBE_TABLE_12AU7_250k), double(((fTemp9 + (fRec31[0] + fTemp10)) + -0.44548700000000002)))) + -75.672317073170731);
		fRec13[0] = ((0.10000000000000001 * ((fConst4 * fRec14[0]) + (fConst27 * fRec14[1]))) - (fConst28 * fRec13[1]));
		fRec32[0] = (fConst30 * ((fConst31 * fRec32[1]) + (0.10000000000000001 * (fRec14[0] - fRec14[1]))));
		double fTemp12 = (iSlow5 ? fRec32[0] : fRec13[0]);
		fRec33[0] = (fSlow7 + (0.999 * fRec33[1]));
		double fTemp13 = (fTemp12 * fRec33[0]);
		fRec12[0] = (fTemp13 + (1.0000000000000001e-15 - (fConst23 * ((fConst38 * fRec12[2]) + (fConst39 * fRec12[1])))));
		double fTemp14 = (fRec12[2] + (fRec12[0] + (2.0 * fRec12[1])));
		fVec6[0] = fTemp14;
		fRec11[0] = ((fConst23 * ((fConst4 * fTemp14) + (fConst27 * fVec6[1]))) - (fConst28 * fRec11[1]));
		fRec10[0] = (0.0 - (fConst19 * ((fConst20 * fRec10[1]) - (fRec11[0] + fRec11[1]))));
		fRec9[0] = (fRec10[0] - (fConst15 * ((fConst40 * fRec9[2]) + (fConst43 * fRec9[1]))));
		double fTemp15 = (fRec9[2] + (fRec9[0] + (2.0 * fRec9[1])));
		fVec7[0] = fTemp15;
		fRec8[0] = ((fConst15 * ((fConst17 * fTemp15) + (fConst44 * fVec7[1]))) - (fConst46 * fRec8[1]));
		fRec7[0] = (fRec8[0] - (fConst10 * ((fConst47 * fRec7[2]) + (fConst48 * fRec7[1]))));
		double fTemp16 = (fConst58 * fRec6[1]);
		fRec6[0] = ((fConst10 * (((fConst12 * fRec7[0]) + (fConst49 * fRec7[1])) + (fConst12 * fRec7[2]))) - (fConst53 * ((fConst55 * fRec6[2]) + fTemp16)));
		double fTemp17 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow4 * (fRec6[2] + (fConst53 * (fTemp16 + (fConst55 * fRec6[0])))))));
		fRec37[0] = ((fConst59 * fRec11[1]) - (fConst19 * ((fConst20 * fRec37[1]) - (fConst14 * fRec11[0]))));
		fRec36[0] = (fRec37[0] - (fConst15 * ((fConst40 * fRec36[2]) + (fConst43 * fRec36[1]))));
		double fTemp18 = (fConst48 * fRec35[1]);
		fRec35[0] = ((fConst15 * (((fConst42 * fRec36[0]) + (fConst60 * fRec36[1])) + (fConst42 * fRec36[2]))) - (fConst61 * ((fConst62 * fRec35[2]) + fTemp18)));
		double fTemp19 = (fConst58 * fRec34[1]);
		fRec34[0] = ((fRec35[2] + (fConst61 * (fTemp18 + (fConst62 * fRec35[0])))) - (fConst53 * ((fConst55 * fRec34[2]) + fTemp19)));
		double fTemp20 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow8 * (fRec34[2] + (fConst53 * (fTemp19 + (fConst55 * fRec34[0])))))));
		fRec41[0] = (0.0 - (fConst65 * ((fConst45 * fRec41[1]) - (fConst15 * (fTemp15 + fVec7[1])))));
		fRec40[0] = (fRec41[0] - (fConst10 * ((fConst47 * fRec40[2]) + (fConst48 * fRec40[1]))));
		double fTemp21 = (fRec40[2] + (fRec40[0] + (2.0 * fRec40[1])));
		fVec8[0] = fTemp21;
		fRec39[0] = ((fConst10 * ((fConst64 * fTemp21) + (fConst66 * fVec8[1]))) - (fConst67 * fRec39[1]));
		fRec38[0] = (fRec39[0] - (fConst63 * ((fConst68 * fRec38[2]) + (fConst58 * fRec38[1]))));
		double fTemp22 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow9 * (((fConst57 * fRec38[0]) + (fConst69 * fRec38[1])) + (fConst57 * fRec38[2])))));
		fRec43[0] = (0.0 - (fConst70 * ((fConst54 * fRec43[1]) - (fConst10 * (fTemp21 + fVec8[1])))));
		fRec42[0] = (fRec43[0] - (fConst63 * ((fConst68 * fRec42[2]) + (fConst58 * fRec42[1]))));
		double fTemp23 = std::max<double>(-1.0, std::min<double>(1.0, (fSlow10 * (fRec42[2] + (fRec42[0] + (2.0 * fRec42[1]))))));
		double fTemp24 = (((1.333521432 * (fTemp17 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp17))))) + (1.584893192 * ((fTemp20 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp20)))) + (fTemp22 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp22))))))) + (1.2589412 * (fTemp23 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp23))))));
		fVec9[0] = fTemp24;
		fRec5[0] = (0.0 - (fConst6 * ((fConst7 * fRec5[1]) - (fTemp24 + fVec9[1]))));
		double fTemp25 = (fTemp12 * (1.0 - fRec33[0]));
		double fTemp26 = (fTemp25 + 1.0000000000000001e-15);
		double fTemp27 = (((fSlow3 * fRec5[0]) + ((fTemp25 + (fSlow11 * ((4.0 * (fTemp26 * (1.0 - std::fabs(fTemp26)))) + (-1.0000000000000001e-15 - fTemp25)))) + (fSlow12 * (fTemp13 + 1.0000000000000001e-15)))) + 1.0000000000000001e-15);
		fVec10[0] = fTemp27;
		fRec4[0] = (0.0 - (fConst6 * ((fConst7 * fRec4[1]) - (fTemp27 + fVec10[1]))));
		fRec44[0] = (fSlow13 + (0.999 * fRec44[1]));
		double fTemp28 = (fRec4[0] * fRec44[0]);
		fVec11[0] = fTemp28;
		fRec3[0] = ((0.93028479253239138 * (fTemp28 + fVec11[1])) - (0.86056958506478287 * fRec3[1]));
		fRec2[0] = (fRec3[0] - ((1.8405051250752198 * fRec2[1]) + (0.86129424393186271 * fRec2[2])));
		double fTemp29 = (0.92544984225177063 * (fRec2[0] + fRec2[2]));
		double fTemp30 = (1.8508996845035413 * fRec2[1]);
		double fTemp31 = (fTemp30 + fTemp29);
		double fTemp32 = (fTemp31 / (double(Ranode(int(TUBE_TABLE_6V6_250k), double(fRec1[1]))) + 100000.0));
		fVec12[0] = fTemp32;
		fRec45[0] = (fConst6 * ((820.0 * (fTemp32 + fVec12[1])) - (fConst7 * fRec45[1])));
		fRec1[0] = (double(Ftube(int(TUBE_TABLE_6V6_250k), double(((fTemp29 + (fRec45[0] + fTemp30)) + -1.1304620000000001)))) + -112.13878048780487);
		fRec0[0] = ((0.025000000000000001 * ((fConst4 * fRec1[0]) + (fConst27 * fRec1[1]))) - (fConst28 * fRec0[1]));
		fRec46[0] = (fConst30 * ((fConst31 * fRec46[1]) + (0.025000000000000001 * (fRec1[0] - fRec1[1]))));
		double fTemp33 = (fTemp31 / (double(Ranode(int(TUBE_TABLE_6V6_68k), double(fRec48[1]))) + 100000.0));
		fVec13[0] = fTemp33;
		fRec49[0] = (fConst6 * ((820.0 * (fTemp33 + fVec13[1])) - (fConst7 * fRec49[1])));
		fRec48[0] = (double(Ftube(int(TUBE_TABLE_6V6_68k), double(((fTemp29 + (fRec49[0] + fTemp30)) + -1.1307400000000001)))) + -112.10487804878048);
		fRec47[0] = ((0.025000000000000001 * ((fConst4 * fRec48[0]) + (fConst27 * fRec48[1]))) - (fConst28 * fRec47[1]));
		fRec50[0] = (fConst30 * ((fConst31 * fRec50[1]) + (0.025000000000000001 * (fRec48[0] - fRec48[1]))));
		output0[i0] = FAUSTFLOAT(((iSlow0 ? fRec46[0] : fRec0[0]) + (iSlow0 ? fRec50[0] : fRec47[0])));
		fRec26[1] = fRec26[0];
		fVec0[1] = fVec0[0];
		fRec25[1] = fRec25[0];
		fRec24[2] = fRec24[1];
		fRec24[1] = fRec24[0];
		fVec1[1] = fVec1[0];
		fRec27[1] = fRec27[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec28[1] = fRec28[0];
		fVec2[1] = fVec2[0];
		fRec21[1] = fRec21[0];
		fRec20[1] = fRec20[0];
		fRec19[2] = fRec19[1];
		fRec19[1] = fRec19[0];
		fVec3[1] = fVec3[0];
		fRec29[1] = fRec29[0];
		fRec18[1] = fRec18[0];
		fRec17[1] = fRec17[0];
		fRec30[1] = fRec30[0];
		fVec4[1] = fVec4[0];
		fRec16[1] = fRec16[0];
		fRec15[2] = fRec15[1];
		fRec15[1] = fRec15[0];
		fVec5[1] = fVec5[0];
		fRec31[1] = fRec31[0];
		fRec14[1] = fRec14[0];
		fRec13[1] = fRec13[0];
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		fRec12[2] = fRec12[1];
		fRec12[1] = fRec12[0];
		fVec6[1] = fVec6[0];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fRec9[2] = fRec9[1];
		fRec9[1] = fRec9[0];
		fVec7[1] = fVec7[0];
		fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec37[1] = fRec37[0];
		fRec36[2] = fRec36[1];
		fRec36[1] = fRec36[0];
		fRec35[2] = fRec35[1];
		fRec35[1] = fRec35[0];
		fRec34[2] = fRec34[1];
		fRec34[1] = fRec34[0];
		fRec41[1] = fRec41[0];
		fRec40[2] = fRec40[1];
		fRec40[1] = fRec40[0];
		fVec8[1] = fVec8[0];
		fRec39[1] = fRec39[0];
		fRec38[2] = fRec38[1];
		fRec38[1] = fRec38[0];
		fRec43[1] = fRec43[0];
		fRec42[2] = fRec42[1];
		fRec42[1] = fRec42[0];
		fVec9[1] = fVec9[0];
		fRec5[1] = fRec5[0];
		fVec10[1] = fVec10[0];
		fRec4[1] = fRec4[0];
		fRec44[1] = fRec44[0];
		fVec11[1] = fVec11[0];
		fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fVec12[1] = fVec12[0];
		fRec45[1] = fRec45[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
		fRec46[1] = fRec46[0];
		fVec13[1] = fVec13[0];
		fRec49[1] = fRec49[0];
		fRec48[1] = fRec48[0];
		fRec47[1] = fRec47[0];
		fRec50[1] = fRec50[0];
	}
#undef fCheckbox0
#undef fVslider0
#undef fCheckbox1
#undef fVslider1
#undef fVslider2
#undef fVslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
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
		fVslider0_ = (float*)data; // , 0.34999999999999998, 0.0, 1.0, 0.01 
		break;
	case WET_DRY: 
		fVslider2_ = (float*)data; // , 100.0, 0.0, 100.0, 1.0 
		break;
	case PREGAIN: 
		fVslider1_ = (float*)data; // , -6.0, -20.0, 20.0, 0.10000000000000001 
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

} // end namespace gxamp4
