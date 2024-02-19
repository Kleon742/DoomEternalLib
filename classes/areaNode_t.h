struct areaNode_t
{
    int planeAxis; // Offset: 0x0

    float planeDist; // Offset: 0x4

    // negative numbers are (-1 - areaNumber), 0 = solid
    int children[2]; // Offset: 0x8

}; // Size: 0x10
