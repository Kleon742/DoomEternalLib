struct idMidnightOutInfo : idClass
{
    // UID for the output point
    idMidnightObjectUID < idMidnightPointUIDType , 4095 > uid; // Offset: 0x10

    // Indicate the name of the out point
    idMidnightOutName name; // Offset: 0x18

    // Indicate the next info of the out point
    idMidnightGraphNextInfo nextInfo; // Offset: 0x20

}; // Size: 0x28
