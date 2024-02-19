struct idSWFWidget_ControllerCustomLayout : idSWFWidget
{
    struct layoutData_t
    {
        int bindset; // Offset: 0x0

        idList < keyNum_t , TAG_IDLIST , false > keys; // Offset: 0x8

        idList < idStr , TAG_IDLIST , false > bindActions; // Offset: 0x20

        idList < idStr , TAG_IDLIST , false > displayStrings; // Offset: 0x38

    }; // Size: 0x50

    idSWFWidget_List* leftList; // Offset: 0x180

    idSWFWidget_List* rightList; // Offset: 0x188

    idSWFWidget_List* centerLeftList; // Offset: 0x190

    idSWFWidget_List* centerRightList; // Offset: 0x198

    idSWFWidget* swapDesc; // Offset: 0x1A0

    idSWFWidget* unboundDesc; // Offset: 0x1A8

    idArray < idSWFWidget_Button_CustomControllerKey * , 10 > leftButtons; // Offset: 0x1B0

    idArray < idSWFWidget_Button_CustomControllerKey * , 10 > rightButtons; // Offset: 0x200

    idArray < idSWFWidget_Button_CustomControllerKey * , 2 > centerLeftButtons; // Offset: 0x250

    idArray < idSWFWidget_Button_CustomControllerKey * , 2 > centerRightButtons; // Offset: 0x260

    idDict allBinds; // Offset: 0x270

    idSWFWidget_ControllerCustomLayout::layoutData_t data; // Offset: 0x2B8

    swfPlatform_t gamepadPlatform; // Offset: 0x308

    idSWFWidget_Button_CustomControllerKey* swapButton; // Offset: 0x310

    bool changed; // Offset: 0x318

    idSWFWidget_Button_CustomControllerKey* tempButton1; // Offset: 0x320

    idSWFWidget_Button_CustomControllerKey* tempButton2; // Offset: 0x328

}; // Size: 0x330
