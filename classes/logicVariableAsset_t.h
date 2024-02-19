struct logicVariableAsset_t
{
    // Unique identifier
    unsigned int id; // Offset: 0x0

    // Name
    idStr name; // Offset: 0x8

    // Description
    idStr description; // Offset: 0x38

    // Model
    idTypeInfoObjectPtr < idLogicVariableModel > model; // Offset: 0x68

}; // Size: 0x78
