struct aiBountyData_t
{
    idManagedClassPtr < idAI2 > bountyAI; // Offset: 0x0

    aiMonsterType_t aiType; // Offset: 0x20

    // identifier for the poi that links to this demon
    int poiUid; // Offset: 0x28

    idVec3 lastEyePos; // Offset: 0x2C

}; // Size: 0x38
