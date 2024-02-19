struct idObjectiveData_t
{
    // 4 bytes
    idDeclObjective* majorDecl; // Offset: 0x0

    // 4 bytes
    objectiveStatus_t majorStatus; // Offset: 0x8

    int majorCount; // Offset: 0xC

    // 40 bytes
    idDeclObjective* minorDecls[10]; // Offset: 0x10

    // 40 bytes
    objectiveStatus_t minorStatus[10]; // Offset: 0x60

    // 40 bytes
    int minorCount[10]; // Offset: 0x88

    // 4 bytes
    int numMinor; // Offset: 0xB0

}; // Size: 0xB8
