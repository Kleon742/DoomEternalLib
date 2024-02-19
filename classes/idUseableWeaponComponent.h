struct idUseableWeaponComponent : idUseableItemComponent
{
    // Weapons when added to inventory auto-magically start with maximum ammo.
    bool persistentAmmoCount; // Offset: 0x190

    // When dropping the weapon, this determines its loot style
    lootStyle_t dropLootStyle; // Offset: 0x194

}; // Size: 0x198
