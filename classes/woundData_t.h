struct woundData_t
{
    // Is this Wound Active?
    bool isActive; // Offset: 0x0

    // Is this wound pending?
    bool isPending; // Offset: 0x1

    // How much damage this wound has taken.
    float damageTaken; // Offset: 0x4

    // How much damage was taken last frame.
    float lastFrameDamageTaken; // Offset: 0x8

    // last Type of weapon that did damage.
    idPlayerWeaponDamageType_t lastWeaponType; // Offset: 0xC

    // Gore behavior used last time we were hit.
    idDeclGoreBehavior* lastFrameGoreBehavior; // Offset: 0x10

    // Dont accept anymore damage from this behavior.
    idDeclGoreBehavior* excludeGoreBehavior; // Offset: 0x18

    // the wound decl this wound is activating
    idDeclGoreWound* woundDecl; // Offset: 0x20

    // Damage Decl used to create Wound.
    idDeclDamage* damageDecl; // Offset: 0x28

    // Impulse from damage
    idVec3 impulse; // Offset: 0x30

    // point of impact.
    idVec3 point; // Offset: 0x3C

    // how much did we get hit for. {{ units = kg * m / s }}
    float magnitude; // Offset: 0x48

    // number of frames this gib has been around
    int frameCountSinceSpawn; // Offset: 0x4C

    // next time we need to spray some blood.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextSprayTime; // Offset: 0x50

    // When did we activate this Wound.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > woundStartTime; // Offset: 0x58

    // cached index to the joint that we want to zero out
    idIndex < short , invalidJointIndex_t , - 1 > zeroOutJointIndex; // Offset: 0x60

    // Entity for the cloth.
    idManagedClassPtr < idAnimatedEntity > clothEntity; // Offset: 0x68

    // all the incomming damage this wound has taken.
    idList < woundDebugDamage_t , TAG_IDLIST , false > debugDamage; // Offset: 0x88

    // Wound events.
    idList < idStr , TAG_IDLIST , false > debugEvents; // Offset: 0xA0

    // for testing collision cloth against ground
    idHavokQueryId clothClipQuery; // Offset: 0xB8

    // Cosmetic gore hash
    idAtomicString cosmeticGoreType; // Offset: 0xC0

    bool preProcessed; // Offset: 0xC8

    // was this wound created by fullbodygib?
    bool createdFromFBG; // Offset: 0xC9

    bool allowSerialize; // Offset: 0xCA

}; // Size: 0xD0
