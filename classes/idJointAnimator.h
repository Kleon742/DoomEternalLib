struct idJointAnimator
{
    enum enum_1B900 : int
    {
        JOINTS_GAME_REFERENCE = 0,
        JOINTS_GAME_FINAL = 1,
        JOINTS_DEFERRED_REFERENCE = 2,
        JOINTS_DEFERRED_FINAL = 3,
        NUM_JOINT_ARRAYS = 4
    };

    enum enum_1BA00 : int
    {
        BLENDOUTPUTS_DEFERRED = 0,
        BLENDOUTPUTS_GAME = 1,
        NUM_BLENDOUTPUT_ARRAYS = 2
    };

    enum hasAsyncMarkedForDeleteFlags_t : int
    {
        HAS_ASYNC_BLEND_JOB = 1,
        MARKED_FOR_DELETE = 2
    };

    // ------------------------ HACK TO CORRECT MATH ------------------------ Scales the offset before creating world space tag position.
    bool HACK_correctTagMath; // Offset: 0x0

    // decl built from
    idDeclMD6* decl; // Offset: 0x8

    // runtime rig instance
    idRigInstance* rigInstance; // Offset: 0x10

    idRigComponentInstance* constraintInstance; // Offset: 0x18

    // skinning buffers
    idSkinningBuffers skinningBuffers; // Offset: 0x20

    // morph-maps pointing into combined morphMapBuffer
    idList < unsigned char * , TAG_IDLIST , false > morphMaps; // Offset: 0x320

    // combined morph-map buffer to output blend-shape commands to
    idList < unsigned char , TAG_IDLIST , false > morphMapBuffer; // Offset: 0x338

    // blend tree flattened to a command list
    md6AnimCommand_t* commands; // Offset: 0x350

    // blend shape command list
    idHeapArray < md6BlendShapeCommand_t , TAG_HEAP_ARRAY > blendShapeCommands; // Offset: 0x358

    // parms used buy the deferred blend job, must be 16 byte aligned
    idMD6Blend::blendParms_t* blendParms; // Offset: 0x370

    // joints array (see JOINTS_? above)
    idJointMat* joints[4]; // Offset: 0x378

    // blend outputs double buffered for the blend job
    md6BlendOutputs_t* blendOutputs[2]; // Offset: 0x398

    // userchannels doubled buffered for the blend job
    idList < float , TAG_MD6_MISC , false > userChannels[2]; // Offset: 0x3A8

    // joint mods double buffered for the blend job
    idList < idMD6Blend::jointMod_t , TAG_MD6_MISC , false > jointMods[2]; // Offset: 0x3D8

    // channel mods double buffered for the blend job
    idList < idMD6Blend::channelMod_t , TAG_MD6_MISC , false > channelMods[2]; // Offset: 0x408

    // draw data double buffered for the blend job
    idDrawDataList drawData[2]; // Offset: 0x438

    // #if defined( ID_DEV_TOOLS ) idList< idMD6Blend::debugOutput_t >debugOutput[ NUM_BLENDOUTPUT_ARRAYS ]; debug outputs double buffered for the blend job #endif bounds used for rendering
    idBounds frameBounds; // Offset: 0x498

    // bounds with origin translation stripped
    idBounds normalizedBounds; // Offset: 0x4B0

    // bounds including any origin translation
    idBounds translatedBounds; // Offset: 0x4C8

    // index of joint to skip when calculating bounds from joints
    idIndex < short , invalidJointIndex_t , - 1 > skipJointForBounds; // Offset: 0x4E0

    // buffer to apply joint mods to
    int currentDeferred; // Offset: 0x4E4

    // the last time the tree was blended
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastBlendTime; // Offset: 0x4E8

    // deferred lastBlendTime
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deferredBlendTime; // Offset: 0x4F0

    // overall morph-map weight
    unsigned char morphMapWeight; // Offset: 0x4F8

    // if set to true, there are deferred joints waiting to by swapped to game joints
    bool hasDeferredJoints; // Offset: 0x0

    // if set to true, bounds will be calculated from the joint positions during the blend job
    bool calcRefBoundsFromJoints; // Offset: 0x0

    // if set to true, clear origin transformation for anims with the appropriate flags
    bool clearOriginTransform; // Offset: 0x0

    // if set to true, origin delta is between next frame and current frame rather than current and previous
    bool originDeltaLookAhead; // Offset: 0x0

    // if set to true, joint animator is currently used by idStudio
    bool isUsedByIdStudio; // Offset: 0x0

    // if set to true, don't post blend-shape commands during blending
    bool inhibitBlendShapes; // Offset: 0x0

    // if set to true, this animator is driving an idAI2 actor
    bool isAI; // Offset: 0x0

    // hasAsyncBlendJob set when the animator queues an async blend job
    interlockedInt_t hasAsyncBlendJob_MarkedForDelete; // Offset: 0x4FC

    // if markedForDelete set to true, this animator will be deleted automatically when its pending blend job is finished
    idVec3 scale; // Offset: 0x500

    idJointAnimator* copyTargetAnimator; // Offset: 0x510

    idIndex < short , invalidJointIndex_t , - 1 >* copyTargetJointRemap; // Offset: 0x518

    float* copyTargetRetargetInfo; // Offset: 0x520

}; // Size: 0x528
