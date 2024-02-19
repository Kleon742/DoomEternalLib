struct idDeclRig : idDeclTypeInfo
{
    typedef idTypeInfoObjectPtr < idRigComponent > rigObjPtr_t;

    // the skeleton file name
    idMD6SkelRef skeleton; // Offset: 0x88

    // component list
    idList < idTypeInfoObjectPtr < idRigComponent > , TAG_IDLIST , false > components; // Offset: 0x90

}; // Size: 0xA8
