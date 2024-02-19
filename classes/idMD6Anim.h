struct idMD6Anim : idResource
{
    enum md6AnimDependencyCallbacks_t : int
    {
        DEP_CALLBACK_COMPRESSION_PROFILE = 0,
        DEP_CALLBACK_NUM = 1
    };

    struct compressionProperties_t
    {
        float errorTolerance; // Offset: 0x0

    }; // Size: 0x4

    struct steppedKeys_t
    {
        int numFrames; // Offset: 0x0

        int* frames; // Offset: 0x8

        float* rotation; // Offset: 0x10

        float* scale; // Offset: 0x18

        float* translation; // Offset: 0x20

        float* userChannels; // Offset: 0x28

    }; // Size: 0x30

    struct idParsedAnimTextData
    {
        char* filename; // Offset: 0x0

        unsigned short parentTblCrc; // Offset: 0x8

        idStr commandLine; // Offset: 0x10

        int numJoints; // Offset: 0x40

        int numPaddedJoints; // Offset: 0x44

        int numUserChannels; // Offset: 0x48

        // use origin data by default
        int animFlags; // Offset: 0x4C

        int numFrames; // Offset: 0x50

        int frameRate; // Offset: 0x54

        idMD6Skel* skel; // Offset: 0x58

        idTokenStatic < 256 > subtractiveAnim; // Offset: 0x60

        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > maskRJoints; // Offset: 0x1D0

        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > maskSJoints; // Offset: 0x1E8

        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > maskTJoints; // Offset: 0x200

        idList < float , TAG_IDLIST , false > userChannels; // Offset: 0x218

        idList < float , TAG_IDLIST , false > userChannelsFrame; // Offset: 0x230

        idList < float , TAG_IDLIST , false > rotation; // Offset: 0x248

        idList < float , TAG_IDLIST , false > scale; // Offset: 0x260

        idList < float , TAG_IDLIST , false > translation; // Offset: 0x278

        idList < int , TAG_IDLIST , false > steppedKeyFrames; // Offset: 0x290

        idList < float , TAG_IDLIST , false > steppedKeyRotation; // Offset: 0x2A8

        idList < float , TAG_IDLIST , false > steppedKeyScale; // Offset: 0x2C0

        idList < float , TAG_IDLIST , false > steppedKeyTranslation; // Offset: 0x2D8

        idList < float , TAG_IDLIST , false > steppedKeyUserChannels; // Offset: 0x2F0

        idList < float , TAG_IDLIST , false > jointWeights; // Offset: 0x308

        idList < idIndex < short , invalidJointIndex_t , - 1 > , TAG_IDLIST , false > animJointToSkelJoint; // Offset: 0x320

        idList < idIndex < short , invalidUserChannelIndex_t > , TAG_IDLIST , false > userChannelMapping; // Offset: 0x338

        float compressionPercentage; // Offset: 0x350

        idStr compressionProfileName; // Offset: 0x358

        bool compressionUsingDefaults; // Offset: 0x388

        idDeclAnimationCompressionProfile::compressionTolerances_t compressionTolerances; // Offset: 0x38C

        // animation bounds with translated origin
        idBounds translatedBounds; // Offset: 0x398

        // animation bounds without origin translation or rotation
        idBounds normalizedBounds; // Offset: 0x3B0

        idStr errorMsg; // Offset: 0x3C8

    }; // Size: 0x3F8

    idAtomicString skelName; // Offset: 0x58

    // holds all of the data required for animation transformation and blending
    idMD6AnimData* animData; // Offset: 0x60

    // locomotion info data, not NULL only if the animation is flagged for locomotion
    locomotionInfo_t* locomotionInfoData; // Offset: 0x68

    // animation bounds with translated origin
    idBounds translatedBounds; // Offset: 0x70

    // animation bounds without origin translation or rotation
    idBounds normalizedBounds; // Offset: 0x88

    // game time when last played, set by gamelib/game code
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTimePlayed; // Offset: 0xA0

    // If this anim has already been posted to generator
    bool postedForGeneration; // Offset: 0xA8

}; // Size: 0xB0
