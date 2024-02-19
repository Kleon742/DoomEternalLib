struct idMainMenu_Popup_KeyBindings : idMenuElement
{
    struct demonData_t
    {
        idStr declName; // Offset: 0x0

        idStrId displayName; // Offset: 0x30

        idStr bindingAppend; // Offset: 0x38

        bindSet_t bindset; // Offset: 0x68

    }; // Size: 0x70

    struct bindUpdateNotice_t
    {
        keyNum_t key; // Offset: 0x0

        idStr bind; // Offset: 0x8

        // if false, was removed
        bool wasAdded; // Offset: 0x38

    }; // Size: 0x40

    idSWFWidget_SectionList* list; // Offset: 0x100

    idSWFWidget* waitingForKey; // Offset: 0x108

    idSWFWidget* bindUpdateNotice; // Offset: 0x110

    idSWFWidget_Button* btnDemonType; // Offset: 0x118

    idSWFWidget_Button* btnDemonMode; // Offset: 0x120

    idSWFWidget_DropDownList* dropDownList; // Offset: 0x128

    bool showDemonLayouts; // Offset: 0x130

    bool isInvasion; // Offset: 0x131

    idList < idMainMenu_Popup_KeyBindings::demonData_t , TAG_IDLIST , false > demonList; // Offset: 0x138

    int activeDemonIndex; // Offset: 0x150

    idStr waitingInfo_action; // Offset: 0x158

    bool waitingInfo_isSecondary; // Offset: 0x188

    bool changed; // Offset: 0x189

    idList < idMainMenu_Popup_KeyBindings::bindUpdateNotice_t , TAG_IDLIST , false > queuedBindUpdates; // Offset: 0x190

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > bindUpdateNoticeEndTime; // Offset: 0x1A8

}; // Size: 0x1B0
