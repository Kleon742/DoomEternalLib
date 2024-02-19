struct idParticleParm
{
    // value 0
    float val0; // Offset: 0x0

    // value 1
    float val1; // Offset: 0x4

    // in the [0.0,1.0] range {{ units = none }}
    float variance; // Offset: 0x8

    // index for a curve table
    short tableIdx; // Offset: 0xC

    // determines how parameter is specified in the editor
    particleEditCalcType_t editCalcType; // Offset: 0x10

    // determines the type of calculation used for the parm
    particleCalcType_t calcType; // Offset: 0x14

}; // Size: 0x18
