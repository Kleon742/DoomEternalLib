struct idMenuElement : idUIElement
{
    bool isHiding; // Offset: 0xC8

    bool isShowing; // Offset: 0xC9

    bool startedHide; // Offset: 0xCA

    bool showChildrenOnShow; // Offset: 0xCB

    bool hideChildrenOnHide; // Offset: 0xCC

    idDeclMenuElement* decl; // Offset: 0xD0

    idMenu* menu; // Offset: 0xD8

    int backScreen; // Offset: 0xE0

    idList < idStr , TAG_IDLIST , false > extraScreenPath; // Offset: 0xE8

}; // Size: 0x100
