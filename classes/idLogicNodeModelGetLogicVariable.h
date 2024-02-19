struct idLogicNodeModelGetLogicVariable : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_VARIABLE_CONTAINER = 0,
        OUTPUT_BOOL = 1,
        OUTPUT_INTEGER = 2,
        OUTPUT_FLOAT = 3,
        OUTPUT_VEC3 = 4,
        OUTPUT_ENTITY = 5
    };

    // bool output
    bool boolOut; // Offset: 0x10

    // int output
    int integerOut; // Offset: 0x14

    // float output
    float floatOut; // Offset: 0x18

    // vector output
    idVec3 vec3Out; // Offset: 0x1C

}; // Size: 0x28
