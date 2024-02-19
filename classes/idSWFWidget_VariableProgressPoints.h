struct idSWFWidget_VariableProgressPoints : idSWFWidget
{
    idArray < idSWFWidget * , 5 > points; // Offset: 0x180

    int pointCount; // Offset: 0x1A8

    int previousFrame; // Offset: 0x1AC

    int frame; // Offset: 0x1B0

    int animatingPointIndex; // Offset: 0x1B4

}; // Size: 0x1B8
