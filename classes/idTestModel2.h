struct idTestModel2 : idAnimatedEntity
{
    enum translation_t : int
    {
        TRANSLATE_FIXED = 0,
        TRANSLATE_RESET = 1,
        TRANSLATE_CONTINUOUS = 2,
        TRANSLATE_MAX = 3
    };

    enum parseFlags_t : int
    {
        PF_WRAPMODE = 1,
        PF_WEIGHTGROUP = 2,
        PF_RATE = 4,
        PF_ANIM = 8
    };

    // blend equation animator
    idAnimator_BlendEq blendEqAnimator; // Offset: 0x1B48

    // named anims for the blend equation animator
    idList < idAnimator_BlendEq::idNamedAnim , TAG_IDLIST , false > namedAnims; // Offset: 0x1C08

    // blend variables for the anim web
    idList < idAnimWebScalar , TAG_IDLIST , false > blendVariables; // Offset: 0x1C20

    // memory for blend variables not declared before parsing the blend equation
    idScalarMemBlock scalarMem; // Offset: 0x1C38

    // channel animator for testing plain old anims and aliases
    idAnimator_Channel channelAnimator; // Offset: 0x1C48

    // orientation model will reset to on a loop
    idMat3 resetAxis; // Offset: 0x1D58

    // position model will reset to on a loop {{ units = m }}
    idVec3 resetOrigin; // Offset: 0x1D7C

    // type of translation to use
    idTestModel2::translation_t translationMode; // Offset: 0x1D88

    // attachments bound to the test model
    idAttachmentCollection attachments; // Offset: 0x1D90

    // current loop count
    int curLoopCount; // Offset: 0x1DB0

    // current alias for nextalias
    int curAliasIndex; // Offset: 0x1DB4

    // current frame if the model is showing a single frale
    float curFrame; // Offset: 0x1DB8

    // additional rotation to apply to the model
    idAngles rotationAngles; // Offset: 0x1DBC

    // total of all translational delta accumulated during a single loop of the animation {{ units = m }}
    idVec3 accumulatedDeltaTrans; // Offset: 0x1DC8

    // total of all rotational deltas accumulated during a single loop of the animation
    idQuat accumulatedDeltaRot; // Offset: 0x1DD4

    // if true, ignore the first delta after starting an animation
    bool ignoreFirstDelta; // Offset: 0x1DE4

}; // Size: 0x1DE8
