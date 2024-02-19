struct goredPiecesInUse_t
{
    // initial gib joint axis so we have a valid axis after we zero it out
    idQuat initialGibJointAxis; // Offset: 0x0

    // initial gib joint pos so we have a valid pos after we zero it out {{ units = m }}
    idVec3 initialGibJointPos; // Offset: 0x10

    idVec3 impulse; // Offset: 0x1C

    // number of frames this gib has been around
    int frameCountSinceSpawn; // Offset: 0x28

    // for testing collision cloth against ground
    idHavokQueryId clipQuery; // Offset: 0x30

    int gibStartTimeMS; // Offset: 0x38

    int nextSprayTimeMS; // Offset: 0x3C

    bloodTrail_t smearMarks; // Offset: 0x40

    // index into the editable gib data
    char goreIndex; // Offset: 0xA0

    // whether or not the gib mesh has been spawned yet
    bool gibMeshSpawned; // Offset: 0xA1

    bool activated; // Offset: 0xA2

    bool bloodPoolSpawned; // Offset: 0xA3

}; // Size: 0xA8
