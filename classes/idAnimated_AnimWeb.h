struct idAnimated_AnimWeb : idAnimatedEntity
{
    struct attachment_t
    {
        // slot to attach item
        equipSlot_t equipSlot; // Offset: 0x0

        // tag to attach to ( if equipSlot == EQUIP_NONE )
        idStr tag; // Offset: 0x8

        // entity def this attachment will spawn
        idDeclEntityDef* entityDef; // Offset: 0x38

        // name of entity to attach (if entityAttachment is also set, then
        idStr entityName; // Offset: 0x40

        // inventory item to attach
        idDeclInventory* declInventory; // Offset: 0x70

        // animated model this attachment will spawn
        idDeclMD6* md6; // Offset: 0x78

        // static model this attachment will spawn
        idStr lwoName; // Offset: 0x80

    }; // Size: 0xB0

    struct collisionPieceStage_t
    {
        // model to use for collision
        idStrClipModel collisionModel; // Offset: 0x0

        // if clipBounds is true and this is non-zero, use these bounds as the min and max to create a clip model {{ units = m }}
        idVec3 collisionBounds; // Offset: 0x8

        // tag where the collision model attaches
        idStr tag; // Offset: 0x18

        // joint where the collision model attaches (if no tag is set)
        idJointName joint; // Offset: 0x48

        // clip mask for the collision model (contents it will hit when it moves)
        idContents clipMask; // Offset: 0x78

        // contest of the collision model
        idContents contents; // Offset: 0x7C

        // use the model's bounds or collision bounds as a clip model
        bool clipBounds; // Offset: 0x80

        // true if the clip model should push stuff it hits
        bool push; // Offset: 0x81

        // true if the clip model should crush stuff it cannot push (implies push)
        bool crush; // Offset: 0x82

        // clip model for this stage (allocated at run-time)
        idHavokShapePointer havokShape; // Offset: 0x88

        // index of the joint the clip model is attached to
        idIndex < short , invalidJointIndex_t , - 1 > jointIndex; // Offset: 0x90

        // rotational offset for attachment
        idQuat rOffset; // Offset: 0x94

        // translational offset for attachment {{ units = m }}
        idVec3 tOffset; // Offset: 0xA4

    }; // Size: 0xB0

    struct collisionPiece_t
    {
        // stages for this collision piece
        idList < idAnimated_AnimWeb::collisionPieceStage_t , TAG_IDLIST , false > stages; // Offset: 0x0

        // physics object for collision piece (points to correct clip model for the current stage)
        idHavokPhysics_DefaultStatic* physicsObj; // Offset: 0x18

        // push flags used when moving this physics object with ClipPush
        int pushFlags; // Offset: 0x20

        // current stage for this collision piece
        int curStage; // Offset: 0x24

    }; // Size: 0x28

    struct animWebParms_t
    {
        // the anim web decl this entity uses
        idDeclAnimWeb* webDecl; // Offset: 0x0

        // subweb and name of the state the web should start in
        idAnimWebPath initialWebNode; // Offset: 0x8

        // subweb and name of the state the web should start in
        idList < idAnimWebPath , TAG_IDLIST , false > ambientAnims; // Offset: 0x38

    }; // Size: 0x50

    // parameters for the anim web
    idAnimated_AnimWeb::animWebParms_t animWebParms; // Offset: 0x1B48

    // TH_THINKS are active
    bool activateThinks; // Offset: 0x1B98

    // attachments the entity should start with
    idList < idAnimated_AnimWeb::attachment_t , TAG_IDLIST , false > startingAttachments; // Offset: 0x1BA0

    // if true, apply the animation delta to the entity's origin
    bool applyAnimDelta; // Offset: 0x1BB8

    // use ambient web anims at start
    bool useAmbientAnims; // Offset: 0x1BB9

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ambientWaitTime; // Offset: 0x1BC0

    // wait time before next random ambient animation is played
    idTypesafeTime < int , millisecondUnique_t , 1000 > ambientWait; // Offset: 0x1BC8

    // only used in rare cases to avoid overdraw when this model covers a large part of the screen
    bool sceneModel; // Offset: 0x1BCC

    // if true, this entity will override and disable using deferred positions during spawn
    bool overrideUsingDeferredPositions; // Offset: 0x1BCD

    // damage to apply if the collision object crushes something and has the push and crush flags set
    idDeclDamage* crushDamage; // Offset: 0x1BD0

    // damage to apply if the collision object touches and has the push flag set something
    idDeclDamage* pushDamage; // Offset: 0x1BD8

    // trigger this FX condition when damage is taken
    fxCondition_t onDamageCondition; // Offset: 0x1BE0

    // name of sound joint
    idJointName soundJoint; // Offset: 0x1BE8

    // index of the sound joint
    idIndex < short , invalidJointIndex_t , - 1 > soundJointIndex; // Offset: 0x1C18

    // list of collision pieces to attach
    idList < idAnimated_AnimWeb::collisionPiece_t , TAG_IDLIST , false > collisionPieces; // Offset: 0x1C20

    // name to show for subtitles
    idStrId subtitleName; // Offset: 0x1C38

    // the anim web to use for this entity
    idAnimator_AnimWeb animWeb; // Offset: 0x1C40

    // manages all attachments
    idAttachmentCollection attachments; // Offset: 0x24B0

    // handles to equipped items
    idHandle < int , invalidAttachment_t , INVALID_ATTACHMENT > equipSlots[11]; // Offset: 0x24D0

    idInventoryCollection inventory; // Offset: 0x2500

    // Do we have gore ?
    idDeclGoreContainer* goreContainerDecl; // Offset: 0x2A68

    // Gore component
    idGoreComponent* goreComponent; // Offset: 0x2A70

    // Articulated Figure component
    idAnimator_AF* afComponent; // Offset: 0x2A78

    // Torso Tracker Component
    idAnimator_TorsoTracker* torsoTrackerComponent; // Offset: 0x2A80

    // Used to pose on a specific anim frame.
    idMD6LeafPause leafPause; // Offset: 0x2A88

    // for each attached model
    idList < idAnimEventHandler , TAG_IDLIST , false > attachmentAnimEventHandlers; // Offset: 0x2B10

    // if true, bound the joints to determine the model's bounds
    bool lightFromJointPositions; // Offset: 0x2B28

    // name of the joint to ignore when calculating lighting bounds
    idJointName skipJointForLighting; // Offset: 0x2B30

    // names of meshes to hide
    idList < idStr , TAG_IDLIST , false > hideMeshes; // Offset: 0x2B60

    // names of meshes to show
    idList < idStr , TAG_IDLIST , false > showMeshes; // Offset: 0x2B78

}; // Size: 0x2B90
