struct armorHPFXConditions_t
{
    // checkpoint of healthpoint to trigger FX
    float hp; // Offset: 0x0

    // startFX on reaching this HP
    fxCondition_t startFX; // Offset: 0x4

    // stopFX on reaching this HP
    fxCondition_t stopFX; // Offset: 0x8

}; // Size: 0xC
