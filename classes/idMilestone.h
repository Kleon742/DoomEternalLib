struct idMilestone
{
    // Decl that this milestone is using.
    idDeclMilestone* decl; // Offset: 0x0

    // current count of the stat that has been gained.
    int statCount; // Offset: 0x8

    // has been completed.
    bool complete; // Offset: 0xC

}; // Size: 0x10
