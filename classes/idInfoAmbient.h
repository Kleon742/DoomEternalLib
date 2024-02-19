struct idInfoAmbient : idInfo
{
    struct overrideColors_t
    {
        // override color for editor east [+x]
        idColor editorEast; // Offset: 0x0

        // override color for editor west [-x]
        idColor editorWest; // Offset: 0x10

        // override color for editor north [+y]
        idColor editorNorth; // Offset: 0x20

        // override color for editor south [-y]
        idColor editorSouth; // Offset: 0x30

        // override color for editor up [+z]
        idColor editorUp; // Offset: 0x40

        // override color for editor down [-z]
        idColor editorDown; // Offset: 0x50

    }; // Size: 0x60

    // a multiplicative scale used when building ambient node colors
    float ambientScale; // Offset: 0xB90

    // a multiplicative scale for saturation used when building ambient node colors
    float saturation; // Offset: 0xB94

    // override colors for the six ambient channels [editor directions +x, -x, +y, -y, +z, -z respectively]
    idInfoAmbient::overrideColors_t ambientOverrideColors; // Offset: 0xB98

}; // Size: 0xBF8
