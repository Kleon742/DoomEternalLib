struct idAICondition_Shared_TargetOffensiveCapabilities : idAICondition
{
    // check for these capabilities in action target or enemy
    offensiveCapability_t require; // Offset: 0x18

    // check for these capabilities in action target or enemy, if empty, the everything is allowed
    offensiveCapability_t allow; // Offset: 0x1C

    // check for these capabilities in action target or enemy
    offensiveCapability_t exclude; // Offset: 0x20

    // check for these player weapons in action target or enemy
    playerWeaponType_t require_weapons; // Offset: 0x28

    // check for these player weapons in action target or enemy, if empty, the everything is allowed
    playerWeaponType_t allow_weapons; // Offset: 0x30

    // check for these player weapons in action target or enemy
    playerWeaponType_t exclude_weapons; // Offset: 0x38

    // specific to player -- if target is AI, this is mapped to capability flags, if empty, the everything is allowed
    idList < idDeclWeaponReticle::reticleStyle_t , TAG_IDLIST , false > allowedReticleStyles; // Offset: 0x40

    // specific to player -- if target is AI, this is mapped to capability flags
    idList < idDeclWeaponReticle::reticleStyle_t , TAG_IDLIST , false > excludeReticleStyles; // Offset: 0x58

}; // Size: 0x70
