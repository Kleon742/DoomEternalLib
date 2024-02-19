struct seasonHistory_t
{
    // Can be empty if there is no season active
    idStr currentId; // Offset: 0x0

    idHashTable < idSharedPtr < seasonDefinition_t > , 4 > seasons; // Offset: 0x30

}; // Size: 0x50
