struct idAutomapCamera
{
    idAutomapCameraTransform_t transform; // Offset: 0x0

    idAutomapCameraTransform_t desiredTransform; // Offset: 0x18

    idBounds viewFocusBounds; // Offset: 0x30

    idVec2 zoomBounds; // Offset: 0x48

    bool disablePan; // Offset: 0x50

    // cached
    idMat3 viewAxis; // Offset: 0x54

}; // Size: 0x78
