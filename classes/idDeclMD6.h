struct idDeclMD6 : idDecl
{
    enum loadFlags_t : int
    {
        LOADFLAGS_RESIDE_ON_CPU = 1,
        LOADFLAGS_RESIDE_ON_GPU = 2,
        LOADFLAGS_DEFAULT = 2
    };

    struct animEventData_t
    {
        // decl this info is on
        idDeclMD6* definingDecl; // Offset: 0x0

        // anim event info
        idAnimEvents::animEventInfo_t* info; // Offset: 0x8

    }; // Size: 0x10

    struct idHeadTrackJoint
    {
        // index of the joint to modify for tracking
        idIndex < short , invalidJointIndex_t , - 1 > jointIdx; // Offset: 0x0

        // amount to scale this joint's rotation on the pitch axis
        float pitchScale; // Offset: 0x4

        // amount to scale this joint's rotation on the yaw axis
        float yawScale; // Offset: 0x8

    }; // Size: 0xC

    struct idHeadTrackGroup
    {
        // name of the head tracking group
        idAtomicString name; // Offset: 0x0

        // list of joints to be modified for looking
        idList < idDeclMD6::idHeadTrackJoint , TAG_IDLIST , false > trackJoints; // Offset: 0x8

        // bone representing eyes
        idIndex < short , invalidJointIndex_t , - 1 > focusJointIdx; // Offset: 0x20

        // bone representing torso orientation
        idIndex < short , invalidJointIndex_t , - 1 > orientationJointIdx; // Offset: 0x22

        // time over which this group blends in or out
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > blendTime; // Offset: 0x28

    }; // Size: 0x30

    typedef idStaticList < idDeclMD6::animEventData_t , MAX_EVENT_INFOS > animEventDataList_t;

    typedef idList < idStr > userChannelFxVarList_t;

    typedef idPair < userChannelIndex_t , idDeclMD6::userChannelFxVarList_t > userChannelFxVarPair_t;

    typedef idPair < idStr , idMD6Model * > dependentModel_t;

    typedef idPair < userChannelIndex_t , aliasHandle_t > userChannelToAnimationAliasOverride_t;

    idMD6Blend::configInfo_t* config; // Offset: 0x78

    idMD6Model* model; // Offset: 0x80

    // who I am inherited from
    idStr parent; // Offset: 0x88

    // a pointer to the decl
    idDeclMD6* parentDecl; // Offset: 0xB8

    // accumulated bounds of all animations, without origin translation
    idBounds referenceBounds; // Offset: 0xC0

    // returns the number of recoverable errors during loading. This exists so that models  that have missing animations or other often minor errors don't fail to load completely,  but still warn before allowing an editor to save the decl.
    int numLoadErrors; // Offset: 0xD8

    // all joint groups for this decl
    idJointGroupCollection jointGroupCollection; // Offset: 0xE0

    // all attachment props and tags for this model
    idPropsCollection props; // Offset: 0x278

    // holds events grouped by animation
    idAnimEvents animEvents; // Offset: 0x290

    // all eye infos for this decl
    idEyeInfoCollection eyeInfoCollection; // Offset: 0x2E0

    // all discrete poses for this decl
    idDiscreteCollection discreteCollection; // Offset: 0x300

    // all aliases in this decl
    idList < idMD6Alias , TAG_MD6 , false > aliases; // Offset: 0x318

    idHashIndex aliasHash; // Offset: 0x330

    idHashIndex animNameHash; // Offset: 0x360

    // counter for alias handles
    unsigned short curAliasHandle; // Offset: 0x390

    // run-time info for all head-tracking groups
    idList < idDeclMD6::idHeadTrackGroup , TAG_IDLIST , false > headTrackGroups; // Offset: 0x398

    idDeclRig* rigDecl; // Offset: 0x3B0

    idList < idPair < idStr , idList < int , TAG_MD6 > > , TAG_MD6 , false > meshKitGroups[7]; // Offset: 0x3B8

    // if true, use reference bounds calculated in the blend job by bound transformed joints
    bool calcRefBoundsFromJoints; // Offset: 0x460

    // if true the MD6 is referencing an alembic file
    bool isAlembic; // Offset: 0x461

    int parseCount; // Offset: 0x464

    idList < idPair < idStr , idMD6Model * > , TAG_IDLIST , false > dependentModels; // Offset: 0x468

    idList < idStr , TAG_IDLIST , false > resourceWarnings; // Offset: 0x480

    int userChannelWeightGroupOverride; // Offset: 0x498

    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > baseUserChannelAlias; // Offset: 0x49C

    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_MD6 , false > userChannelToAnimationAliasMap; // Offset: 0x4A0

    idList < idPair < userChannelIndex_t , aliasHandle_t > , TAG_MD6 , false > userChannelToAnimationAliasOverrides; // Offset: 0x4B8

    idList < idPair < userChannelIndex_t , idDeclMD6::userChannelFxVarList_t > , TAG_IDLIST , false > userChannelFXVarList; // Offset: 0x4D0

    idDeclMD6::loadFlags_t loadFlags; // Offset: 0x4E8

}; // Size: 0x4F0
