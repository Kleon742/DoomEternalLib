struct scoreDataSet_t
{
    int intialScore; // Offset: 0x0

    int finalScore; // Offset: 0x4

    int difficulty; // Offset: 0x8

    scoreItemEventData_t scoreItems[8]; // Offset: 0xC

}; // Size: 0x6C
