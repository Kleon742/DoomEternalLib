// idDataQueue < 28000 >
template <auto _N0_>
struct idDataQueue
{
    // idDataQueue < 28000 >::msgItem_t
    struct msgItem_t
    {
        int sequence; // Offset: 0x0

        int length; // Offset: 0x4

        int dataOffset; // Offset: 0x8

        bool removeOnSend; // Offset: 0xC

    }; // Size: 0x10

    idList < idDataQueue < _N0_ >::msgItem_t , TAG_IDLIST , false > items; // Offset: 0x0

    int dataLength; // Offset: 0x18

    unsigned char data[_N0_]; // Offset: 0x1C

    int warningSize; // Offset: 0x6D7C

}; // Size: 0x6D80
