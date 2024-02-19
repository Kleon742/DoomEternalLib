struct idHUDElement : idUIElement
{
    // decl information for this Hud Element.
    idDeclHUDElement* decl; // Offset: 0xC8

    // HUD broadcast system ID
    uint16 hudSysId; // Offset: 0xD0

    // Player broadcast system ID
    uint16 playerSysId; // Offset: 0xD2

    // Tag data for the HUD element.
    tagData_t tagData; // Offset: 0xD4

    // Is the element faded in correctly
    bool isFaded; // Offset: 0xF4

}; // Size: 0xF8
