struct idDeclAutomapProperties : idGameDeclTypeInfo
{
    struct zoomScalingParms
    {
        // scale at minimum
        idVec3 scaleMin; // Offset: 0x0

        // scale at maximum
        idVec3 scaleMax; // Offset: 0xC

        // min scale distance
        float minDistance; // Offset: 0x18

        // max scale distance
        float maxDistance; // Offset: 0x1C

    }; // Size: 0x20

    // Icon color when revealed
    idColor revealedColor; // Offset: 0x90

    // Icon color when discovered
    idColor discoveredColor; // Offset: 0xA0

    // Icon color when collected
    idColor completedColor; // Offset: 0xB0

    // Should this entity be a billboard on the Automap
    bool billboard; // Offset: 0xC0

    // Whether or not this object is discoverable before being collected
    bool discoverableBeforeCollected; // Offset: 0xC1

    // If true, once collected this icon is always discovered in future playthroughs
    bool persistentDiscoveredAfterCollected; // Offset: 0xC2

    // enable zoom scaling
    bool useZoomScaling; // Offset: 0xC3

    // zoom scale info
    idDeclAutomapProperties::zoomScalingParms zoomScaleParms; // Offset: 0xC4

    // model scale (if useZoomScaling is false)
    idVec3 automapScale; // Offset: 0xE4

    // What icon to use for the Automap
    idMaterial2* automapMaterial; // Offset: 0xF0

    // What Rendermodel to use for the entity
    idStrRenderModel automapRenderModel; // Offset: 0xF8

    // What icon to use for the Automap when the object is in a discovered state
    idMaterial2* automapDiscoveredMaterial; // Offset: 0x100

    // What Rendermodel should we use when this entity is discovered?
    idStrRenderModel automapDiscoveredRenderModel; // Offset: 0x108

    // offset the origin
    idVec3 originOffset; // Offset: 0x110

    // Radius checked against for object revealing
    float objectRadius; // Offset: 0x11C

    // Whenever this object is revealed, reveal the Fog of War as not-traversed around the object. Set to 0.0f to not use
    float fogOfWarRevealRadiusNotTraversed; // Offset: 0x120

    // Whenever this object is revealed, reveal the Fog of War as traversed around the object. Set to 0.0f to not use
    float fogOfWarRevealRadiusTraversed; // Offset: 0x124

    // On object reveal, how many meters in vertical dimension to reveal. Typical map has 10 tiles stretched over vertical dimension
    float fogOfWarVerticalReveal; // Offset: 0x128

}; // Size: 0x130
