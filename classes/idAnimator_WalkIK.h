struct idAnimator_WalkIK : idAnimator_IK
{
    // ------------------------ properties ------------------------
    idDeclWalkIK* decl; // Offset: 0x60

    int clipMask; // Offset: 0x68

    idVec3 upNormal; // Offset: 0x6C

    idHavokShapePointer havokShape; // Offset: 0x78

    idHavokShapePointer footModelHavok; // Offset: 0x80

    int numLegs; // Offset: 0x88

    int enabledLegs; // Offset: 0x8C

    idIndex < short , invalidJointIndex_t , - 1 > targetJoints[8]; // Offset: 0x90

    idIndex < short , invalidJointIndex_t , - 1 > footJoints[8]; // Offset: 0xA0

    idIndex < short , invalidJointIndex_t , - 1 > ankleJoints[8]; // Offset: 0xB0

    idIndex < short , invalidJointIndex_t , - 1 > waistJointHandle; // Offset: 0xC0

    // ------------------------ state ------------------------
    int pivotFoot; // Offset: 0xC4

    float pivotYaw; // Offset: 0xC8

    // {{ units = m }}
    idVec3 pivotPos; // Offset: 0xCC

    bool onGround; // Offset: 0xD8

    bool onStairs; // Offset: 0xD9

    bool isDead; // Offset: 0xDA

    bool oldHeightsValid; // Offset: 0xDB

    // {{ units = m }}
    float oldWaistHeight; // Offset: 0xDC

    // {{ units = m }}
    float oldAnkleHeights[8]; // Offset: 0xE0

    int oldGroundPhysicsId; // Offset: 0x100

    // {{ units = m }}
    idVec3 oldGroundPhysicsOrigin; // Offset: 0x104

    int surfaceTypes[8]; // Offset: 0x110

    idHavokQueryId modelQueryHavok; // Offset: 0x130

    idHavokQueryId waistQueryHavok; // Offset: 0x138

    idHavokQueryId legQueriesHavok[8]; // Offset: 0x140

    idHavokQueryId footQueriesHavok[8]; // Offset: 0x180

    // Trace forward/backward in case leg is dangling
    idHavokQueryId ledgeXQueriesHavok[8]; // Offset: 0x1C0

    // Trace left/right in case leg is dangling
    idHavokQueryId ledgeYQueriesHavok[8]; // Offset: 0x200

    // {{ units = m }}
    idVec3 lastModelSpaceAnkleOrigin[8]; // Offset: 0x240

    // {{ units = m }}
    float groundTraceDist; // Offset: 0x2A0

    // {{ units = m }}
    float internalRadiusXY; // Offset: 0x2A4

    idMD6LeafPause animLeaf; // Offset: 0x2A8

}; // Size: 0x330
