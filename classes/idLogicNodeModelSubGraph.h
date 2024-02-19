struct idLogicNodeModelSubGraph : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    // Name
    idStr name; // Offset: 0x10

    // Header fill color
    idColor headerFillColor; // Offset: 0x40

    // Header title color
    idColor headerTitleColor; // Offset: 0x50

    // Body fill color
    idColor bodyFillColor; // Offset: 0x60

}; // Size: 0x70
