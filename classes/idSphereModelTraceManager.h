struct idSphereModelTraceManager : idClass
{
    struct idJointTraceInfo
    {
        // index of the joint to trace spheres for. All spheres attached to this joint will be traced
        idIndex < short , invalidJointIndex_t , - 1 > mJointIndex; // Offset: 0x0

        // if > 0, this becomes a priority and joints with a higher priority get precedence in collision reporting
        short mPriority; // Offset: 0x2

        // sphere radius for this joint {{ units = m }}
        float mRadius; // Offset: 0x4

    }; // Size: 0x8

    struct idTagTraceInfo
    {
        // name of the prop
        idAtomicString mPropName; // Offset: 0x0

        // name of the tag for the prop
        idAtomicString mTagName; // Offset: 0x8

        // radius of the sphere to trace at this tag {{ units = m }}
        float mRadius; // Offset: 0x10

        // if > 0, this becomes a priority and joints with a higher priority get precedence in collision reporting
        int mPriority; // Offset: 0x14

    }; // Size: 0x18

    struct idSphereTraceResult
    {
        // index of joint whos sphere hit
        idIndex < short , invalidJointIndex_t , - 1 > mJointIndex; // Offset: 0x0

        // index of sphere on the joint that hit
        int mSphereIndex; // Offset: 0x4

        // the direction of the trace from prev position to current position
        idVec3 mTraceDir; // Offset: 0x8

        // all the info about the trace that hit
        trace_t mTraceResult; // Offset: 0x14

        // entity that was hit
        idEntity* mHitEnt; // Offset: 0x98

    }; // Size: 0xA0

    struct uniqueJointsInfo_t
    {
        idStaticList < idIndex < short , invalidJointIndex_t , - 1 > , 256 , false , TAG_IDLIST > joints; // Offset: 0x0

        idStaticList < idVec3 , 256 , false , TAG_IDLIST > lastPositions; // Offset: 0x218

        idStaticList < idMat3 , 256 , false , TAG_IDLIST > lastRotations; // Offset: 0xE30

    }; // Size: 0x3248

    struct touchPriority_t
    {
        idEntity* hitEnt; // Offset: 0x0

        idDeclDamage* damageDecl; // Offset: 0x8

        int spherePriority; // Offset: 0x10

        trace_t traceResult; // Offset: 0x14

        int sphereIndex; // Offset: 0x94

    }; // Size: 0x98

    idAIListRef < aiSphereModelTrace_t > traces; // Offset: 0x10

    // to avoid unnecessary transformations, this is a list of all joints indices for joints that must be transformed without duplicates
    idSphereModelTraceManager::uniqueJointsInfo_t uniqueJoints; // Offset: 0x18

    idSpawnId ownerSpawnID; // Offset: 0x3260

}; // Size: 0x3268
