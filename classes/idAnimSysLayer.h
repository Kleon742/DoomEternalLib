struct idAnimSysLayer
{
    enum invalidLayerIndex_t : int
    {
        INVALID_LAYER_INDEX = -1
    };

    typedef int layerIndexType;

    typedef idIndex < idAnimSysLayer::layerIndexType , idAnimSysLayer::invalidLayerIndex_t > layerIndex_t;

    idAnimSysGenerateSupport generateSupport; // Offset: 0x0

    // Layer name
    idAtomicString layerName; // Offset: 0x540

    // Current node
    idAnimSysNode* curNode; // Offset: 0x548

    int layerNameHash; // Offset: 0x550

    int minLod; // Offset: 0x554

    int maxLod; // Offset: 0x558

    idAnimSysNode::blendInfo_t currentLodBlend; // Offset: 0x560

    // Layer flags
    unsigned long long layerFlags; // Offset: 0x580

    // Used for external events, sent to each top level node
    idRingList < idAnimSysNodeData::idAnimSysNodeEvent , 128 > externalEventQueue; // Offset: 0x588

    unsigned char jointWeights[256]; // Offset: 0x990

    bool hasJointWeights; // Offset: 0xA90

    bool neverExit; // Offset: 0xA91

}; // Size: 0xA98
