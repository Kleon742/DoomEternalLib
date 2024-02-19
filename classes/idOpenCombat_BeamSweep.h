struct idOpenCombat_BeamSweep : idAIState
{
    // inventory index of weapon to switch to
    int weaponSlot; // Offset: 0x130

    // optional animweb node to use with this attack
    idAnimWebPath_Atomic viaNode; // Offset: 0x138

    // if true, don't reset melee index scalar
    bool combo; // Offset: 0x178

    idInventoryItem* oldWeapon; // Offset: 0x180

}; // Size: 0x188
