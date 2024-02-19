struct objHeader_t
{
    // Tag used for making sure that header output from obj job, is the same header loaded in delta compress job
    int tag; // Offset: 0x0

    // Id of object.
    int objID; // Offset: 0x4

    // snapSequence from object state
    int snapSequence; // Offset: 0x8

    // resourceID of object, used to find the correct template.
    unsigned long long resourceID; // Offset: 0x10

    // Size data object holds (will be 0 if the obj is being deleted)
    int size; // Offset: 0x18

    // Size after zrle compression
    int csize; // Offset: 0x1C

    // Flags used to communicate state from obj job to delta copmress job
    unsigned int flags; // Offset: 0x20

    // Data ptr to obj memory
    unsigned char* data; // Offset: 0x28

}; // Size: 0x30
