struct idInfoDebugMarker : idInfo
{
    struct debugArrowInfo_t
    {
        // arrow color
        idColor color; // Offset: 0x0

        // arrow head size
        float arrowHeadSize; // Offset: 0x10

        // whether this should be used or not
        bool enabled; // Offset: 0x14

    }; // Size: 0x18

    struct debugMarkerSplineInfo_t
    {
        // blah
        float time; // Offset: 0x0

        // blah
        float tension; // Offset: 0x4

        // blah
        float continuity; // Offset: 0x8

        // blah
        float bias; // Offset: 0xC

    }; // Size: 0x10

    // next marker on golden progression path
    idManagedClassPtr < idInfoDebugMarker > nextMarker; // Offset: 0xB90

    // if enabled, use this arrow to point to all targets, overriden by any 'arrow for parents' in each target
    idInfoDebugMarker::debugArrowInfo_t arrowForTargets; // Offset: 0xBB0

    // if enabled, override the values of the arrow in an entity pointing at me
    idInfoDebugMarker::debugArrowInfo_t arrowForParents; // Offset: 0xBC8

    // data for how to render this spline value
    idInfoDebugMarker::debugMarkerSplineInfo_t splineInfo; // Offset: 0xBE0

    // if true, only display stuff when info_enableDebugMarkers is 1
    bool useWithCvar; // Offset: 0xBF0

    // easy way to disable these things without having to literally delete them from your map
    bool enabled; // Offset: 0xBF1

    // if true, start a spline from this marker
    bool startSpline; // Offset: 0xBF2

    // color for spline
    idColor splineColor; // Offset: 0xBF4

    // whether this is the first marker in the map or not
    bool firstMarker; // Offset: 0xC04

}; // Size: 0xC08
