struct throughSquareData_t
{
    // the width of the square we are using
    float width; // Offset: 0x0

    // the height of the square we are using
    float height; // Offset: 0x4

    // the offset we are using from the breakable
    idVec3 offset; // Offset: 0x8

    // if true offset the square from the owner instead of the breakable pos
    bool offsetFromOwner; // Offset: 0x14

    // use the owner access to orient the square.
    bool inheritParentTransform; // Offset: 0x15

}; // Size: 0x18
