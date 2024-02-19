struct idTest_MetaData_Line : idBloatedEntity
{
    struct line_t
    {
        // left side, start, of point
        idVec3 leftSide; // Offset: 0x0

        // right side, end, of point
        idVec3 rightSide; // Offset: 0xC

    }; // Size: 0x18

    // lines to draw
    idList < idTest_MetaData_Line::line_t , TAG_IDLIST , false > lines; // Offset: 0xB88

}; // Size: 0xBA0
