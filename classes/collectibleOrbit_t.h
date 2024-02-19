struct collectibleOrbit_t
{
    // min / max movement values
    collectibleClampValues_t clampValues; // Offset: 0x0

    // Speeds for Joystick controls.
    collectibleInputSpeeds_t joystickSpeeds; // Offset: 0x20

    // Speeds for Mouse controls.
    collectibleInputSpeeds_t mouseSpeeds; // Offset: 0x38

}; // Size: 0x50
