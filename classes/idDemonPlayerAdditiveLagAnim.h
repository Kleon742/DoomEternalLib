struct idDemonPlayerAdditiveLagAnim
{
    // data for additive lag animation
    idHandsWeaponLagData_t handsLagData; // Offset: 0x0

    // additive lag - yaw
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveLagYaw; // Offset: 0x34

    // additive lag - pitch
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveLagPitch; // Offset: 0x36

    // additive lag - forward/back
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveLagForwardBack; // Offset: 0x38

    // additive lag - strafe
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveLagStrafe; // Offset: 0x3A

    // additive lag scale for slowing or speeding up the lag response
    float additiveLagScale; // Offset: 0x3C

    // additive lag alpha
    float additiveLagAlpha; // Offset: 0x40

    // for applying additive yaw lag to the hands and weapon
    idAnimator_Paused additiveLagYawAnimator; // Offset: 0x48

    // for applying additive pitch lag to the hands and weapon
    idAnimator_Paused additiveLagPitchAnimator; // Offset: 0xA0

    // for applying additive forward/back lag to the hands and weapon
    idAnimator_Paused additiveLagForwardBackAnimator; // Offset: 0xF8

    // for applying additive strafe lag to the hands and weapon
    idAnimator_Paused additiveLagStrafeAnimator; // Offset: 0x150

    // lag spring for yaw anim
    idSpring < idVec1 > lagYawSpring; // Offset: 0x1A8

    // lag spring for pitch anim
    idSpring < idVec1 > lagPitchSpring; // Offset: 0x1D8

    // lag spring for forward anim
    idSpring < idVec1 > lagForwardBackSpring; // Offset: 0x208

    // lag spring for strafe anim
    idSpring < idVec1 > lagStrafeSpring; // Offset: 0x238

}; // Size: 0x268
