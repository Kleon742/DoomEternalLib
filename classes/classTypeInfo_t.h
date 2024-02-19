struct classTypeInfo_t
{
    char* name; // Offset: 0x0

    char* superType; // Offset: 0x8

    int size; // Offset: 0x10

    classVariableInfo_t* templateParms; // Offset: 0x18

    classVariableInfo_t* variables; // Offset: 0x20

    unsigned long long* variableNameHashes; // Offset: 0x28

    idClass* (*createInstance)(); // Offset: 0x30

    idRenderModel* (*createModel)(const class idDeclModelAsset * modelAsset , const uint32 createFlags); // Offset: 0x38

    classMetaDataInfo_t* metaData; // Offset: 0x40

}; // Size: 0x48
