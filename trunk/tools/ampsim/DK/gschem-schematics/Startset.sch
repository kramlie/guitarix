v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 47700 49700 1 90 0 resistor-2.sym
{
T 47350 50100 5 10 0 0 90 0 1
device=RESISTOR
T 48100 50400 5 10 1 1 180 0 1
refdes=R5
T 47800 49900 5 10 1 1 0 0 1
value=1.2k
}
C 48800 48800 1 180 0 capacitor-1.sym
{
T 48600 48100 5 10 0 0 180 0 1
device=CAPACITOR
T 48000 48700 5 10 1 1 0 0 1
refdes=C4
T 48600 47900 5 10 0 0 180 0 1
symversion=0.1
T 48900 48900 5 10 1 1 180 0 1
value=0.1u
}
C 53800 41800 1 0 1 gnd-1.sym
C 52000 41800 1 0 0 gnd-1.sym
C 48000 44000 1 0 0 npn-2.sym
{
T 48600 44500 5 10 0 0 0 0 1
device=NPN_TRANSISTOR
T 48400 44400 5 10 1 1 0 0 1
refdes=T2
T 48000 44000 5 10 0 1 0 0 1
value=Vt=26mV,Is=20.3fA,Bf=1430,Br=4
T 48600 44200 5 10 1 1 0 0 1
model-name=2N5088
}
C 49000 44500 1 0 0 npn-2.sym
{
T 49600 45000 5 10 0 0 0 0 1
device=NPN_TRANSISTOR
T 49300 44900 5 10 1 1 0 0 1
refdes=T3
T 49000 44500 5 10 0 1 0 0 1
value=Vt=26mV,Is=20.3fA,Bf=1430,Br=4
T 49600 44700 5 10 1 1 0 0 1
model-name=2N5088
}
C 47000 47000 1 270 1 resistor-variable-2.sym
{
T 46650 47300 5 10 1 1 180 6 1
refdes=P2
T 47900 47800 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 49400 47200 5 10 1 1 180 0 1
value=value=1000k,var=Volume
}
C 40700 46500 1 0 0 input-1.sym
{
T 40700 46800 5 10 0 0 0 0 1
device=INPUT
T 40700 46500 5 10 1 1 0 0 1
refdes=IN1
}
C 54800 45100 1 180 1 output-1.sym
{
T 54900 44800 5 10 0 0 180 6 1
device=OUTPUT
T 55000 45100 5 10 1 1 180 6 1
refdes=OUT1
}
C 55400 41800 1 0 1 gnd-1.sym
C 45600 49000 1 90 1 capacitor-2.sym
{
T 44900 48800 5 10 0 0 270 2 1
device=POLARIZED_CAPACITOR
T 45900 48700 5 10 1 1 0 6 1
refdes=C2
T 44700 48800 5 10 0 0 270 2 1
symversion=0.1
T 45800 48300 5 10 1 1 0 6 1
value=47u
}
C 45200 49500 1 90 0 resistor-2.sym
{
T 44850 49900 5 10 0 0 90 0 1
device=RESISTOR
T 44900 50200 5 10 1 1 180 0 1
refdes=R2
T 44600 49800 5 10 1 1 0 0 1
value=10k
}
C 46000 49400 1 90 0 resistor-2.sym
{
T 45650 49800 5 10 0 0 90 0 1
device=RESISTOR
T 45700 50200 5 10 1 1 180 0 1
refdes=R3
T 45400 49700 5 10 1 1 0 0 1
value=10k
}
C 49500 49000 1 270 0 capacitor-1.sym
{
T 50200 48800 5 10 0 0 270 0 1
device=CAPACITOR
T 49600 48800 5 10 1 1 180 0 1
refdes=C5
T 50400 48800 5 10 0 0 270 0 1
symversion=0.1
T 49200 48200 5 10 1 1 0 0 1
value=0.47u
}
C 47300 48800 1 180 0 capacitor-1.sym
{
T 47100 48100 5 10 0 0 180 0 1
device=CAPACITOR
T 46500 48700 5 10 1 1 0 0 1
refdes=C3
T 47100 47900 5 10 0 0 180 0 1
symversion=0.1
T 47400 48900 5 10 1 1 180 0 1
value=0.1u
}
C 50300 48900 1 270 0 capacitor-1.sym
{
T 51000 48700 5 10 0 0 270 0 1
device=CAPACITOR
T 50400 48800 5 10 1 1 180 0 1
refdes=C6
T 51200 48700 5 10 0 0 270 0 1
symversion=0.1
T 50600 48100 5 10 1 1 0 0 1
value=0.1u
}
C 54100 46600 1 270 1 resistor-variable-2.sym
{
T 53750 47300 5 10 1 1 180 6 1
refdes=P4
T 55000 47400 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 54000 47100 5 10 1 1 180 0 1
value=value=10k,var=Tone
}
C 54600 41800 1 0 1 gnd-1.sym
C 41200 47300 1 0 0 npn-2.sym
{
T 41800 47800 5 10 0 0 0 0 1
device=NPN_TRANSISTOR
T 41600 47800 5 10 1 1 0 0 1
refdes=T1
T 41200 47300 5 10 0 1 0 0 1
value=Vt=26mV,Is=20.3fA,Bf=1430,Br=4
T 41700 47600 5 10 1 1 0 0 1
model-name=2N5088
}
C 53600 48700 1 180 0 capacitor-1.sym
{
T 53400 48000 5 10 0 0 180 0 1
device=CAPACITOR
T 52800 48600 5 10 1 1 0 0 1
refdes=C8
T 53400 47800 5 10 0 0 180 0 1
symversion=0.1
T 53900 48700 5 10 1 1 180 0 1
value=0.01u
}
C 44300 49600 1 90 0 resistor-2.sym
{
T 43950 50000 5 10 0 0 90 0 1
device=RESISTOR
T 44000 50300 5 10 1 1 180 0 1
refdes=R1
T 43600 49900 5 10 1 1 0 0 1
value=470k
}
C 50000 46800 1 270 1 resistor-variable-2.sym
{
T 50250 47200 5 10 1 1 180 6 1
refdes=P3
T 50900 47600 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 51900 46900 5 10 1 1 180 0 1
value=value=40k,var=Drive
}
C 51500 41800 1 0 1 gnd-1.sym
C 52100 48700 1 180 0 capacitor-1.sym
{
T 51900 48000 5 10 0 0 180 0 1
device=CAPACITOR
T 51300 48600 5 10 1 1 0 0 1
refdes=C7
T 51900 47800 5 10 0 0 180 0 1
symversion=0.1
T 52100 48700 5 10 1 1 180 0 1
value=0.01u
}
C 47200 50400 1 180 0 resistor-2.sym
{
T 46800 50050 5 10 0 0 180 0 1
device=RESISTOR
T 46500 50500 5 10 1 1 0 0 1
refdes=R4
T 47100 50100 5 10 1 1 180 0 1
value=10k
}
C 50900 50600 1 180 0 resistor-2.sym
{
T 50500 50250 5 10 0 0 180 0 1
device=RESISTOR
T 50200 50200 5 10 1 1 0 0 1
refdes=R8
T 50800 50300 5 10 1 1 180 0 1
value=47k
}
C 49100 49600 1 90 0 resistor-2.sym
{
T 48750 50000 5 10 0 0 90 0 1
device=RESISTOR
T 48800 50400 5 10 1 1 180 0 1
refdes=R6
T 48500 49900 5 10 1 1 0 0 1
value=1M
}
C 42600 42300 1 0 1 gnd-1.sym
C 49700 49600 1 90 0 resistor-2.sym
{
T 49350 50000 5 10 0 0 90 0 1
device=RESISTOR
T 50000 50300 5 10 1 1 180 0 1
refdes=R7
T 49700 49800 5 10 1 1 0 0 1
value=100
}
C 51300 49500 1 90 0 resistor-2.sym
{
T 50950 49900 5 10 0 0 90 0 1
device=RESISTOR
T 51600 50200 5 10 1 1 180 0 1
refdes=R9
T 51400 49600 5 10 1 1 0 0 1
value=10k
}
C 50900 41800 1 0 1 gnd-1.sym
C 52100 49500 1 90 0 resistor-2.sym
{
T 51750 49900 5 10 0 0 90 0 1
device=RESISTOR
T 52500 50200 5 10 1 1 180 0 1
refdes=R10
T 52200 49600 5 10 1 1 0 0 1
value=10k
}
C 53000 49500 1 90 0 resistor-2.sym
{
T 52650 49900 5 10 0 0 90 0 1
device=RESISTOR
T 53300 50200 5 10 1 1 180 0 1
refdes=R11
T 53100 49600 5 10 1 1 0 0 1
value=10k
}
C 44500 48800 1 180 0 capacitor-1.sym
{
T 44300 48100 5 10 0 0 180 0 1
device=CAPACITOR
T 43700 48700 5 10 1 1 0 0 1
refdes=C1
T 44300 47900 5 10 0 0 180 0 1
symversion=0.1
T 44500 48800 5 10 1 1 180 0 1
value=0.1u
}
C 54500 49400 1 90 0 resistor-2.sym
{
T 54150 49800 5 10 0 0 90 0 1
device=RESISTOR
T 54900 50100 5 10 1 1 180 0 1
refdes=R13
T 54600 49500 5 10 1 1 0 0 1
value=10k
}
C 44200 47000 1 270 1 resistor-variable-2.sym
{
T 45100 47800 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 43950 47700 5 10 1 1 180 6 1
refdes=P1
T 46200 47800 5 10 1 1 180 0 1
value=value=4.6k,var=Bias
}
C 53100 41800 1 0 1 gnd-1.sym
C 55400 49300 1 90 0 resistor-2.sym
{
T 55050 49700 5 10 0 0 90 0 1
device=RESISTOR
T 55800 49900 5 10 1 1 180 0 1
refdes=R14
T 55500 49400 5 10 1 1 0 0 1
value=100
}
C 41400 49900 1 0 0 9V-plus-1.sym
{
T 41400 49900 5 10 0 0 0 0 1
device=POWER
T 41700 49900 5 10 1 1 0 0 1
value=9V
T 41400 50300 5 10 1 1 0 0 1
refdes=Vcc
}
C 42900 49800 1 90 1 inductor-1.sym
{
T 42400 49600 5 10 0 0 270 2 1
device=INDUCTOR
T 42700 49100 5 10 1 1 180 2 1
refdes=L1
T 42200 49600 5 10 0 0 270 2 1
symversion=0.1
T 42900 49800 5 10 0 0 270 2 1
value=0.5H
}
C 45300 46900 1 180 1 pnp-2.sym
{
T 45900 46500 5 10 0 0 180 6 1
device=PNP_TRANSISTOR
T 45900 46400 5 10 1 1 180 6 1
refdes=Tp1
T 45300 46900 5 10 0 0 180 6 1
value=Vt=26mV,Is=336.7fA,Bf=180,Br=7.16
T 45900 46700 5 10 1 1 180 6 1
model-name=BC858A
}
C 42700 46300 1 0 0 opamp-1.sym
{
T 43400 47100 5 10 0 0 0 0 1
device=OPAMP
T 43400 46900 5 10 1 1 0 0 1
refdes=U1
T 43400 47700 5 10 0 0 0 0 1
symversion=0.1
T 42700 46300 5 10 0 1 0 0 1
value=Vcc=10,Vee=-10,A=1e5
}
