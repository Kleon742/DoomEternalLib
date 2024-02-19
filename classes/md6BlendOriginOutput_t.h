struct md6BlendOriginOutput_t
{
    float deltaRotation[4]; // Offset: 0x0

    float deltaScale[4]; // Offset: 0x10

    // {{ units = m }}
    float deltaTranslation[4]; // Offset: 0x20

    // current rotation of the origin
    float animRotation[4]; // Offset: 0x30

    // current scale of the origin
    float animScale[4]; // Offset: 0x40

    // current translation of the origin {{ units = m }}
    float animTranslation[4]; // Offset: 0x50

    // so we can track which anim this came from
    idMD6AnimData* animData; // Offset: 0x60

    unsigned int pad[2]; // Offset: 0x68

}; // Size: 0x70
