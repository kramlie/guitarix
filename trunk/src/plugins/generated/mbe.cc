// generated from file '../src/plugins/mbe.dsp' by dsp2cc:
// Code generated with Faust 0.9.58 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

namespace pluginlib {
namespace mbe {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	FAUSTFLOAT 	fslider0;
	int 	iConst3;
	double 	fRec1[2];
	double 	fRec2[2];
	double 	fRec3[2];
	double 	fRec4[2];
	FAUSTFLOAT 	fslider1;
	double 	fRec5[2];
	FAUSTFLOAT 	fslider2;
	double 	fConst4;
	double 	fVec0[2];
	double 	fRec7[2];
	double 	fRec6[3];
	int 	IOTA;
	double 	fRec0[524288];
	FAUSTFLOAT 	fslider3;
	double 	fRec9[2];
	double 	fRec10[2];
	double 	fRec11[2];
	double 	fRec12[2];
	FAUSTFLOAT 	fslider4;
	double 	fRec13[2];
	FAUSTFLOAT 	fslider5;
	double 	fRec17[2];
	double 	fRec16[3];
	double 	fVec1[2];
	double 	fRec15[2];
	double 	fRec14[3];
	double 	fRec8[524288];
	FAUSTFLOAT 	fslider6;
	double 	fRec19[2];
	double 	fRec20[2];
	double 	fRec21[2];
	double 	fRec22[2];
	FAUSTFLOAT 	fslider7;
	double 	fRec23[2];
	FAUSTFLOAT 	fslider8;
	double 	fRec27[2];
	double 	fRec26[3];
	double 	fVec2[2];
	double 	fRec25[2];
	double 	fRec24[3];
	double 	fRec18[524288];
	FAUSTFLOAT 	fslider9;
	double 	fRec29[2];
	double 	fRec30[2];
	double 	fRec31[2];
	double 	fRec32[2];
	FAUSTFLOAT 	fslider10;
	double 	fRec33[2];
	FAUSTFLOAT 	fslider11;
	double 	fRec37[2];
	double 	fRec36[3];
	double 	fVec3[2];
	double 	fRec35[2];
	double 	fRec34[3];
	double 	fRec28[524288];
	FAUSTFLOAT 	fslider12;
	double 	fRec39[2];
	double 	fRec40[2];
	double 	fRec41[2];
	double 	fRec42[2];
	FAUSTFLOAT 	fslider13;
	double 	fRec43[2];
	double 	fRec45[2];
	double 	fRec44[3];
	double 	fRec38[524288];
	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	void init(unsigned int samplingFreq);
	void compute(int count, float *input0, float *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int samplingFreq, PluginDef*);
	static void compute_static(int count, float *input0, float *output0, PluginDef*);
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
	id = "mbe";
	name = N_("MultiBand Echo");
	groups = 0;
	description = N_("Multi Band Echo"); // description (tooltip)
	category = N_("Echo / Delay");       // category
	shortname = N_("MB Echo");     // shortname
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
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<3; i++) fRec6[i] = 0;
	for (int i=0; i<524288; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<3; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<3; i++) fRec14[i] = 0;
	for (int i=0; i<524288; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<3; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	for (int i=0; i<524288; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec37[i] = 0;
	for (int i=0; i<3; i++) fRec36[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec35[i] = 0;
	for (int i=0; i<3; i++) fRec34[i] = 0;
	for (int i=0; i<524288; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fRec39[i] = 0;
	for (int i=0; i<2; i++) fRec40[i] = 0;
	for (int i=0; i<2; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fRec42[i] = 0;
	for (int i=0; i<2; i++) fRec43[i] = 0;
	for (int i=0; i<2; i++) fRec45[i] = 0;
	for (int i=0; i<3; i++) fRec44[i] = 0;
	for (int i=0; i<524288; i++) fRec38[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (1e+01 / double(iConst0));
	fConst2 = (0 - fConst1);
	iConst3 = (60 * iConst0);
	fConst4 = (3.141592653589793 / double(iConst0));
	IOTA = 0;
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, float *input0, float *output0)
{
	double 	fSlow0 = (double(iConst3) / fslider0);
	double 	fSlow1 = (1.000000000000001e-05 * fslider1);
	double 	fSlow2 = tan((fConst4 * fslider2));
	double 	fSlow3 = (1.0 / faustpower<2>(fSlow2));
	double 	fSlow4 = (2 * (1 - fSlow3));
	double 	fSlow5 = (1.0 / fSlow2);
	double 	fSlow6 = (1 + ((fSlow5 - 1.0000000000000004) / fSlow2));
	double 	fSlow7 = (1 + ((1.0000000000000004 + fSlow5) / fSlow2));
	double 	fSlow8 = (1.0 / fSlow7);
	double 	fSlow9 = (1 + fSlow5);
	double 	fSlow10 = (0 - ((1 - fSlow5) / fSlow9));
	double 	fSlow11 = (0 - fSlow5);
	double 	fSlow12 = (1.0 / fSlow9);
	double 	fSlow13 = (2 * (0 - fSlow3));
	double 	fSlow14 = (double(iConst3) / fslider3);
	double 	fSlow15 = (1.000000000000001e-05 * fslider4);
	double 	fSlow16 = tan((fConst4 * fslider5));
	double 	fSlow17 = (1.0 / faustpower<2>(fSlow16));
	double 	fSlow18 = (2 * (1 - fSlow17));
	double 	fSlow19 = (1.0 / fSlow16);
	double 	fSlow20 = (1 + ((fSlow19 - 1.0000000000000004) / fSlow16));
	double 	fSlow21 = (1 + ((1.0000000000000004 + fSlow19) / fSlow16));
	double 	fSlow22 = (1.0 / fSlow21);
	double 	fSlow23 = (1 + fSlow19);
	double 	fSlow24 = (0 - ((1 - fSlow19) / fSlow23));
	double 	fSlow25 = (1.0 / (fSlow7 * fSlow16));
	double 	fSlow26 = (0 - fSlow19);
	double 	fSlow27 = (1.0 / fSlow23);
	double 	fSlow28 = (2 * (0 - fSlow17));
	double 	fSlow29 = (double(iConst3) / fslider6);
	double 	fSlow30 = (1.000000000000001e-05 * fslider7);
	double 	fSlow31 = tan((fConst4 * fslider8));
	double 	fSlow32 = (1.0 / faustpower<2>(fSlow31));
	double 	fSlow33 = (2 * (1 - fSlow32));
	double 	fSlow34 = (1.0 / fSlow31);
	double 	fSlow35 = (1 + ((fSlow34 - 1.0000000000000004) / fSlow31));
	double 	fSlow36 = (1 + ((1.0000000000000004 + fSlow34) / fSlow31));
	double 	fSlow37 = (1.0 / fSlow36);
	double 	fSlow38 = (1 + fSlow34);
	double 	fSlow39 = (0 - ((1 - fSlow34) / fSlow38));
	double 	fSlow40 = (1.0 / (fSlow21 * fSlow31));
	double 	fSlow41 = (0 - fSlow34);
	double 	fSlow42 = (1.0 / fSlow38);
	double 	fSlow43 = (2 * (0 - fSlow32));
	double 	fSlow44 = (double(iConst3) / fslider9);
	double 	fSlow45 = (1.000000000000001e-05 * fslider10);
	double 	fSlow46 = tan((fConst4 * fslider11));
	double 	fSlow47 = (1.0 / faustpower<2>(fSlow46));
	double 	fSlow48 = (2 * (1 - fSlow47));
	double 	fSlow49 = (1.0 / fSlow46);
	double 	fSlow50 = (1 + ((fSlow49 - 1.0000000000000004) / fSlow46));
	double 	fSlow51 = (1.0 / (1 + ((1.0000000000000004 + fSlow49) / fSlow46)));
	double 	fSlow52 = (1 + fSlow49);
	double 	fSlow53 = (0 - ((1 - fSlow49) / fSlow52));
	double 	fSlow54 = (1.0 / (fSlow36 * fSlow46));
	double 	fSlow55 = (0 - fSlow49);
	double 	fSlow56 = (1.0 / fSlow52);
	double 	fSlow57 = (2 * (0 - fSlow47));
	double 	fSlow58 = (double(iConst3) / fslider12);
	double 	fSlow59 = (1.000000000000001e-05 * fslider13);
	for (int i=0; i<count; i++) {
		double fTemp0 = ((int((fRec1[1] != 0.0)))?((int(((fRec2[1] > 0.0) & (fRec2[1] < 1.0))))?fRec1[1]:0):((int(((fRec2[1] == 0.0) & (fSlow0 != fRec3[1]))))?fConst1:((int(((fRec2[1] == 1.0) & (fSlow0 != fRec4[1]))))?fConst2:0)));
		fRec1[0] = fTemp0;
		fRec2[0] = max(0.0, min(1.0, (fRec2[1] + fTemp0)));
		fRec3[0] = ((int(((fRec2[1] >= 1.0) & (fRec4[1] != fSlow0))))?fSlow0:fRec3[1]);
		fRec4[0] = ((int(((fRec2[1] <= 0.0) & (fRec3[1] != fSlow0))))?fSlow0:fRec4[1]);
		fRec5[0] = (fSlow1 + (0.999 * fRec5[1]));
		double fTemp1 = (double)input0[i];
		fVec0[0] = fTemp1;
		fRec7[0] = ((fSlow12 * ((fSlow11 * fVec0[1]) + (fSlow5 * fVec0[0]))) + (fSlow10 * fRec7[1]));
		fRec6[0] = (fRec7[0] - (fSlow8 * ((fSlow6 * fRec6[2]) + (fSlow4 * fRec6[1]))));
		fRec0[IOTA&524287] = ((fSlow8 * (((fSlow3 * fRec6[0]) + (fSlow13 * fRec6[1])) + (fSlow3 * fRec6[2]))) + (fRec5[0] * ((fRec2[0] * fRec0[(IOTA-int((1 + int((int(fRec4[0]) & 262143)))))&524287]) + ((1.0 - fRec2[0]) * fRec0[(IOTA-int((1 + int((int(fRec3[0]) & 262143)))))&524287]))));
		double fTemp2 = ((int((fRec9[1] != 0.0)))?((int(((fRec10[1] > 0.0) & (fRec10[1] < 1.0))))?fRec9[1]:0):((int(((fRec10[1] == 0.0) & (fSlow14 != fRec11[1]))))?fConst1:((int(((fRec10[1] == 1.0) & (fSlow14 != fRec12[1]))))?fConst2:0)));
		fRec9[0] = fTemp2;
		fRec10[0] = max(0.0, min(1.0, (fRec10[1] + fTemp2)));
		fRec11[0] = ((int(((fRec10[1] >= 1.0) & (fRec12[1] != fSlow14))))?fSlow14:fRec11[1]);
		fRec12[0] = ((int(((fRec10[1] <= 0.0) & (fRec11[1] != fSlow14))))?fSlow14:fRec12[1]);
		fRec13[0] = (fSlow15 + (0.999 * fRec13[1]));
		double fTemp3 = (fVec0[0] + fVec0[1]);
		fRec17[0] = ((fSlow12 * fTemp3) + (fSlow10 * fRec17[1]));
		fRec16[0] = (fRec17[0] - (fSlow8 * ((fSlow6 * fRec16[2]) + (fSlow4 * fRec16[1]))));
		double fTemp4 = (fRec16[2] + (fRec16[0] + (2 * fRec16[1])));
		fVec1[0] = (fSlow8 * fTemp4);
		fRec15[0] = ((fSlow27 * ((fSlow26 * fVec1[1]) + (fSlow25 * fTemp4))) + (fSlow24 * fRec15[1]));
		fRec14[0] = (fRec15[0] - (fSlow22 * ((fSlow20 * fRec14[2]) + (fSlow18 * fRec14[1]))));
		fRec8[IOTA&524287] = ((fSlow22 * (((fSlow17 * fRec14[0]) + (fSlow28 * fRec14[1])) + (fSlow17 * fRec14[2]))) + (fRec13[0] * ((fRec10[0] * fRec8[(IOTA-int((1 + int((int(fRec12[0]) & 262143)))))&524287]) + ((1.0 - fRec10[0]) * fRec8[(IOTA-int((1 + int((int(fRec11[0]) & 262143)))))&524287]))));
		double fTemp5 = ((int((fRec19[1] != 0.0)))?((int(((fRec20[1] > 0.0) & (fRec20[1] < 1.0))))?fRec19[1]:0):((int(((fRec20[1] == 0.0) & (fSlow29 != fRec21[1]))))?fConst1:((int(((fRec20[1] == 1.0) & (fSlow29 != fRec22[1]))))?fConst2:0)));
		fRec19[0] = fTemp5;
		fRec20[0] = max(0.0, min(1.0, (fRec20[1] + fTemp5)));
		fRec21[0] = ((int(((fRec20[1] >= 1.0) & (fRec22[1] != fSlow29))))?fSlow29:fRec21[1]);
		fRec22[0] = ((int(((fRec20[1] <= 0.0) & (fRec21[1] != fSlow29))))?fSlow29:fRec22[1]);
		fRec23[0] = (fSlow30 + (0.999 * fRec23[1]));
		fRec27[0] = ((fSlow27 * fTemp3) + (fSlow24 * fRec27[1]));
		fRec26[0] = (fRec27[0] - (fSlow22 * ((fSlow20 * fRec26[2]) + (fSlow18 * fRec26[1]))));
		double fTemp6 = (fRec26[2] + (fRec26[0] + (2 * fRec26[1])));
		fVec2[0] = (fSlow22 * fTemp6);
		fRec25[0] = ((fSlow42 * ((fSlow41 * fVec2[1]) + (fSlow40 * fTemp6))) + (fSlow39 * fRec25[1]));
		fRec24[0] = (fRec25[0] - (fSlow37 * ((fSlow35 * fRec24[2]) + (fSlow33 * fRec24[1]))));
		fRec18[IOTA&524287] = ((fSlow37 * (((fSlow32 * fRec24[0]) + (fSlow43 * fRec24[1])) + (fSlow32 * fRec24[2]))) + (fRec23[0] * ((fRec20[0] * fRec18[(IOTA-int((1 + int((int(fRec22[0]) & 262143)))))&524287]) + ((1.0 - fRec20[0]) * fRec18[(IOTA-int((1 + int((int(fRec21[0]) & 262143)))))&524287]))));
		double fTemp7 = ((int((fRec29[1] != 0.0)))?((int(((fRec30[1] > 0.0) & (fRec30[1] < 1.0))))?fRec29[1]:0):((int(((fRec30[1] == 0.0) & (fSlow44 != fRec31[1]))))?fConst1:((int(((fRec30[1] == 1.0) & (fSlow44 != fRec32[1]))))?fConst2:0)));
		fRec29[0] = fTemp7;
		fRec30[0] = max(0.0, min(1.0, (fRec30[1] + fTemp7)));
		fRec31[0] = ((int(((fRec30[1] >= 1.0) & (fRec32[1] != fSlow44))))?fSlow44:fRec31[1]);
		fRec32[0] = ((int(((fRec30[1] <= 0.0) & (fRec31[1] != fSlow44))))?fSlow44:fRec32[1]);
		fRec33[0] = (fSlow45 + (0.999 * fRec33[1]));
		fRec37[0] = ((fSlow42 * fTemp3) + (fSlow39 * fRec37[1]));
		fRec36[0] = (fRec37[0] - (fSlow37 * ((fSlow35 * fRec36[2]) + (fSlow33 * fRec36[1]))));
		double fTemp8 = (fRec36[2] + (fRec36[0] + (2 * fRec36[1])));
		fVec3[0] = (fSlow37 * fTemp8);
		fRec35[0] = ((fSlow56 * ((fSlow55 * fVec3[1]) + (fSlow54 * fTemp8))) + (fSlow53 * fRec35[1]));
		fRec34[0] = (fRec35[0] - (fSlow51 * ((fSlow50 * fRec34[2]) + (fSlow48 * fRec34[1]))));
		fRec28[IOTA&524287] = ((fSlow51 * (((fSlow47 * fRec34[0]) + (fSlow57 * fRec34[1])) + (fSlow47 * fRec34[2]))) + (fRec33[0] * ((fRec30[0] * fRec28[(IOTA-int((1 + int((int(fRec32[0]) & 262143)))))&524287]) + ((1.0 - fRec30[0]) * fRec28[(IOTA-int((1 + int((int(fRec31[0]) & 262143)))))&524287]))));
		double fTemp9 = ((int((fRec39[1] != 0.0)))?((int(((fRec40[1] > 0.0) & (fRec40[1] < 1.0))))?fRec39[1]:0):((int(((fRec40[1] == 0.0) & (fSlow58 != fRec41[1]))))?fConst1:((int(((fRec40[1] == 1.0) & (fSlow58 != fRec42[1]))))?fConst2:0)));
		fRec39[0] = fTemp9;
		fRec40[0] = max(0.0, min(1.0, (fRec40[1] + fTemp9)));
		fRec41[0] = ((int(((fRec40[1] >= 1.0) & (fRec42[1] != fSlow58))))?fSlow58:fRec41[1]);
		fRec42[0] = ((int(((fRec40[1] <= 0.0) & (fRec41[1] != fSlow58))))?fSlow58:fRec42[1]);
		fRec43[0] = (fSlow59 + (0.999 * fRec43[1]));
		fRec45[0] = ((fSlow56 * fTemp3) + (fSlow53 * fRec45[1]));
		fRec44[0] = (fRec45[0] - (fSlow51 * ((fSlow50 * fRec44[2]) + (fSlow48 * fRec44[1]))));
		fRec38[IOTA&524287] = ((fSlow51 * (fRec44[2] + (fRec44[0] + (2 * fRec44[1])))) + (fRec43[0] * ((fRec40[0] * fRec38[(IOTA-int((1 + int((int(fRec42[0]) & 262143)))))&524287]) + ((1.0 - fRec40[0]) * fRec38[(IOTA-int((1 + int((int(fRec41[0]) & 262143)))))&524287]))));
		output0[i] = (FAUSTFLOAT)((((fRec38[(IOTA-0)&524287] + fRec28[(IOTA-0)&524287]) + fRec18[(IOTA-0)&524287]) + fRec8[(IOTA-0)&524287]) + fRec0[(IOTA-0)&524287]);
		// post processing
		fRec44[2] = fRec44[1]; fRec44[1] = fRec44[0];
		fRec45[1] = fRec45[0];
		fRec43[1] = fRec43[0];
		fRec42[1] = fRec42[0];
		fRec41[1] = fRec41[0];
		fRec40[1] = fRec40[0];
		fRec39[1] = fRec39[0];
		fRec34[2] = fRec34[1]; fRec34[1] = fRec34[0];
		fRec35[1] = fRec35[0];
		fVec3[1] = fVec3[0];
		fRec36[2] = fRec36[1]; fRec36[1] = fRec36[0];
		fRec37[1] = fRec37[0];
		fRec33[1] = fRec33[0];
		fRec32[1] = fRec32[0];
		fRec31[1] = fRec31[0];
		fRec30[1] = fRec30[0];
		fRec29[1] = fRec29[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fVec2[1] = fVec2[0];
		fRec26[2] = fRec26[1]; fRec26[1] = fRec26[0];
		fRec27[1] = fRec27[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec21[1] = fRec21[0];
		fRec20[1] = fRec20[0];
		fRec19[1] = fRec19[0];
		fRec14[2] = fRec14[1]; fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fVec1[1] = fVec1[0];
		fRec16[2] = fRec16[1]; fRec16[1] = fRec16[0];
		fRec17[1] = fRec17[0];
		fRec13[1] = fRec13[0];
		fRec12[1] = fRec12[0];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fRec9[1] = fRec9[0];
		IOTA = IOTA+1;
		fRec6[2] = fRec6[1]; fRec6[1] = fRec6[0];
		fRec7[1] = fRec7[0];
		fVec0[1] = fVec0[0];
		fRec5[1] = fRec5[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
	}
}

void __rt_func Dsp::compute_static(int count, float *input0, float *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("mbe.crossover_b1_b2",N_("Crossover B1-B2 (hz)"),"SL",N_("Crossover bandpass frequency"),&fslider11, 8e+01, 2e+01, 2e+04, 1.08);
	reg.registerVar("mbe.crossover_b2_b3",N_("Crossover B2-B3 (hz)"),"SL",N_("Crossover bandpass frequency"),&fslider8, 2.1e+02, 2e+01, 2e+04, 1.08);
	reg.registerVar("mbe.crossover_b3_b4",N_("Crossover B3-B4 (hz)"),"SL",N_("Crossover bandpass frequency"),&fslider5, 1.7e+03, 2e+01, 2e+04, 1.08);
	reg.registerVar("mbe.crossover_b4_b5",N_("Crossover B4-B5 (hz)"),"SL",N_("Crossover bandpass frequency"),&fslider2, 5e+03, 2e+01, 2e+04, 1.08);
	reg.registerVar("mbe.percent1","","S","",&fslider13, 1e+01, 0.0, 1e+02, 0.1);
	reg.registerVar("mbe.percent2","","S","",&fslider10, 3e+01, 0.0, 1e+02, 0.1);
	reg.registerVar("mbe.percent3","","S","",&fslider7, 45.0, 0.0, 1e+02, 0.1);
	reg.registerVar("mbe.percent4","","S","",&fslider4, 2e+01, 0.0, 1e+02, 0.1);
	reg.registerVar("mbe.percent5","","S","",&fslider1, 0.0, 0.0, 1e+02, 0.1);
	reg.registerVar("mbe.time1","","S",N_("Echo in Beats per Minute"),&fslider12, 3e+01, 24.0, 3.6e+02, 1.0);
	reg.registerVar("mbe.time2","","S",N_("Echo in Beats per Minute"),&fslider9, 6e+01, 24.0, 3.6e+02, 1.0);
	reg.registerVar("mbe.time3","","S",N_("Echo in Beats per Minute"),&fslider6, 1.2e+02, 24.0, 3.6e+02, 1.0);
	reg.registerVar("mbe.time4","","S",N_("Echo in Beats per Minute"),&fslider3, 1.5e+02, 24.0, 3.6e+02, 1.0);
	reg.registerVar("mbe.time5","","S",N_("Echo in Beats per Minute"),&fslider0, 2.4e+02, 24.0, 3.6e+02, 1.0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("mbe" "." p)

b.openHorizontalhideBox("");
b.closeBox();

b.openHorizontalBox("");
b.openVerticalBox("");

b.openTabBox("");

b.openHorizontalBox(N_("Band 1"));
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("time1"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("percent1"), N_("Amount"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b1_b2"), N_("Low Shelf (Hz)"));
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 2"));
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("time2"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("percent2"), N_("Amount"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b1_b2"), N_("Low (Hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b2_b3"), N_("High (hz)"));
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 3"));
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("time3"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("percent3"), N_("Amount"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b2_b3"), N_("Low (Hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b3_b4"), N_("High (hz)"));
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 4"));
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("time4"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("percent4"), N_("Amount"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b3_b4"), N_("Low (Hz)"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b4_b5"), N_("High (hz)"));
b.closeBox();
b.closeBox();
b.closeBox();

b.openHorizontalBox(N_("Band 5"));
b.openVerticalBox("");
b.openHorizontalBox("");
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("time5"), N_("BPM"));
b.set_next_flags(UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("percent5"), N_("Amount"));
b.set_next_flags(UI_NUM_SHOW_ALWAYS|UI_NUM_RIGHT);
b.create_small_rackknob(PARAM("crossover_b4_b5"), N_("High Shelf (Hz)"));
b.closeBox();
b.closeBox();
b.closeBox();

b.closeBox();
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

} // end namespace mbe
} // end namespace pluginlib
