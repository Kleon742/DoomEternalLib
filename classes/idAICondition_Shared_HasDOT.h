struct idAICondition_Shared_HasDOT : idAICondition
{
    // if empty, check for any DOT type
    idList < idPlayerWeaponDamageType_t , TAG_IDLIST , false > dotTypes; // Offset: 0x18

    // if true condition passes ONLY if a dot type is active that is NOT in dotTypes, if false condition passes ONLY if one of the dotTypes is active
    bool dotTypesAreIgnored; // Offset: 0x30

}; // Size: 0x38
