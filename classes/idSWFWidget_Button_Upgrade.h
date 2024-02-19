struct idSWFWidget_Button_Upgrade : idSWFWidget_Button_Lockable
{
    idDeclPerk* upgrade; // Offset: 0x2B0

    bool active; // Offset: 0x2B8

    bool enabled; // Offset: 0x2B9

    int cost; // Offset: 0x2BC

    idList < idStr , TAG_IDLIST , false > iconSpritePath; // Offset: 0x2C0

}; // Size: 0x2D8
