struct idTypeInfoTree
{
    typedef void (*nodeCallback)(idTypeInfoNode * _node , idTypeInfoTree * _tree , void * _userData);

    idTypeInfoNode* root; // Offset: 0x0

    idList < idTypeInfoNode * , TAG_TYPEINFO , false > nodeList; // Offset: 0x8

    idList < idTypeInfoPath , TAG_TYPEINFO , false > pathList; // Offset: 0x20

    bool emulateFS_WriteFloatStringFormat; // Offset: 0x38

}; // Size: 0x40
