struct tooltipImage_t
{
    idStr uniqueName; // Offset: 0x0

    idStr key; // Offset: 0x30

    idMaterial2* material; // Offset: 0x60

    int width; // Offset: 0x68

    int height; // Offset: 0x6C

    int baseline; // Offset: 0x70

    swfPlatform_t platform; // Offset: 0x74

    bool unique; // Offset: 0x78

}; // Size: 0x80
