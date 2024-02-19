struct idAFEntity_Corpse : idAnimatedEntity
{
    enum corpseState_t : int
    {
        CORPSESTATE_NORMAL = 0,
        CORPSESTATE_FADING = 1,
        CORPSESTATE_PENDING_REMOVAL = 2
    };

    struct bindJointToEnt_t
    {
        // joint name to be bound
        idAtomicString jointName; // Offset: 0x0

        // entity to bind to
        idManagedClassPtr < idEntity > bindTo; // Offset: 0x8

    }; // Size: 0x28

    // articulated figure properties
    idAnimator_AF afProperties; // Offset: 0x1B48

    // corpse animation reference
    idMD6AnimRef animRef; // Offset: 0x2010

    // animation to play
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > idleAnimHandle; // Offset: 0x2018

    // gore component properties
    idGoreComponent goreComponent; // Offset: 0x2020

    // entity damage component properties
    idEntityDamageComponent entityDamageComponent; // Offset: 0x2F68

    // list of gored pieces on the corpse
    idList < idAtomicString , TAG_IDLIST , false > goredPieces; // Offset: 0x3090

    // inherit the animation velocity
    bool inheritAnimationVelocity; // Offset: 0x30A8

    // automatically rag doll on spawn
    bool autoRagDoll; // Offset: 0x30A9

    // never rag doll
    bool noRagdoll; // Offset: 0x30AA

    // fade the corpse after determined amount(ms), -1 indicates never fade
    milliToGameTime_t fadeCorpseAfterMS; // Offset: 0x30B0

    // fade the corpse for determined amount(ms), removing when fade completes
    milliToGameTime_t fadeCorpseDurationMS; // Offset: 0x30C0

    // if disabled, the corpse is only removed when out of view
    bool removeAllowedInView; // Offset: 0x30D0

    // how long to run physics based on damage
    milliToGameTime_t physicsAwakenedMS; // Offset: 0x30D8

    // the amount of time allowed to run physics to settle
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > physicsDuration; // Offset: 0x30E8

    // When physics will be forced to rest
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > physicsEndTime; // Offset: 0x30F0

    // whether the corpse is fading or pending removal
    idAFEntity_Corpse::corpseState_t corpseState; // Offset: 0x30F8

    idList < const idDeclGoreWound * , TAG_IDLIST , false > cloneGoreWounds; // Offset: 0x3100

    // list of joint binds
    idList < idAFEntity_Corpse::bindJointToEnt_t , TAG_IDLIST , false > bindList; // Offset: 0x3118

    // channel animator for playing MD6 animations
    idAnimator_Channel channelAnimator; // Offset: 0x3130

    // the frame at which to start the animation
    int startFrame; // Offset: 0x3240

    unsigned char goreInitializedCounter; // Offset: 0x3244

    bool isPlayerCorpse; // Offset: 0x3245

    // whether physics was explicitly disabled
    bool disabledPhysics; // Offset: 0x3246

    idTouchComponent* touchComp; // Offset: 0x3248

}; // Size: 0x3250
