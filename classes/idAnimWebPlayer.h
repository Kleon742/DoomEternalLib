struct idAnimWebPlayer : idAnimator_GameAnimWeb
{
    enum animDir_t : int
    {
        DIR_FWD = 0,
        DIR_BACK = 1,
        DIR_LEFT = 2,
        DIR_RIGHT = 3,
        DIR_MAX = 4
    };

    struct animSyncMarkers_t
    {
        idMD6Anim* anim; // Offset: 0x0

        idList < idAnimStack::syncFrame_t , TAG_IDLIST , false > frameMarkers; // Offset: 0x8

    }; // Size: 0x20

    struct declSyncMarkers_t
    {
        idDeclMD6* declMD6; // Offset: 0x0

        idList < idAnimWebPlayer::animSyncMarkers_t , TAG_IDLIST , false > anims; // Offset: 0x8

    }; // Size: 0x20

    struct stopTransitionInfo_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTime; // Offset: 0x0

        float lastValue; // Offset: 0x8

        float alpha; // Offset: 0xC

        float rate; // Offset: 0x10

        float alphaScale; // Offset: 0x14

    }; // Size: 0x18

    idList < idAnimWebPlayer::declSyncMarkers_t , TAG_IDLIST , false > animSyncMarkers; // Offset: 0x888

    float bodyMoveAngle; // Offset: 0x8A0

    float woundedPercent; // Offset: 0x8A4

    float genericAnimScale; // Offset: 0x8A8

    float blendBack; // Offset: 0x8AC

    float blendRight; // Offset: 0x8B0

    float blendAngle; // Offset: 0x8B4

    float blendRotatePlayer; // Offset: 0x8B8

    float walkRate; // Offset: 0x8BC

    float runRate; // Offset: 0x8C0

    float sprintRate; // Offset: 0x8C4

    float deathAnimIndex; // Offset: 0x8C8

    float ledgeGrabIndex; // Offset: 0x8CC

    float dashAnimIndex; // Offset: 0x8D0

    // alpha between walking and running
    float walkRunAlpha; // Offset: 0x8D4

    // alpha between running and sprinting
    float runSprintAlpha; // Offset: 0x8D8

    // defaults to 1.0f, can be overridden
    float ledgeGrabRateScale; // Offset: 0x8DC

    float interactAnimIndex; // Offset: 0x8E0

    float interactOutAnimIndex; // Offset: 0x8E4

    // alpha for stopping transition animation
    float stopTransAlpha; // Offset: 0x8E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRunTime; // Offset: 0x8F0

    float lastRunVal; // Offset: 0x8F8

    float adsPct; // Offset: 0x8FC

    float adsPctTarget; // Offset: 0x900

    float weaponCharge; // Offset: 0x904

    float firePoseAlpha; // Offset: 0x908

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFireTime; // Offset: 0x910

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastFootstepTime; // Offset: 0x918

    float runJumpAlpha; // Offset: 0x920

    bool doRunJump; // Offset: 0x924

    idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > adsInterpolate; // Offset: 0x928

    idIndex < short , idAnimWeb::invalidNodeIndex_t , - 1 > frameCacheAnimNodeIndex; // Offset: 0x958

    idThirdPersonWalkAnimState_t thirdPersonAnimData; // Offset: 0x960

    idAnimatedEntity* owner; // Offset: 0x988

    animWebPlayerData_t curFrameAnimData; // Offset: 0x990

    idAnimWebPlayer::stopTransitionInfo_t stopTrans[4]; // Offset: 0xA90

    idAIOrientation turnOrientation; // Offset: 0xAF0

    int numFramesWithoutMovement; // Offset: 0xB3C

}; // Size: 0xB40
