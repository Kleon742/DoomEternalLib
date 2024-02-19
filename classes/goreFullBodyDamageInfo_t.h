struct goreFullBodyDamageInfo_t
{
    // type of wound damage required to cause this
    woundType_t woundType; // Offset: 0x0

    // damage groups that spawn this gib
    idList < idAtomicString , TAG_IDLIST , false > damageGroups; // Offset: 0x8

    // damage range for this full body to explode
    idRange < float > damageRange; // Offset: 0x20

    // which direction the damage can be coming from.
    idList < damageDirection_t , TAG_IDLIST , false > allowedDirections; // Offset: 0x28

}; // Size: 0x40
