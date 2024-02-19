struct idLogicNodeModelComment : idLogicNodeModel
{
    // Header title
    idStr headerTitle; // Offset: 0x10

    // Body text
    idStr bodyText; // Offset: 0x40

    // Header fill color
    idColor headerFillColor; // Offset: 0x70

    // Header title color
    idColor headerTitleColor; // Offset: 0x80

    // Body fill color
    idColor bodyFillColor; // Offset: 0x90

    // Body text color
    idColor bodyTextColor; // Offset: 0xA0

}; // Size: 0xB0
