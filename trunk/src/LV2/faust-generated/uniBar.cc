// generated from file '../src/LV2/faust/uniBar.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)


namespace uniBar {

class Dsp: public PluginLV2 {
private:
	uint32_t fSampleRate;
	double fConst0;
	double fConst2;
	double fConst3;
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT	*fCheckbox0_;
	double fVec0[2];
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT	*fHslider0_;
	double fConst4;
	double fConst5;
	double fRec6[2];
	double fConst6;
	double fConst7;
	int iRec7[2];
	int IOTA;
	double fVec1[8192];
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT	*fHslider1_;
	double fConst8;
	double fConst9;
	double fRec5[3];
	double fRec4[2];
	double fRec0[2];
	double fVec2[4096];
	double fConst10;
	double fConst11;
	double fRec9[3];
	double fRec8[2];
	double fRec1[2];
	double fVec3[2048];
	double fConst12;
	double fConst13;
	double fRec11[3];
	double fRec10[2];
	double fRec2[2];
	double fVec4[2048];
	double fConst14;
	double fConst15;
	double fRec13[3];
	double fRec12[2];
	double fRec3[2];

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
	id = "uniBar";
	name = N_("Nonlinear Banded Waveguide Models");
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
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fVec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec6[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) iRec7[l2] = 0;
	for (int l3 = 0; (l3 < 8192); l3 = (l3 + 1)) fVec1[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec5[l4] = 0.0;
	for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) fRec4[l5] = 0.0;
	for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) fRec0[l6] = 0.0;
	for (int l7 = 0; (l7 < 4096); l7 = (l7 + 1)) fVec2[l7] = 0.0;
	for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) fRec9[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fRec8[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec1[l10] = 0.0;
	for (int l11 = 0; (l11 < 2048); l11 = (l11 + 1)) fVec3[l11] = 0.0;
	for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) fRec11[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec10[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec2[l14] = 0.0;
	for (int l15 = 0; (l15 < 2048); l15 = (l15 + 1)) fVec4[l15] = 0.0;
	for (int l16 = 0; (l16 < 3); l16 = (l16 + 1)) fRec13[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fRec12[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec3[l18] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t sample_rate)
{
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	double fConst1 = (1.0 - (100.53096491487338 / fConst0));
	fConst2 = mydsp_faustpower2_f(fConst1);
	fConst3 = (0.5 * (1.0 - fConst2));
	fConst4 = std::max<double>(1.0, (0.02 * fConst0));
	fConst5 = (1.0 / fConst4);
	fConst6 = (0.0 - (89.0 / std::max<double>(1.0, (0.0050000000000000001 * fConst0))));
	fConst7 = (1.0 / std::max<double>(1.0, (0.01 * fConst0)));
	fConst8 = (0.0 - (2.0 * fConst1));
	fConst9 = (6.2831853071795862 / fConst0);
	fConst10 = (0.36284470246734402 * fConst0);
	fConst11 = (17.316458706586939 / fConst0);
	fConst12 = (0.1850481125092524 * fConst0);
	fConst13 = (33.954333399998482 / fConst0);
	fConst14 = (0.11194447554013209 * fConst0);
	fConst15 = (56.127694349035245 / fConst0);
	IOTA = 0;
	clear_state_f();
}

void Dsp::init_static(uint32_t sample_rate, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fCheckbox0 (*fCheckbox0_)
#define fHslider0 (*fHslider0_)
#define fHslider1 (*fHslider1_)
	double fSlow0 = double(fCheckbox0);
	double fSlow1 = double(fHslider0);
	double fSlow2 = (2.5 * (fSlow0 * fSlow1));
	double fSlow3 = (fSlow1 + 0.029999999999999999);
	int iSlow4 = (fSlow0 == 0.0);
	double fSlow5 = double(fHslider1);
	int iSlow6 = int(std::min<double>(4096.0, std::max<double>(0.0, (fConst0 / fSlow5))));
	double fSlow7 = (fConst8 * std::cos((fConst9 * fSlow5)));
	int iSlow8 = int(std::min<double>(4096.0, std::max<double>(0.0, (fConst10 / fSlow5))));
	double fSlow9 = (fConst8 * std::cos((fConst11 * fSlow5)));
	int iSlow10 = int(std::min<double>(4096.0, std::max<double>(0.0, (fConst12 / fSlow5))));
	double fSlow11 = (fConst8 * std::cos((fConst13 * fSlow5)));
	int iSlow12 = int(std::min<double>(4096.0, std::max<double>(0.0, (fConst14 / fSlow5))));
	double fSlow13 = (fConst8 * std::cos((fConst15 * fSlow5)));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		fVec0[0] = fSlow0;
		fRec6[0] = (fSlow0 + (fRec6[1] * double((fVec0[1] >= fSlow0))));
		iRec7[0] = (iSlow4 * (iRec7[1] + 1));
		double fTemp0 = ((fSlow3 * std::max<double>(0.0, (std::min<double>((fConst5 * fRec6[0]), std::max<double>(((fConst6 * (fConst4 - fRec6[0])) + 1.0), 90.0)) * (1.0 - (fConst7 * double(iRec7[0])))))) + (-0.80000000000000004 - (0.99999999999999989 * ((fRec0[1] + fRec2[1]) + (fRec1[1] + fRec3[1])))));
		double fTemp1 = mydsp_faustpower4_f((std::fabs(fTemp0) + 0.75));
		double fTemp2 = (1.0 / fTemp1);
		double fTemp3 = (0.25 * (fTemp0 * (double((fTemp2 > 1.0)) + (double((fTemp2 <= 1.0)) / fTemp1))));
		fVec1[(IOTA & 8191)] = (fSlow2 + (fRec4[1] + fTemp3));
		fRec5[0] = ((0.90000000000000002 * fVec1[((IOTA - iSlow6) & 8191)]) - ((fSlow7 * fRec5[1]) + (fConst2 * fRec5[2])));
		fRec4[0] = (fConst3 * (fRec5[0] - fRec5[2]));
		fRec0[0] = fRec4[0];
		fVec2[(IOTA & 4095)] = (fSlow2 + (fTemp3 + fRec8[1]));
		fRec9[0] = ((0.81000000000000005 * fVec2[((IOTA - iSlow8) & 4095)]) - ((fSlow9 * fRec9[1]) + (fConst2 * fRec9[2])));
		fRec8[0] = (fConst3 * (fRec9[0] - fRec9[2]));
		fRec1[0] = fRec8[0];
		fVec3[(IOTA & 2047)] = (fSlow2 + (fTemp3 + fRec10[1]));
		fRec11[0] = ((0.72900000000000009 * fVec3[((IOTA - iSlow10) & 2047)]) - ((fSlow11 * fRec11[1]) + (fConst2 * fRec11[2])));
		fRec10[0] = (fConst3 * (fRec11[0] - fRec11[2]));
		fRec2[0] = fRec10[0];
		fVec4[(IOTA & 2047)] = (fSlow2 + (fTemp3 + fRec12[1]));
		fRec13[0] = ((0.65610000000000002 * fVec4[((IOTA - iSlow12) & 2047)]) - ((fSlow13 * fRec13[1]) + (fConst2 * fRec13[2])));
		fRec12[0] = (fConst3 * (fRec13[0] - fRec13[2]));
		fRec3[0] = fRec12[0];
		output0[i0] = FAUSTFLOAT((double(input0[i0]) + (((fRec0[0] + fRec1[0]) + fRec2[0]) + fRec3[0])));
		fVec0[1] = fVec0[0];
		fRec6[1] = fRec6[0];
		iRec7[1] = iRec7[0];
		IOTA = (IOTA + 1);
		fRec5[2] = fRec5[1];
		fRec5[1] = fRec5[0];
		fRec4[1] = fRec4[0];
		fRec0[1] = fRec0[0];
		fRec9[2] = fRec9[1];
		fRec9[1] = fRec9[0];
		fRec8[1] = fRec8[0];
		fRec1[1] = fRec1[0];
		fRec11[2] = fRec11[1];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fRec2[1] = fRec2[0];
		fRec13[2] = fRec13[1];
		fRec13[1] = fRec13[0];
		fRec12[1] = fRec12[0];
		fRec3[1] = fRec3[0];
	}
#undef fCheckbox0
#undef fHslider0
#undef fHslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GATE: 
		fCheckbox0_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case GAIN: 
		fHslider0_ = (float*)data; // , 0.80000000000000004, 0.0, 10.0, 0.01 
		break;
	case SYNTHFREQ: 
		fHslider1_ = (float*)data; // , 440.0, 20.0, 20000.0, 1.0 
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
   GAIN, 
   GATE, 
   SYNTHFREQ, 
} PortIndex;
*/

} // end namespace uniBar
