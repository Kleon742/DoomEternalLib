struct idLogicNodeModelClassOutputs : idLogicNodeModel
{
    struct parameterInputBinding_t
    {
        unsigned int flowInputId; // Offset: 0x0

        unsigned int variableInputId; // Offset: 0x4

    }; // Size: 0x8

    struct instanceData_t
    {
    }; // Size: 0x8

    idList < idLogicNodeModelClassOutputs::parameterInputBinding_t , TAG_LOGIC , false > parameterInputBindings; // Offset: 0x10

}; // Size: 0x28
