struct idPipMeteringComponent
{
    // ============================================ member variables ============================================  max pips is the max number of "slots" the entire health bar can have, minimum of 1 is always needed
    int maxNumPips; // Offset: 0x8

    // number of current usable pips
    float invMaxNumPips; // Offset: 0xC

    // the number of shots per pip intnumShotsPerPip; inverse of the max Health decl
    float invMaxHealth; // Offset: 0x10

    // meter represented by simple health
    idSimpleHealth meter; // Offset: 0x18

}; // Size: 0x148
