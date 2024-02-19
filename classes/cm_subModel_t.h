struct cm_subModel_t
{
    // header used when the sub-model data is not resident
    cm_subModelHeader_t header; // Offset: 0x0

    // may be NULL if !valid
    cm_subModelData_t* data; // Offset: 0x20

    // offset to the sub-model data in the stream file
    int fileOffset; // Offset: 0x28

    // number of collision queries using the sub-model data
    interlockedInt_t numUsers; // Offset: 0x2C

    char* state; // Offset: 0x30

    unsigned char pad[4]; // Offset: 0x38

}; // Size: 0x40
