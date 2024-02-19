struct idCompassWidgetInfo
{
    idDeclPOI* decl; // Offset: 0x0

    idList < idSWFWidget * , TAG_MENU , false > widgets; // Offset: 0x8

    int generatedThisFrame; // Offset: 0x20

}; // Size: 0x28
