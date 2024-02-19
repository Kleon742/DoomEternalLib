struct idDeclEntityDamage : idDeclTypeInfo
{
    // names of joint groups, their associated damage scale, and armor level
    idList < idDamageGroup , TAG_IDLIST , false > damageGroups; // Offset: 0x88

    // hit test groups define what other groups they refer to
    idList < hitTestNameMapping_t , TAG_IDLIST , false > hitTestGroupMappings; // Offset: 0xA0

}; // Size: 0xB8
