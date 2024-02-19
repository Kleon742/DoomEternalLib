struct idPlatformCVarValue
{
    struct platformCVarValueData_t
    {
        char* parentCVar; // Offset: 0x0

        char* value; // Offset: 0x8

        hardwarePlatformFlags_t mask; // Offset: 0x10

        idStr originalParentValue; // Offset: 0x18

    }; // Size: 0x48

    idPlatformCVarValue::platformCVarValueData_t* data; // Offset: 0x0

    idPlatformCVarValue::platformCVarValueData_t dataStorage; // Offset: 0x8

    idPlatformCVarValue* next; // Offset: 0x50

}; // Size: 0x58
