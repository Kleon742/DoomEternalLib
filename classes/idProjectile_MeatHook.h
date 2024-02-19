struct idProjectile_MeatHook : idProjectile_Rocket
{
    struct seekPoint_t
    {
        // position to seek to
        idVec3 pos; // Offset: 0x0

        // total distance (includes distances from previous points)
        float totalDist; // Offset: 0xC

    }; // Size: 0x10

    bool ignoreAfterInitialImpact; // Offset: 0x3038

    // fractional value ( 0.0 - 1.0 ) that determines when to curve ( 0.0 == player, 1.0 == target, 0.5 == halfway between player and target )
    float curvePlaneFrac; // Offset: 0x303C

    // perk associated with the increased health stolen upgrade
    idDeclPerk* increasedDamageUpgrade; // Offset: 0x3040

    // perk associated with the larger radius upgrade
    idDeclPerk* dualStrikeUpgrade; // Offset: 0x3048

    // damage decl to apply to hooked enemies
    idDeclDamage* meatHookFlameDamage; // Offset: 0x3050

    idManagedClassPtr < idEntity > target; // Offset: 0x3058

    idManagedClassPtr < idAnimatedEntity > attachedTo; // Offset: 0x3078

    idVec3 CSP_startPos; // Offset: 0x3098

    idVec3 CSP_endPos; // Offset: 0x30A4

    idDoubleBarrelShotgun* shotgunWeapon; // Offset: 0x30B0

    idVec3 prevVelocity; // Offset: 0x30B8

    idList < idProjectile_MeatHook::seekPoint_t , TAG_IDLIST , false > seekPoints; // Offset: 0x30C8

    int currentSeekPoint; // Offset: 0x30E0

    idPlane passedPlane; // Offset: 0x30E4

    planeSide_t planeSide; // Offset: 0x30F4

    // FIXME: hack because Attachment binding is broken.
    idIndex < short , invalidJointIndex_t , - 1 > bindJointIndex; // Offset: 0x30F8

}; // Size: 0x3100
