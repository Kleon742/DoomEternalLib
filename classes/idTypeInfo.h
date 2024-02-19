struct idTypeInfo
{
    char* classname; // Offset: 0x0

    char* superclass; // Offset: 0x8

    void (idClass::*Spawn)(); // Offset: 0x10

    idClass* (*CreateInstance)(); // Offset: 0x28

    idClass* (*CreateCloneInstance)(const idClass * const object); // Offset: 0x30

    idClass* (*PlacementCreateInstance)(void * buffer , const size_t bufferSize); // Offset: 0x38

    void (*Destruct)(idClass * object); // Offset: 0x40

    void (*VerifyPrototypeMacro)(const idTypeInfo & typeInfo); // Offset: 0x48

    idTypeInfo* super; // Offset: 0x50

    idTypeInfo* next; // Offset: 0x58

    bool isAbstract; // Offset: 0x60

    bool initialized; // Offset: 0x61

    int size; // Offset: 0x64

    int typeNum; // Offset: 0x68

    int lastChild; // Offset: 0x6C

    idHierarchy < idTypeInfo > node; // Offset: 0x70

}; // Size: 0x90
