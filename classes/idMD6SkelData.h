struct idMD6SkelData
{
    struct skelRemapEntry_t
    {
        idHandle < unsigned short , invalidCrc_t , INVALID_CRC > srcCrc; // Offset: 0x0

        unsigned short jointStartOffset; // Offset: 0x2

    }; // Size: 0x4

    // the allocated size of the skeleton
    unsigned short size; // Offset: 0x0

    // the number of joints in the skeleton
    unsigned short numJoints; // Offset: 0x2

    // number of user channels
    unsigned short numUserChannels; // Offset: 0x4

    // CRC used to verify animations are loaded / played on the correct mesh
    idHandle < unsigned short , invalidCrc_t , INVALID_CRC > parentTblCrc; // Offset: 0x6

    // offset of the base pose data (stores as R/S/T streams)
    unsigned short basePoseOffset; // Offset: 0x8

    // offset of the inverted base pose data (stored as 3x4 matricies)
    unsigned short inverseBasePoseOffset; // Offset: 0xA

    // offset of the table with the parent for each joint
    unsigned short parentTblOffset; // Offset: 0xC

    // offset of the table with the last child index for each joint
    unsigned short lastChildTblOffset; // Offset: 0xE

    // offset of the table with a handle for each joint
    unsigned short jointHandleTblOffset; // Offset: 0x10

    // offset of the table with a handle for each user channel
    unsigned short userChannelHandleTblOffset; // Offset: 0x12

    // offsets of joint weights for each weight set
    unsigned short jointWeightOffsets[8]; // Offset: 0x14

    // offsets of user weights for each user weight set
    unsigned short userWeightOffsets[8]; // Offset: 0x24

    // offset of the table with the index of each dynamic joint
    unsigned short extraJointTblOffset; // Offset: 0x34

    // offset of the table containing skeleton remap info
    unsigned short skelRemapTblOffset; // Offset: 0x36

    // the size of the skeleton BEFORE reallocating for dynamic data (remap table)
    unsigned short loadedDataSize; // Offset: 0x38

    // pad to 16 bit multiple
    unsigned char pad[6]; // Offset: 0x3A

}; // Size: 0x40
