struct idDamageGroupData
{
    // current health of damage group
    float health; // Offset: 0x0

    // the last hit direction
    idVec3 lastHitDirection; // Offset: 0x4

    // unscaled frame damage
    float frameDamage; // Offset: 0x10

    // scaled frame damage.
    float scaledFrameDamage; // Offset: 0x14

    // current armor of damage group
    float armor; // Offset: 0x18

    // armor HP FX check point
    float armorHPFXCheckPoint; // Offset: 0x1C

    // current Gore Level
    goreLevel_t currentGoreLevel; // Offset: 0x20

}; // Size: 0x24
