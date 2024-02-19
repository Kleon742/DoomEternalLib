struct idHUD_WeaponInfo : idHUDElement
{
    enum updateFlags_t : int
    {
        UPDATE_FLAGS_EQUIPMENT = 1,
        UPDATE_FLAGS_FLAME_BELCH = 2,
        UPDATE_FLAGS_CHAINSAW = 4,
        UPDATE_FLAGS_CRUCIBLE = 8,
        UPDATE_FLAGS_BFG = 16,
        UPDATE_FLAGS_HAMMER = 32
    };

    int updateFlags; // Offset: 0xF8

    // Weapon
    idDeclWeapon* currentWeapon; // Offset: 0x100

    idList < idHUDEvent_PlayerWeaponChange::idPlayerWeaponData_t::weaponModInfo_t , TAG_IDLIST , false > modList; // Offset: 0x108

    int activeModIndex; // Offset: 0x120

    int nextActiveModIndex; // Offset: 0x124

    // Ammo
    int currentAmmoCount; // Offset: 0x128

    int maxAmmoCount; // Offset: 0x12C

    int ammoPerShot; // Offset: 0x130

    bool infinite; // Offset: 0x134

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > infiniteStart; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > infiniteTimer; // Offset: 0x140

    bool infiniteBfg; // Offset: 0x148

    bool hasAmmoBoost; // Offset: 0x149

    bool isAmmoPlaying; // Offset: 0x14A

    bool isAmmoShifting; // Offset: 0x14B

    bool usesHealthAsAmmo; // Offset: 0x14C

    // BFG
    bool bfgEquipped; // Offset: 0x14D

    bool canSwapBfg; // Offset: 0x14E

    bool bfgShown; // Offset: 0x14F

    int bfgCharge; // Offset: 0x150

    int bfgMaxCharges; // Offset: 0x154

    // Chainsaw
    bool chainsawEquipped; // Offset: 0x158

    int chainsawAmmo; // Offset: 0x15C

    int chainsawMaxAmmo; // Offset: 0x160

    float chainsawRecharge; // Offset: 0x164

    // Crucible
    bool crucibleEquipped; // Offset: 0x168

    bool crucibleShown; // Offset: 0x169

    int crucibleCharge; // Offset: 0x16C

    int crucibleMaxCharges; // Offset: 0x170

    // Equipment
    idDeclInventory* equipmentItem; // Offset: 0x178

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentCooldownStartTime; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > equipmentCooldownEndTime; // Offset: 0x188

    int equipmentNumUses; // Offset: 0x190

    int equipmentMaxUses; // Offset: 0x194

    bool equipmentChanged; // Offset: 0x198

    // Flame Belch
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > flameBelchCooldownStartTime; // Offset: 0x1A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > flameBelchCooldownEndTime; // Offset: 0x1A8

    int flameBelchNumUses; // Offset: 0x1B0

    int flameBelchMaxUses; // Offset: 0x1B4

    bool flameBelchPulse; // Offset: 0x1B8

    // Hammer
    bool hammerShown; // Offset: 0x1B9

    float hammerRecharge; // Offset: 0x1BC

    float hammerSupercharge; // Offset: 0x1C0

    bool hammerPulse; // Offset: 0x1C4

    // Widgets
    idSWFWidget_EquipmentItem* modWidget; // Offset: 0x1C8

    idSWFWidget_EquipmentItem* equipmentWidget; // Offset: 0x1D0

    idSWFWidget_EquipmentItem* flameBelchWidget; // Offset: 0x1D8

    idSWFWidget_PipWeapon* chainsawWidget; // Offset: 0x1E0

    idSWFWidget_PipWeapon* crucibleWidget; // Offset: 0x1E8

    idSWFWidget_AmmoWeapon* bfgWidget; // Offset: 0x1F0

    idSWFWidget_SuperchargeWeapon* hammerWidget; // Offset: 0x1F8

    idSWFWidget_AmmoPickups* ammoPickups; // Offset: 0x200

    bool previousWeaponInfoVisiblity; // Offset: 0x208

    bool previousEquipmentInfoVisiblity; // Offset: 0x209

    bool previousShowTooltips; // Offset: 0x20A

    bool weaponHasMod; // Offset: 0x20B

    bool weaponHasMultipleMods; // Offset: 0x20C

    bool playingLowAmmoAnim; // Offset: 0x20D

    swfPlatform_t swfPlatform; // Offset: 0x210

    // Cached Sprites
    idSWFCachedSpriteInstance mainSpr; // Offset: 0x218

    idSWFCachedSpriteInstance equippedWeaponSpr; // Offset: 0x248

    idSWFCachedSpriteInstance sentinelArmorSpr; // Offset: 0x278

    bool sentinelArmorActive; // Offset: 0x2A8

    bool prowlerCurseActive; // Offset: 0x2A9

}; // Size: 0x2B0
