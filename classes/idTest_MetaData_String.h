struct idTest_MetaData_String : idBloatedEntity
{
    enum metaDataStringEnum_t : int
    {
        VALUE_1 = 0,
        VALUE_2 = 1,
        VALUE_3 = 2
    };

    // enum variable
    idTest_MetaData_String::metaDataStringEnum_t testEnum; // Offset: 0xB88

    // string variable
    idStr testString; // Offset: 0xB90

    // entityDef variable
    idDeclEntityDef* testEntityDef; // Offset: 0xBC0

    // float variable
    float testFloat; // Offset: 0xBC8

    // bool variable
    bool testBool; // Offset: 0xBCC

}; // Size: 0xBD0
