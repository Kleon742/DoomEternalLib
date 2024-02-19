struct idDeclWeapon_SalvoCannonData : idDeclWeapon_Data
{
    // the default idle animation
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonIdleAnim; // Offset: 0x90

    // animation for seeking a target
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonTargetingIdleAnim; // Offset: 0x92

    // animation to play when a target is locked
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > thirdPersonLockedIdleAnim; // Offset: 0x94

}; // Size: 0x98
