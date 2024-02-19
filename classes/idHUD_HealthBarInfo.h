struct idHUD_HealthBarInfo
{
    idVec3 worldPosition; // Offset: 0x0

    idVec2 screenPosition; // Offset: 0xC

    idSWFWidget* widget; // Offset: 0x18

    float scale; // Offset: 0x20

    float alpha; // Offset: 0x24

    float barPercent; // Offset: 0x28

    float originalWidth; // Offset: 0x2C

    float originalHeight; // Offset: 0x30

}; // Size: 0x38
