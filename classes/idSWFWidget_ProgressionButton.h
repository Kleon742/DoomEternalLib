struct idSWFWidget_ProgressionButton : idSWFWidget_Button_Lockable
{
    idDeclPerk* upgrade; // Offset: 0x2B0

    bool active; // Offset: 0x2B8

    bool fullyComplete; // Offset: 0x2B9

    bool canPurchase; // Offset: 0x2BA

    float upgradeAngle; // Offset: 0x2BC

    swfNamedColors_t color; // Offset: 0x2C0

}; // Size: 0x2C8
