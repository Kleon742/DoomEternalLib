struct idAnimSys
{
    struct perfectPlacement_t
    {
        // For current animation last evaluation what was it's position {{ units = m }}
        idVec3 currentAnimOrigin; // Offset: 0x0

        // For current animation last evaluation what was it's orientation
        idQuat currentAnimOrientation; // Offset: 0xC

        // For current animation end pos {{ units = m }}
        idVec3 currentAnimEndOrigin; // Offset: 0x1C

        // For current animation end orientation
        idQuat currentAnimEndOrientation; // Offset: 0x28

        // For consecutive animations, accumulated position {{ units = m }}
        idVec3 accumulatedAnimOrigin; // Offset: 0x38

        // For consecutive animations, accumulated orientation
        idQuat accumulatedAnimOrientation; // Offset: 0x44

        // For consecutive animations, accumulated start position (last anim end pos) {{ units = m }}
        idVec3 accumulatedAnimStartOrigin; // Offset: 0x54

        // For consecutive animations, accumulated start orientation (last anim end orientation)
        idQuat accumulatedAnimStartOrientation; // Offset: 0x60

        // For consecutive animations, accumulated start position (last anim end pos) {{ units = m }}
        idVec3 accumulatedAnimEndOrigin; // Offset: 0x70

        // For consecutive animations, accumulated start orientation (last anim end orientation)
        idQuat accumulatedAnimEndOrientation; // Offset: 0x7C

        // When last "string" of animations was started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > validStartTime; // Offset: 0x90

        // When this was last updated
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastValidUpdateTime; // Offset: 0x98

    }; // Size: 0xA0

    // names and storage for variables used in nodes
    idList < idAnimSysNodeData::idAnimSysScalarInfo * , TAG_ANIMSYS , false > scalars; // Offset: 0x8

    idAnimSysNode::idAnimSysNode_Context curContext; // Offset: 0x20

    // AnimSys Decl
    idDeclAnimSys* declAnimSys; // Offset: 0x50

    // Model Decl
    idDeclMD6* model; // Offset: 0x58

    idJointAnimator* jointAnimator; // Offset: 0x60

    idRenderModel* renderModel; // Offset: 0x68

    // Some kind of owner, entity for instance
    idClass* owner; // Offset: 0x70

    // List of all instantiated nodes
    idList < idAnimSysNode * , TAG_ANIMSYS , false > nodes; // Offset: 0x78

    // Currently active animation layers
    idList < idAnimSysLayer * , TAG_ANIMSYS , false > activeLayers; // Offset: 0x90

    idAnimEventHandler animEventHandler; // Offset: 0xA8

    idAnimSys::perfectPlacement_t perfectPlacementInfo; // Offset: 0x578

    // Only one node at a time can be authorative in perfect movement
    idAnimSysNode* perfectMovementNode; // Offset: 0x618

    enumValueInfo_t* registeredFlags; // Offset: 0x620

    idStaticList < const idAnimSysEvent * , 32 , false , TAG_IDLIST > frameEvents; // Offset: 0x628

    // Node registry, map node names to node indices
    idHashIndex nodeHash; // Offset: 0x740

    idHashIndex layerHash; // Offset: 0x770

    idHashIndex scalarHash; // Offset: 0x7A0

    // Anim flags
    int currentLod; // Offset: 0x7D0

    bool forceStopGenerate; // Offset: 0x7D4

    // Frame counter like counter. Incremented in Generate()
    int cycleCount; // Offset: 0x7D8

    // Checksums for decls, if they are not correct we need to reparse
    unsigned int declAnimSysChecksum; // Offset: 0x7DC

    idStaticList < unsigned int , 8 , false , TAG_IDLIST > declMD6Checksums; // Offset: 0x7E0

}; // Size: 0x818
