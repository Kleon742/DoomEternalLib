struct logicProperty_t
{
    unsigned int id; // Offset: 0x0

    idStr name; // Offset: 0x8

    idStr description; // Offset: 0x38

    idTypeInfoObjectPtr < idLogicVariableModel > value; // Offset: 0x68

}; // Size: 0x78
