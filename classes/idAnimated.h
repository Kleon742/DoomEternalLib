struct idAnimated : idAnimatedEntity
{
    enum customSkinType_t : int
    {
        CUSTOM_SKIN_NONE = 0,
        CUSTOM_SKIN_CHARACTER = 1,
        CUSTOM_SKIN_WEAPON = 2
    };

    struct anim_t
    {
        // animationalias
        idMD6Alias* animationAlias; // Offset: 0x0

        // animation to play
        idAnimAliasRef animation; // Offset: 0x8

        // number of frames to blend in
        unsigned short blendDuration; // Offset: 0x38

        // true to cycle the animation
        bool cycle; // Offset: 0x3A

        // handle of the animation
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animationHandle; // Offset: 0x3C

    }; // Size: 0x40

    struct attachment_t
    {
        // tag to attach to
        idStr tag; // Offset: 0x0

        // entity def this attachment will spawn
        idDeclEntityDef* entityDef; // Offset: 0x30

        // name of entity to attach (if entityAttachment is also set, then
        idStr entityName; // Offset: 0x38

        // animated model this attachment will spawn
        idDeclMD6* md6; // Offset: 0x68

        // static model this attachment will spawn
        idStr lwoName; // Offset: 0x70

        // if true and this is spawned from an entityDef it will copy the targets from the idAnimated
        bool copyTargetsFromAnimated; // Offset: 0xA0

    }; // Size: 0xA8

    // animations the entity will play, in order
    idList < idAnimated::anim_t , TAG_IDLIST , false > animations; // Offset: 0x1B48

    // attachments the entity should start with
    idList < idAnimated::attachment_t , TAG_IDLIST , false > startingAttachments; // Offset: 0x1B60

    // apply the animation's origin delta to the physics object
    bool applyAnimDelta; // Offset: 0x0

    // if true, start playing anims from the beginning of the list after reaching the end
    bool loopAnimList; // Offset: 0x0

    // if true, plays on spawn
    bool playOnSpawn; // Offset: 0x0

    // if true, calculate frame bounds from joints, only really an option if big model that the joints will cover and not using animdelta
    bool calcBoundsFromJoints; // Offset: 0x0

    // if, true disable syncing animation over from the server
    bool isAnimLocalAuthorative; // Offset: 0x0

    // whether we are in a custom job or not
    bool inCustomJob; // Offset: 0x0

    // flag to indicate we want collision to be updated
    bool updateCollision; // Offset: 0x0

    // use the optimized instance manager and remove this entity
    bool useInstanceManager; // Offset: 0x0

    // Register me as an entity that needs skin swaps ( if the player swaps skins )
    bool availableForSkinSwap; // Offset: 0x0

    // time between animations
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeBetweenAnimations; // Offset: 0x1B7C

    // name of sound joint
    idJointName soundJoint; // Offset: 0x1B80

    // index of the sound joint
    idIndex < short , invalidJointIndex_t , - 1 > soundJointIndex; // Offset: 0x1BB0

    // if true, ignore using the visibility boxes flag to indicate visibility
    bool ignoreVisibilityBox; // Offset: 0x1BB2

    // if true, allows the rendermodel of this entity to show on the first frame rather than waiting for 2 frames by default - this flag is only used during spawn
    bool showOnFirstFrame; // Offset: 0x1BB3

    // meshes to show / hide ( for the duration of this idAniamted )
    idMD6Util::meshShowHideInfo_t showHideInfo; // Offset: 0x1BB8

    // should apply this customized skin type
    idAnimated::customSkinType_t customSkinTypeToApply; // Offset: 0x1BF0

    // weapon ref decl for customization
    idDeclWeaponRef declWeaponRefForCustomization; // Offset: 0x1BF8

    // manages all attachments
    idAttachmentCollection attachments; // Offset: 0x1C00

    // index of the current anim
    int curAnim; // Offset: 0x1C20

    // channel animator for playing MD6 animations
    idAnimator_Channel channelAnimator; // Offset: 0x1C28

    idAnimator_ChannelWeight channelWeightAnimator; // Offset: 0x1D38

    idAnimSysNode_idAnimated* animatedNode; // Offset: 0x1DD0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastAnimStartTime; // Offset: 0x1DD8

    bool stopIsPending; // Offset: 0x1DE0

    bool initialAnimPlayed; // Offset: 0x1DE1

    bool registeredSkinChangeEvents; // Offset: 0x1DE2

    // we cache this so we can avoid calling mapLocal->GetLocalPlayer() in our destructor, may not be valid during destruction
    uint16 cachedPlayerBroadcastSystem; // Offset: 0x1DE4

}; // Size: 0x1DE8
