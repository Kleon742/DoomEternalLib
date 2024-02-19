struct idAICondition_Shared_IsSlayerWeaponLockedOnToMe : idAICondition
{
    // Optional filter
    idList < idDeclWeaponReticle::reticleStyle_t , TAG_IDLIST , false > weaponFilter; // Offset: 0x18

    // if set to true, it will exclude wepons listed in weaponFilter
    bool excludeWeaponFilter; // Offset: 0x30

}; // Size: 0x38
