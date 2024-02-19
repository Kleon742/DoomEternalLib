struct idAnimSysLayerConfig
{
    // Defaultnode to start on this layer (if any)
    idAnimSysTargetNode defaultNode; // Offset: 0x0

    // Layer name
    idAtomicString name; // Offset: 0x8

    // Jointnames to include in this layer (TEMP, SHOULD GET NAMED JOINT INFO FROM MD6DECL)
    idList < idAtomicString , TAG_IDLIST , false > jointNames; // Offset: 0x10

    // Min lod at which this layer will be active (-1 always active)
    int minLod; // Offset: 0x28

    // Max lod at which this layer will be active (-1 always active)
    int maxLod; // Offset: 0x2C

    // Over how long time to blend in/out this layer when crossing lod thresholds
    float lodBlendTime; // Offset: 0x30

    // If top node should always be active
    bool neverExit; // Offset: 0x34

    // Will analyse and force lerp between poses before handing then on, between complex additive poses for instance
    bool lerpPoses; // Offset: 0x35

}; // Size: 0x38
