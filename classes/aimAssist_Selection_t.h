struct aimAssist_Selection_t
{
    // The Maximum Distance away for a target to be considered for adhesion, friction and target lock-to {{ units = m }}
    float maxDistance; // Offset: 0x0

    // The Maximum angular separation from the aim axis (!! USED ONLY BY DEMON PLAYER !!)
    float maxDegrees; // Offset: 0x4

    // How far away from the reticle do we consider targeting. ( meters )
    float maxReticleDistance; // Offset: 0x8

    // Radius used to select targets for auto aiming {{ units = m }}
    float radius; // Offset: 0xC

    // Radius used to select targets when zoom target snapping {{ units = m }}
    float zoomSelectionRadius; // Offset: 0x10

    // Radius used to select targets when zoom target snapping from cover {{ units = m }}
    float coverZoomSelectionRadius; // Offset: 0x14

    // Radius used to select the head over the torso when zoom target snapping {{ units = m }}
    float headShotZoomSelectionRadius; // Offset: 0x18

}; // Size: 0x1C
