struct idSWFWidget_Button_RuneSlot : idSWFWidget_Button_Lockable
{
    idDeclPerk* rune; // Offset: 0x2B0

    idDeclPerk* mastery; // Offset: 0x2B8

    bool mastered; // Offset: 0x2C0

    bool isSlot; // Offset: 0x2C1

    bool isDisabled; // Offset: 0x2C2

    int index; // Offset: 0x2C4

    int lockCount; // Offset: 0x2C8

    idStrId name; // Offset: 0x2CC

    idStr desc; // Offset: 0x2D0

    idSWFWidgetState_t prevWidgetState; // Offset: 0x300

}; // Size: 0x308
