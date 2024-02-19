struct idBotWeaponState
{
    struct BotWeaponRequest_t
    {
        // priority of this request
        botWeaponPriority_t weaponPriority; // Offset: 0x0

        // type of weapon we're requesting.
        idDeclWeapon::weaponCategory_t weaponCategory; // Offset: 0x4

        // useful for debugging - behavior that requested this weapon.
        idStr weaponUserName; // Offset: 0x8

        // fire mode of the weapon for this request.
        botWeaponFireMode_t weaponFireMode; // Offset: 0x38

        // if true, this request will only last for one bot update pass
        bool clearOnNextUpdate; // Offset: 0x3C

    }; // Size: 0x40

    struct BotWeaponHoldFireRequest_t
    {
        // useful for debugging - behavior that requested this hold fire.
        idStr weaponHoldFireUserName; // Offset: 0x0

    }; // Size: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > switchWeaponCooldown; // Offset: 0x0

    int currentWeaponRequestIndex; // Offset: 0x8

    // caches off a lot of commonly used weapon data/info.
    botWeaponInfo_t currentWeaponInfo; // Offset: 0xC

    idBot* owner; // Offset: 0x60

    // checks to see if the weapon is blocked from firing currently.
    idHavokQueryId weaponTraceClipQuery; // Offset: 0x68

    // used to handle ( fire, reload, etc ), the weapon currently in the bots hands.
    idBotWeaponHandler* weaponHandler; // Offset: 0x70

    // checks to see if the weapon is blocked from firing currently.
    idHavokQueryId weaponTraceHavokQuery; // Offset: 0x78

    // a behavior can request that the bot hold its fire
    idBotWeaponState::BotWeaponHoldFireRequest_t weaponHoldFireRequest; // Offset: 0x80

    idArray < idBotWeaponState::BotWeaponRequest_t , 2 > weaponRequests; // Offset: 0xB0

    bool weaponOverrideEnabled; // Offset: 0x130

}; // Size: 0x138
