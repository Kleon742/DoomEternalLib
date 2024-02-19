struct idClientWeaponFire
{
    // Who are we owned by?
    idActor* owner; // Offset: 0x0

    // Do we record/send non-right weapon events?
    bool sendNonRightWeapon; // Offset: 0x8

    // The fire count of the primary fire mode.
    int fireCountPrimary; // Offset: 0xC

    // The fire count of the secondary fire mode.
    int fireCountSecondary; // Offset: 0x10

    // how much ammo for the weapon
    int ammoCount; // Offset: 0x14

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fireTime; // Offset: 0x18

    float addSpread; // Offset: 0x20

    float firePos[3]; // Offset: 0x24

    short fireAngles[2]; // Offset: 0x30

    short fireSeed; // Offset: 0x34

    // boolisRightWeapon; whether these values are for the right or left weapon
    equipSlot_t equipSlot; // Offset: 0x38

    int lastFrameCountPrimary; // Offset: 0x3C

    int lastFrameCountSecondary; // Offset: 0x40

    float lastWeaponChargePercent; // Offset: 0x44

    // Ignore fires until server time has reached this time (for certain control switches etc)
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ignoreFireServerTime; // Offset: 0x48

    idDeclInventory* deferredSwapItem; // Offset: 0x50

    idDeclAmmo* deferredSwapAmmo; // Offset: 0x58

    int deferredSwapCounter; // Offset: 0x60

}; // Size: 0x68
