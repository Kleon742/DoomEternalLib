struct idInventoryItem : idEventReceiver
{
    // my decl
    idDeclInventory* decl; // Offset: 0x38

    // current number of items in stack
    int count; // Offset: 0x40

    // true if item is lootable
    bool lootable; // Offset: 0x44

    // if true the item is gated and wont save until we ca
    bool saveDataGated; // Offset: 0x45

    // true if the item is already dropped (prevents dropping an item multiple times)
    bool alreadyDropped; // Offset: 0x46

    bool mapUseAllowed; // Offset: 0x47

    // user assigned quick slot
    int quickSlot; // Offset: 0x48

    // do something when this item is unequipped
    unequipAction_t unequipAction; // Offset: 0x4C

    // the last time this was used
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUseTime; // Offset: 0x50

    // the next time this item can be used.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > coolDownTime; // Offset: 0x58

    // value for tracking when to play the recharge sound
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timePlayedLastRechargeSound; // Offset: 0x60

    // time the item was equipped
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > equippedTime; // Offset: 0x68

    // time the item was unequipped
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > unequippedTime; // Offset: 0x70

    // total time item has been equipped (not including time currently equipped)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > prevEquipTime; // Offset: 0x78

    // holds pre-loaded skin
    idDeclSkins* skinPreload; // Offset: 0x80

    int modelCustomSkinIndex; // Offset: 0x88

    idMaterial2* customMaterial; // Offset: 0x90

    // used for activating cosmetic meshes
    idList < cosmeticMesh_t , TAG_IDLIST , false >* customMeshList; // Offset: 0x98

    // used for activating cosmetic materials
    idList < cosmeticMaterial_t , TAG_IDLIST , false >* customMaterialList; // Offset: 0xA0

    idManagedClassPtr < idEntity > owner; // Offset: 0xA8

    // the actual number of perks per group to use, this number can change depending on mods
    idList < perkGroupUseInfo_t , TAG_IDLIST , false > perkGroupUseInfos; // Offset: 0xC8

    // A list of mods that can be applied to this weapon.
    idList < const idDeclUnlock * , TAG_IDLIST , false > unlockModlist; // Offset: 0xE0

    float currentFuel; // Offset: 0xF8

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x100

    bool fxHandleInit; // Offset: 0x108

}; // Size: 0x110
