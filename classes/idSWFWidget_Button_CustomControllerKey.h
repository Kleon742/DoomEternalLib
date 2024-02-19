struct idSWFWidget_Button_CustomControllerKey : idSWFWidget_Button
{
    idSWFWidget_MarqueeText* marqueeLabel; // Offset: 0x2A0

    keyNum_t key; // Offset: 0x2A8

    idStr bindText; // Offset: 0x2B0

    idStr displayText; // Offset: 0x2E0

    swfPlatform_t currentPlatform; // Offset: 0x310

    swfPlatform_t gamepadPlatform; // Offset: 0x314

    bool isLeft; // Offset: 0x318

    bool isSwapping; // Offset: 0x319

    bool isLocked; // Offset: 0x31A

}; // Size: 0x320
