struct idLogicNodeModelVariableInline : idLogicNodeModel
{
    enum logicIds_t : int
    {
        OUTPUT_VALUE = 0
    };

    // Name
    idStr name; // Offset: 0x10

    // Type name
    idStr typeName; // Offset: 0x40

}; // Size: 0x70
