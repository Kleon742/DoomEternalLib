struct fkTrackingParms_t
{
    // tracking parameters
    trackingParms_t parms; // Offset: 0x0

    // angle range that tracking is clamped to
    idRotationTrackerRange trackerRange; // Offset: 0x10

    // name of this parms
    idAtomicString name; // Offset: 0x38

    // default tag for orientation
    idAtomicString default_orientationTag; // Offset: 0x40

    // default tag for orientation
    idAtomicString default_focusTag; // Offset: 0x48

    // override time it should take tracker animator to blend in
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendInTime; // Offset: 0x50

    // override time it should take tracker animator to blend in
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendOutTime; // Offset: 0x54

    // if positive, range at which tracking parms apply as-is, otherwise scale accordingly {{ units = m }}
    float idealRange; // Offset: 0x58

}; // Size: 0x60
