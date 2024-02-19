struct idOpenCombat_PrecisionAim : idAIState
{
    // how much recoil to apply, zero being none and 1 being full
    float recoilStrength; // Offset: 0x130

    // inventory index for weapon to switch to (-1 to keep current weapon equipped)
    int weaponInvIndex; // Offset: 0x134

    // firemode to be used for precision aim
    aiFireMode_t fireMode; // Offset: 0x138

    // if non-empty, set tracking parms for AIFOCI_AIM using this name for lookup
    idAtomicString aimTrackingParmsName; // Offset: 0x140

    // list of animation states we can pick from for the aim cycle
    idList < idAnimWebPath_Atomic , TAG_IDLIST , false > aimCycleAnims; // Offset: 0x148

    // idInventoryItem * oldWeapon;
    int oldWeaponIndex; // Offset: 0x160

}; // Size: 0x168
