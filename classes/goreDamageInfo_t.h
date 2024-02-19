struct goreDamageInfo_t
{
    // wound hit group associated with the wound
    idAtomicString woundHitGroup; // Offset: 0x0

    // joint group for distance calculation specific to segments with look ahead
    idAtomicString woundHitGroup_Distance; // Offset: 0x8

    // range of min to max damager requirement for this wound to activate
    idRange < float > damageRange; // Offset: 0x10

    // the damage group's total damage required to activate this gore (specified as a fraction of total health)
    float relativeDamageRequiredToGore; // Offset: 0x18

    // the damage group's damage over a frame required to activate this gore
    float frameDamageRequiredToGore; // Offset: 0x1C

    // which direction the damage can be coming from.
    idList < damageDirection_t , TAG_IDLIST , false > allowedDirections; // Offset: 0x20

    // maximum distance the attacker can be from the entity. ( -1.0f = No Max ) {{ units = m }}
    float maxDistance; // Offset: 0x38

    // how much sustained DPS is required for this wound. ( 0 = none. )
    float sdpsRequired; // Offset: 0x3C

    // don't retrigger this wound within X seconds of another wound on any of the specified damage groups
    idRange < float > repeatDelayInSeconds; // Offset: 0x40

    // Weapon damage required for this wound to be considered
    idPlayerWeaponDamageType_t requiredWeaponType; // Offset: 0x48

    // Does the damage validation come from armor.
    bool armorBasedWound; // Offset: 0x4C

    // Required memory key to enable the wound
    idList < idAtomicString , TAG_IDLIST , false > requiredAIMemoryKeys; // Offset: 0x50

}; // Size: 0x68
