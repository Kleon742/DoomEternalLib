struct idHttpStats
{
    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > beginSending; // Offset: 0x0

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > endSending; // Offset: 0x8

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > startReceiving; // Offset: 0x10

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > finishReceiving; // Offset: 0x18

}; // Size: 0x20
