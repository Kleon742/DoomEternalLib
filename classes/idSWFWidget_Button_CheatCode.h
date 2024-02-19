struct idSWFWidget_Button_CheatCode : idSWFWidget_Button_Lockable
{
    enum cheatCodeState : int
    {
        CHEATCODE_STATE_INVALID = 0,
        CHEATCODE_STATE_INACTIVE = 1,
        CHEATCODE_STATE_ACTIVE = 2,
        CHEATCODE_STATE_NOT_AVAILABLE = 3
    };

    idDeclUIDataGroup::uiData_t* uiData; // Offset: 0x2B0

    idSWFWidget_Button_CheatCode::cheatCodeState state; // Offset: 0x2B8

    idStrId emptyString; // Offset: 0x2BC

}; // Size: 0x2C0
