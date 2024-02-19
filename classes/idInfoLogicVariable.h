struct idInfoLogicVariable : idInfo
{
    // bool value to pass to logic.
    bool boolValue; // Offset: 0xB90

    // integer value to pass to logic.
    int integerValue; // Offset: 0xB94

    // float value to pass to logic.
    float floatValue; // Offset: 0xB98

    // vec3 value to pass to logic.
    idVec3 vec3Value; // Offset: 0xB9C

    // entity to pass to logic.
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entityValue; // Offset: 0xBA8

}; // Size: 0xBC0
