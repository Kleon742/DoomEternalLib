struct idMidnightAnimClipInfo
{
    // handle of the corresponding key
    idMidnightKeyHandle keyHandle; // Offset: 0x0

    // Anim to play
    idAtomicString anim; // Offset: 0x18

    // For anim stack overwrite system (the greater overwrite the lower)
    int priority; // Offset: 0x20

    // Define the offset for curve weight access, used for loop
    int offsetForCurve; // Offset: 0x24

    int beginOffset; // Offset: 0x28

    int endOffset; // Offset: 0x2C

    // All markers of the clip
    idStaticList < idMidnightAnimMarker , 8 , false , TAG_IDLIST > markerList; // Offset: 0x30

    // All ARK_MDNT_HARD_CUT markers of the clip
    idList < idMidnightAnimMarker , TAG_IDLIST , false > hardCutMarkers; // Offset: 0xA8

    // Body part to play anim
    md6WeightGroup_t bodyPart; // Offset: 0xC0

    // Curve use for anim weight
    idCurveTangent < float , float >* weightCurve; // Offset: 0xC8

    // Blendtime for animation origin (0 = teleport, above will shift model into correct position)
    idTypesafeTime < int , millisecondUnique_t , 1000 > animationOriginBlendTime; // Offset: 0xD0

    // Anim clip flags
    idMidnightAnimClipFlags_t animClipFlags; // Offset: 0xD4

    // True if this is the main clip of the track.
    bool isMainClip; // Offset: 0x0

    // True if this should scale entity model it's played on with scale set in animation
    bool scaleModelWithAnim; // Offset: 0x0

    // True if model should be played from world position stored in animation
    bool useAnimationOrigin; // Offset: 0x0

    // True if the model should be played using the animation's relative offset, rather than in-place
    bool usePerfectPlacement; // Offset: 0x0

    // True if clip should be blended out when possible (or new encounters of this clip should update keys)
    bool shouldBlend; // Offset: 0x0

    // Makes the entity visible when the animation starts.
    bool showOnStart; // Offset: 0x0

    // Makes the entity hidden when the animation ends.
    bool hideOnEnd; // Offset: 0x0

}; // Size: 0xE0
