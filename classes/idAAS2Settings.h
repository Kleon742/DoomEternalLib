struct idAAS2Settings
{
    enum type_t : int
    {
        AAS_PLAYER = 0,
        AAS_MONSTER = 1,
        AAS_BOT = 2,
        AAS_MAX = 3
    };

    enum aasPrimitiveMode_t : int
    {
        AAS_PRIMITIVE_MODE_DEFAULT = 0,
        AAS_PRIMITIVE_MODE_NEVER = 1,
        AAS_PRIMITIVE_MODE_ALWAYS = 2
    };

    // type of file--dictates brush contents flags to be considered
    idAAS2Settings::type_t type; // Offset: 0x0

    // file extension to use when saving the output files - this is really the type name of the AAS and should be unique for each aas def
    idArray < char , 64 > fileExtensionAAS; // Offset: 0x4

    // the name of editor groups to pull primitives from. Only primitives included in these groups are even considered for inclusion in the AAS build. Brushes in these groups may still be excluded if their clip flags do not match those requires for the AAS type_t.
    idArray < char , 64 > groupName; // Offset: 0x44

    idArray < char , 64 > explicitGroupName; // Offset: 0x84

    // primitives in here will be filtered from "groupName".
    idArray < char , 64 > exclusionGroupName; // Offset: 0xC4

    // if true, you can optionally write out an Area BModel at the end of the compile process
    bool canWriteAreaBModel; // Offset: 0x104

    // -----------------------  Collision Settings -----------------------
    idBounds boundingBox; // Offset: 0x108

    int primitiveModeBrush; // Offset: 0x120

    int primitiveModeModel; // Offset: 0x124

    // -----------------------  Physics Settings -----------------------
    idVec3 gravityDir; // Offset: 0x128

    // {{ units = m / ( s * s ) }}
    float gravityValue; // Offset: 0x134

    // {{ units = m }}
    float maxStepHeight; // Offset: 0x138

    // {{ units = m }}
    float maxBarrierHeight; // Offset: 0x13C

    // {{ units = m }}
    float maxWaterJumpHeight; // Offset: 0x140

    // {{ units = m }}
    float maxFallHeight; // Offset: 0x144

    // {{ units = m }}
    float maxLedgeGrabHeight; // Offset: 0x148

    float minFloorCos; // Offset: 0x14C

    // {{ units = m }}
    float minHighCeiling; // Offset: 0x150

    // {{ units = m / s }}
    float groundSpeed; // Offset: 0x154

    // {{ units = m / s }}
    float waterSpeed; // Offset: 0x158

    // {{ units = m / s }}
    float ladderSpeed; // Offset: 0x15C

    // -----------------------  Navigation Settings ----------------------- {{ units = m }}
    float wallCornerEdgeRadius; // Offset: 0x160

    // {{ units = m }}
    float ledgeCornerEdgeRadius; // Offset: 0x164

    // {{ units = m }}
    float obstaclePVSRadius; // Offset: 0x168

    // distance from corners that extra reachabilities will be placed on edges {{ units = m }}
    float wallCornerReachabilityBackoff; // Offset: 0x16C

    // distance from ends of all edges where extra reachabilities will be placed {{ units = m }}
    float highQualityReachabilityBackoff; // Offset: 0x170

    // distance between walk reachabilities along an edge {{ units = m }}
    float maxDistBetweenWalkReachabilities; // Offset: 0x174

    // distance between ledge reachabilities along an edge {{ units = m }}
    float maxDistBetweenLedgeReachabilities; // Offset: 0x178

    // -----------------------  Spacial Analysis Settings ----------------------- if true - will use the same cover generation that existed in Rage for the AI.
    bool useRageStyleCoverGeneration; // Offset: 0x17C

    // if true, will try to generate cover in the map. False by default.
    bool generateCover; // Offset: 0x17D

    // if true - will create traversals for any bounce pads found in the map.
    bool createBouncePadTraversals; // Offset: 0x17E

    // if true - will create traversals for any teleporters found in the map.
    bool createTeleporterTraversals; // Offset: 0x17F

    // if true - will create traversals for any doors found in the map.
    bool createDoorTraversals; // Offset: 0x180

    // if true - will create traversals for any ledge grabbable areas in the map.
    bool createLedgeGrabTraversals; // Offset: 0x181

    // minimum height of CrouchingCover {{ units = m }}
    float minCrouchingCoverHeight; // Offset: 0x184

    // minimum height of StandingCover {{ units = m }}
    float minStandingCoverHeight; // Offset: 0x188

    // height above floor to look for fire while crouching {{ units = m }}
    float crouchingFireHeight; // Offset: 0x18C

    // height above floor to look for fire while standing {{ units = m }}
    float standingFireHeight; // Offset: 0x190

    // minimum width of a wall (used for DoorwayDetection) {{ units = m }}
    float minWallWidth; // Offset: 0x194

    // maximum width of a wall (used for DoorwayDetection) {{ units = m }}
    float maxWallWidth; // Offset: 0x198

    // minimum width of a doorway {{ units = m }}
    float minDoorWidth; // Offset: 0x19C

    // maximum width of a doorway {{ units = m }}
    float maxDoorWidth; // Offset: 0x1A0

    // when in cover, the edge of the AI's bounding box should be this far behind the corner {{ units = m }}
    float coverCornerDistance; // Offset: 0x1A4

    // when in cover, the edge of the AI's bounding box should be this far from the wall {{ units = m }}
    float coverWallDistance; // Offset: 0x1A8

    // maximum distance between edges that will be considered a ChokePoint {{ units = m }}
    float chokePointWidth; // Offset: 0x1AC

    // -----------------------  Fixed Travel Times -----------------------
    int tt_barrierJump; // Offset: 0x1B0

    int tt_waterJump; // Offset: 0x1B4

    int tt_startWalkOffLedge; // Offset: 0x1B8

    int tt_ledgeGrab; // Offset: 0x1BC

    int tt_startLadderClimb; // Offset: 0x1C0

}; // Size: 0x1C4
