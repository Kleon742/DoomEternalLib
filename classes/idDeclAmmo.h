struct idDeclAmmo : idDeclInventory
{
    enum zoomModeOverride_t : int
    {
        ZOOM_OVERRIDE_NONE = 0,
        ZOOM_OVERRIDE_ZOOM_NONE = 1,
        ZOOM_OVERRIDE_ZOOM_WEAPON = 2,
        ZOOM_OVERRIDE_ZOOM_WEAPON_NO_HANDANIM = 3
    };

    enum lockableTypes_t : int
    {
        ID_BREAKABLE = 0,
        ID_AI2 = 1,
        ID_ENTITY = 2
    };

    enum ammoType_t : int
    {
        AMMO_NONE = -1,
        AMMO_BULLET = 0,
        AMMO_SHELL = 1,
        AMMO_CELL = 2,
        AMMO_ROCKET = 3,
        AMMO_FUEL = 4,
        AMMO_BFG = 5,
        AMMO_NUM = 6
    };

    // type of projectile this ammo fires
    idDeclProjectile* projectileDecl; // Offset: 0x3F8

    // specifies the sharedAmmo pool for this ammo type (allows weapons to convert ammo between types within a pool)
    idDeclAmmo* sharedAmmoPoolDecl; // Offset: 0x400

    // lets a decl self-identity
    bool isSharedAmmoPoolDecl; // Offset: 0x408

    // Type of ammo for the shared Ammo Pool
    idDeclAmmo::ammoType_t ammoType; // Offset: 0x40C

    // weapon decl name to which the ammo belongs, stored as str to prohibit recursive load for savegames
    idStr weapon; // Offset: 0x410

    // slot for impulse binding
    int ammoSlot; // Offset: 0x440

    // text to append to anim node for shooting this ammo type
    idStr shootAnimPostfix; // Offset: 0x448

    // text to append to anim node for reloading this ammo type
    idStr reloadAnimPostfix; // Offset: 0x478

    // the old ammo on an ammo change prefixes this for the node name.
    idStr ammoChangePrefix; // Offset: 0x4A8

    // if not empty this is the node that we go to for an animchange to this ammo
    idStr ammoChangeAnimOverride; // Offset: 0x4D8

    // if not empty this changes the AI animweb prefix when this ammo type is loaded
    idStr weaponPrefixOverride; // Offset: 0x508

    // does this ammo override the zoom properties of the weapon
    idDeclAmmo::zoomModeOverride_t zoomOverride; // Offset: 0x538

    // if ammo in magazine gets below this point we play a warning sound
    int lowAmmoWarningCount; // Offset: 0x53C

    // sound to play if we're low on ammo
    idSoundEvent* lowAmmoWarningSound; // Offset: 0x540

    // as the player fires ammo from this value down to zero, start playing an audio effect with every shot, slightly louder each time.
    int veryLowAmmoWarningCount; // Offset: 0x548

    // sound to play if we're very low on ammo
    idSoundEvent* veryLowAmmoWarningSound; // Offset: 0x550

    // when we are validating ammo on the server, this is the multiplier on the max ammo which to allow the server to exceed. How much leeway to give
    float ammoValidateMultiplier; // Offset: 0x558

    // if true, ammo count is hidden on the HUD
    bool hideHUDAmmoCount; // Offset: 0x55C

    // if the ammo is chain fire type.
    bool chainFire; // Offset: 0x55D

    // if the ammo is charge fire type.
    bool chargeFire; // Offset: 0x55E

    // how long it takes the weapon to full charge in MS
    int chargeTime; // Offset: 0x560

    // the number of charges this weapon has at a max charge
    int numCharges; // Offset: 0x564

    // what this ammo can lock onto
    contentsFlags_t lockableMasks; // Offset: 0x568

    // what this ammo can lock onto
    idList < idDeclAmmo::lockableTypes_t , TAG_IDLIST , false > lockableTypes; // Offset: 0x570

    // the angle from forward the entity must be to be lockable;
    float lockableAngle; // Offset: 0x588

    // the angle in yaw it will unlock while zoomed in
    float unlockZoomedYaw; // Offset: 0x58C

    // the angle in pitch it will unlock while zoomed in
    float unlockZoomedPitch; // Offset: 0x590

    // if true will fire from player to target directly
    bool fireDirectlyAtLocable; // Offset: 0x594

}; // Size: 0x598
