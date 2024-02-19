struct idAlignedEntity : idAnimatedEntity
{
    enum ALIGNMODE : int
    {
        SET_POS_SET_AXIS = 0,
        ALIGN_NODE_POS_SET_AXIS = 1,
        ALIGN_NODE_POS_ALIGN_NODE_AXIS = 2
    };

    enum updateType_t : int
    {
        UPDATE_SYSTEM_THINK = 0,
        UPDATE_PLAYER_THINK = 1,
        UPDATE_EXTERNAL = 2
    };

    struct queuedAnim_t
    {
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animAlias; // Offset: 0x0

        bool loop; // Offset: 0x2

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x8

        float rateScale; // Offset: 0x10

        idBlendParms blendParms; // Offset: 0x18

    }; // Size: 0x40

    struct attachItem_t
    {
        // decl of the currently attached item
        idDeclInventory* itemDecl; // Offset: 0x0

        // item ptr if the attach item is also in the local inventory
        idInventoryItem* item; // Offset: 0x8

        // tracks the current attached item (for now, support only one item at a time)
        idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > attachmentHandle; // Offset: 0x10

        // automatically detach the attached item when the animation ends
        bool autoDetach; // Offset: 0x14

    }; // Size: 0x18

    struct loopingSound_t
    {
        idSoundEvent* sound; // Offset: 0x0

        // if set, then play as long as this is the current anim
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > aliasHandle; // Offset: 0x8

    }; // Size: 0x10

    struct animInfo_t
    {
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > curAliasHandle; // Offset: 0x0

        // duration in ms to play the anim, or -1 to ignore duration
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > animDuration; // Offset: 0x8

        // queued anims to play in order of addition to the queue
        idList < idAlignedEntity::queuedAnim_t , TAG_IDLIST , false > queuedAnims; // Offset: 0x10

        // a flag to signal to the animator to start blending out, or blend to the next anim
        bool startBlendOut; // Offset: 0x28

        // time this anim was started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x30

    }; // Size: 0x38

    idAlignedEntity::loopingSound_t loopingSound; // Offset: 0x1B48

    int leftHandJointModIndex; // Offset: 0x1B58

    int rightHandJointModIndex; // Offset: 0x1B5C

    // base animator
    idAnimator_Channel baseAnimator; // Offset: 0x1B60

    // synced animator
    idAnimator_Synced syncedAnimator; // Offset: 0x1C70

    // additive animator
    idAnimator_Channel additiveAnimator; // Offset: 0x1E20

    // additive synced animator
    idAnimator_Synced additiveSyncedAnimator; // Offset: 0x1F30

    // pausedAnimator
    idAnimator_Paused pausedAnimator; // Offset: 0x20E0

    // manager for anim web animator
    idAnimWebAlignedEntity animWebAnimator; // Offset: 0x2138

    // tracks whether animweb animator is animating or not
    bool animWebAnimatorIsAnimating; // Offset: 0x29C8

    bool checkCollisionOnCameraUpdate; // Offset: 0x29C9

    idVec3 cameraCollisionRevertingOrigin; // Offset: 0x29CC

    idAlignedEntity::animInfo_t baseAnimInfo; // Offset: 0x29D8

    idAlignedEntity::animInfo_t additiveAnimInfo; // Offset: 0x2A10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > minWaitTime; // Offset: 0x2A48

    // joint mod animator
    idAnimator_Paused jointModAnimator; // Offset: 0x2A50

    idHandle < unsigned short , invalidJointHandle_t , INVALID_JOINT_HANDLE > armLeftTargetJoint; // Offset: 0x2AA8

    idHandle < unsigned short , invalidJointHandle_t , INVALID_JOINT_HANDLE > armRightTargetJoint; // Offset: 0x2AAA

    int armLeftTargetJointModIndex; // Offset: 0x2AAC

    int armRightTargetJointModIndex; // Offset: 0x2AB0

    // force the entity to draw, instead of hiding it when it's not animating
    bool drawWhenNotAnimating; // Offset: 0x2AB4

    // name of align node
    idAtomicString alignNodeName; // Offset: 0x2AB8

    // animweb decl for web animator
    idDeclAnimWeb* animWebDecl; // Offset: 0x2AC0

    // animweb default path
    idAnimWebPath animWebDefaultPath; // Offset: 0x2AC8

    idAlignedEntity::attachItem_t leftItem; // Offset: 0x2AF8

    idAlignedEntity::attachItem_t rightItem; // Offset: 0x2B10

    idAttachmentCollection attachmentCollection; // Offset: 0x2B28

    idManagedClassPtr < idAnimatedEntity > owner; // Offset: 0x2B48

    // TODO: The goal is to get rid of these next 3 member variables - they're just here temporarily while we clean up the interface so we can do everything we need via idAnimatedEntity.
    idActor* actorOwner; // Offset: 0x2B68

    idPlayer* playerOwner; // Offset: 0x2B70

    idDemonPlayer* demonOwner; // Offset: 0x2B78

    // allows this object to have its updates run manually from idPlayer instead of from the system Think, or from an external caller
    idAlignedEntity::updateType_t updateType; // Offset: 0x2B80

    // tracks framenumbers of anim blends to avoid blending twice in the same frame
    int lastAnimBlendFrame; // Offset: 0x2B84

    // Track when an anim is active so we only call AnimComplete event once
    bool animWasActiveLastFrame; // Offset: 0x2B88

    bool onBindUseDeferredPositionSave; // Offset: 0x2B89

    // tracks the previous setting for using deferred position
    bool useDeferredPositionSave; // Offset: 0x2B8A

    int forceUseDeferredPosition; // Offset: 0x2B8C

    // stores the handle of the 'attachCameraOnce' animation
    idMD6Anim* attachCameraOnceAnim; // Offset: 0x2B90

    // everything the actor is holding
    idInventoryCollection inventory; // Offset: 0x2B98

    // if true this entity is actively participating in a sync animation.
    bool activeSync; // Offset: 0x3100

    int thirdPersonFlags; // Offset: 0x3104

    // enable / disable this entity
    bool enabled; // Offset: 0x3108

    bool debugTraceAnims; // Offset: 0x3109

    // 0 = default, 1 = force show, 2 = force hide
    int debugForceShow; // Offset: 0x310C

    // trace positions during animation
    int debugTracePos; // Offset: 0x3110

    // trace angles during animation
    int debugTraceAng; // Offset: 0x3114

    // trace deltas during animation
    int debugTraceAnimDeltas; // Offset: 0x3118

    // the sync entity we are sycning with...
    idManagedClassPtr < idSyncEntity > syncEnt; // Offset: 0x3120

    // list of animated entity attachments
    idList < idEntityAttachmentDef , TAG_IDLIST , false > animatedEntityAttachments; // Offset: 0x3140

    // a push translation that the player owner received {{ units = m }}
    idVec3 externalTranslation; // Offset: 0x3158

    // a push rotation that the player owner received
    idRotation externalRotation; // Offset: 0x3164

    idAnimStack weaponAnimStack; // Offset: 0x31A8

}; // Size: 0x3DE8
