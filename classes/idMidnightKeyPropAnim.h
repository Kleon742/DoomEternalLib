struct idMidnightKeyPropAnim : idMidnightKeyProperties
{
    typedef idPair < int , int > markerTimesUpdate;

    // Indicate the alias name of the animation
    idAtomicString AnimName; // Offset: 0x10

    // Time (in anim time) to start playing (too cut the beginning of the anim)
    idTypesafeTime < int , millisecondUnique_t , 1000 > startOffset; // Offset: 0x18

    // Time (in anim time) to strop playing (too cut the end of the anim)
    idTypesafeTime < int , millisecondUnique_t , 1000 > endOffset; // Offset: 0x1C

    // List of marker associate with time
    idStaticList < idMidnightAnimMarkerInfo_t , 6 , false , TAG_IDLIST > lMarker; // Offset: 0x20

    // List of hard cut markers
    idList < idMidnightAnimMarkerInfo_t , TAG_IDLIST , false > hardCutMarkers; // Offset: 0xC8

    // Define the body part of the animation
    md6WeightGroup_t bodyPart; // Offset: 0xE0

    // Blendtime for animation origin (0 = teleport, above will shift model into correct position)
    idTypesafeTime < int , millisecondUnique_t , 1000 > animationOriginBlendTime; // Offset: 0xE4

    // Flag options for this key
    idMidnightAnimClipFlags_t animClipFlags; // Offset: 0xE8

    // indicate if this is the main clip of the track
    bool isMainClip; // Offset: 0xEC

    // indicate if the animation is stretched
    bool isStretched; // Offset: 0xED

    // Scale entity model it's played on with scale set in animation
    bool scaleModelWithAnim; // Offset: 0xEE

    // If the origin stored in the animation should be used as start position
    bool useAnimationOrigin; // Offset: 0xEF

    // Use perfect placement while playing the animation, makes sure the model is placed exactly as the animation indicates
    bool usePerfectPlacement; // Offset: 0xF0

    // weight curve
    idCurveTangent < float , float > weightCurveTangent; // Offset: 0xF8

    // Makes the entity visible when the animation starts.
    bool showOnStart; // Offset: 0x160

    // Makes the entity hidden when the animation ends.
    bool hideOnEnd; // Offset: 0x161

}; // Size: 0x168
