struct idAutomapCamera_t
{
    // x - horizontal pan, y - vertical pan
    idVec2 pan; // Offset: 0x0

    // Zoom of the camera
    float zoom; // Offset: 0x8

    // yaw/pitch/roll of rotation
    idAngles rotation; // Offset: 0xC

}; // Size: 0x18
