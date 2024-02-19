struct idLogicNodeModelEntityAxisDir : idLogicNodeModel
{
    enum outputType_t : int
    {
        FORWARD_OUTPUT = 0,
        LEFT_OUTPUT = 1,
        UP_OUTPUT = 2
    };

    // Output type
    idLogicNodeModelEntityAxisDir::outputType_t outputType; // Offset: 0x10

}; // Size: 0x18
