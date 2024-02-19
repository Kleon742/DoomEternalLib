struct idTraversalData
{
    // {{ units = m }}
    idVec3 origin; // Offset: 0x0

    idMat3 axis; // Offset: 0xC

    // {{ units = m }}
    idVec3 traversalEndpoint; // Offset: 0x30

    // {{ units = m }}
    idVec3 extrusionEndpoint; // Offset: 0x3C

    // {{ units = m }}
    float defaultEndpointOffset; // Offset: 0x48

    bool aasTraversal; // Offset: 0x4C

    bool enabled; // Offset: 0x4D

    int monsterType; // Offset: 0x50

    bool classA; // Offset: 0x54

    bool classB; // Offset: 0x55

    bool classC; // Offset: 0x56

    bool evasionTraversalOnly; // Offset: 0x57

    bool emergencyTraversalOnly; // Offset: 0x58

    bool onlyHealthy; // Offset: 0x59

    bool runWhenDone; // Offset: 0x5A

    float travelTimeScale; // Offset: 0x5C

    bool deltaCorrect; // Offset: 0x60

    idStr traversalAnim; // Offset: 0x68

    idList < idStr , TAG_IDLIST , false > targets; // Offset: 0x98

    idList < idTraversalLink , TAG_IDLIST , false > links; // Offset: 0xB0

}; // Size: 0xC8
