struct idEyeInfoCollection
{
    // current handle for eye infos
    unsigned short curHandle; // Offset: 0x0

    // list all eye infos in this collection
    idList < idEyeInfo , TAG_IDLIST , false > eyeInfos; // Offset: 0x8

}; // Size: 0x20
