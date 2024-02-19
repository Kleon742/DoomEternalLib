struct idDeclWalkIK : idDeclTypeInfo
{
    // list joints making up the legs
    idList < idIKLeg , TAG_IK , false > legJoints; // Offset: 0x88

    // name of waist joint
    idAtomicString waistJoint; // Offset: 0xA0

    // direction to bend at the knee
    idVec3 kneeDir; // Offset: 0xA8

    // smoothing factor for the ankles : use this much of the previous frame
    float smoothing; // Offset: 0xB4

    // smoothing factor for the waist : use this much of the previous frame
    float waistSmoothing; // Offset: 0xB8

    // smoothing factor for the ankles when on stairs
    float stairSmoothing; // Offset: 0xBC

    // smoothing factor for the waist when on stairs
    float stairWaistSmoothing; // Offset: 0xC0

    // smoothing factor for the ankles when in air
    float airSmoothing; // Offset: 0xC4

    // smoothing factor for the waist when in air
    float airWaistSmoothing; // Offset: 0xC8

    // per-foot smoothing factor :
    float footSmoothing; // Offset: 0xCC

    // Constant shift the feet up this amount (negative for down) {{ units = m }}
    float footShift; // Offset: 0xD0

    // Constant shift the waist up this amount (negative for down) {{ units = m }}
    float waistShift; // Offset: 0xD4

    // Dist to check down from origin for ground information {{ units = m }}
    float groundTraceDist; // Offset: 0xD8

    // minimum distance from waist to floor {{ units = m }}
    float minWaistFloorDist; // Offset: 0xDC

    // minimum distance from waist to ankle {{ units = m }}
    float minWaistAnkleDist; // Offset: 0xE0

    // size of the foot {{ units = m }}
    float footSize; // Offset: 0xE4

    // how far above the normal position of the foot the trace starts {{ units = m }}
    float footUpTrace; // Offset: 0xE8

    // how far below the normal position of the foot the trace ends {{ units = m }}
    float footDownTrace; // Offset: 0xEC

    // how far below the normal position of the foot the trace ends when dead {{ units = m }}
    float footDownTraceDead; // Offset: 0xF0

    // fudge dist (XY) for restrictToBounds (allow slightly outside or inside bounds) {{ units = m }}
    float restrictToBoundsTolerance; // Offset: 0xF4

    // keep a 'pivot' foot on the ground at all times
    bool usePivot; // Offset: 0xF8

    // keep traces within bounds (XY) even if joints are outside
    bool restrictToBounds; // Offset: 0xF9

    // if true, get the knee and hip directions from the base pose
    bool dirsFromBasePose; // Offset: 0xFA

    // if true, check if feet are in a solid and move them back inside of the bounding box if they are (implies restrictToBounds = true)
    bool checkFeetForSolids; // Offset: 0xFB

    // Opt in to use airSmoothing/airWaistSmoothing when in air
    bool useAirSmoothingScalars; // Offset: 0xFC

    // if true, feet that are not on ground when the model is will be pulled in to the edge of the surface the model is sitting on
    bool pullBackToEdge; // Offset: 0xFD

    // if > 0, pullback scales back going up to this foot height {{ units = m }}
    float pullBackMaxHeight; // Offset: 0x100

    // pullback scale back begins at this minimal foot height {{ units = m }}
    float pullBackMinHeight; // Offset: 0x104

    // distance to fade off aligner contribution, < 0 for infinite
    float alignerFadeOffDistance; // Offset: 0x108

    // multiplier to apply on the root height to compute min offset
    float alignerRootOffsetMinMultiplier; // Offset: 0x10C

    // if true, allow clamping of rig aligner offsets
    bool alignerClampOffsets; // Offset: 0x110

    // if true, allow expansion of root offset
    bool alignerExpandRootOffset; // Offset: 0x111

}; // Size: 0x118
