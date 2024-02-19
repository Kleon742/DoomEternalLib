struct idLogicNodeModelClass_v2 : idLogicNodeModel
{
    struct parameterInputBinding_t
    {
        unsigned int flowInputId; // Offset: 0x0

        unsigned int variableInputId; // Offset: 0x4

    }; // Size: 0x8

    struct instanceData_t
    {
    }; // Size: 0x8

    // Class parameters
    logicClassParameters_t class; // Offset: 0x10

    idList < idLogicNodeModelClass_v2::parameterInputBinding_t , TAG_LOGIC , false > parameterInputBindings; // Offset: 0x30

}; // Size: 0x48
