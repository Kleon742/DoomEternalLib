struct logicEntityNameShared_t
{
    interlockedInt_t referenceCount; // Offset: 0x0

    idStrEntity value; // Offset: 0x8

    int hashKey; // Offset: 0x38

    int index; // Offset: 0x3C

}; // Size: 0x40
