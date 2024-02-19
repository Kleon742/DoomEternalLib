struct idEditorModelEntity : idAnimatedEntity
{
    struct idActorEditable
    {
        // names of joint groups, their associated damage scale, and armor level
        idEntityDamageComponent entityDamageComponent; // Offset: 0x0

    }; // Size: 0x128

    // blend equation animator
    idAnimator_BlendEq blendEqAnimator; // Offset: 0x1B48

    // named anims for the blend equation animator
    idList < idAnimator_BlendEq::idNamedAnim , TAG_IDLIST , false > namedAnims; // Offset: 0x1C08

    // blend variables for the anim web
    idList < idAnimWebScalar , TAG_IDLIST , false > blendVariables; // Offset: 0x1C20

    // memory for blend variables not declared before parsing the blend equation
    idScalarMemBlock scalarMem; // Offset: 0x1C38

    idAttachmentCollection attachments; // Offset: 0x1C48

    float moveSpeed; // Offset: 0x1C68

    // current animation time in seconds
    float caretTime; // Offset: 0x1C6C

    bool movement; // Offset: 0x1C70

    idAnimator_Proxy proxyAnimatorEditor; // Offset: 0x1C78

    idSoundEvent* sndFootsteps; // Offset: 0x1CC0

    // data for playing or scrubbing through md6 animations
    idMD6Anim* curAnim; // Offset: 0x1CC8

    idMD6Leaf* leaf; // Offset: 0x1CD0

    idMD6LeafPlay leafPlay; // Offset: 0x1CD8

    idMD6LeafPause leafPause; // Offset: 0x1D38

    idMD6Leaf::wrapMode_t playingWrapMode; // Offset: 0x1DC0

    int lastLoopCount; // Offset: 0x1DC4

    // {{ units = m }}
    idVec3 baseOrigin; // Offset: 0x1DC8

    idMat3 baseAxis; // Offset: 0x1DD4

    idEffectPhysicsBreakable* breakablePhysics; // Offset: 0x1DF8

    idAIVOController* voController; // Offset: 0x1E00

    // gore component
    idGoreComponent goreComponent; // Offset: 0x1E08

    // ------------------------ damage component for gore support ------------------------ editable settings for idActor;
    idEditorModelEntity::idActorEditable actorEditable; // Offset: 0x2D50

    idIndex < short , invalidJointIndex_t , - 1 > modifyJointIndex; // Offset: 0x2E78

    idJointMat modifyJointTransform; // Offset: 0x2E7C

    jointManipulatorSpace_t modifyJointSpace; // Offset: 0x2EAC

    bool enablePoseConstraints; // Offset: 0x0

    bool previewBreakPoseConstraintEvents; // Offset: 0x0

    idBitset < 128 > savedConstraintFlags; // Offset: 0x2EB4

}; // Size: 0x2EC8
