struct inputSettings_t
{
    bindSet_t bindset; // Offset: 0x0

    // ratio to scale the angles sensitivity
    float sensitivity; // Offset: 0x4

    float joyPitchSpeed; // Offset: 0x8

    float joyYawSpeed; // Offset: 0xC

    float mouseSens; // Offset: 0x10

    // if > 0, sets the max yaw change per frame when using a mouse
    float mouseYawClamp; // Offset: 0x14

    // if > 0, sets the max pitch change per frame when using a mouse
    float mousePitchClamp; // Offset: 0x18

    bool lookInvertJoy; // Offset: 0x1C

    bool lookInvertMouse; // Offset: 0x1D

    // swaps 'move' and 'look' functionality for the sticks
    bool swapMoveLookSticks; // Offset: 0x1E

}; // Size: 0x20
