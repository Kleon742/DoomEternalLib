struct playerCoverPoint_t
{
    // position of the cover point in world space
    idVec3 pos; // Offset: 0x0

    // index of the cover point, if this point is an actual cover point
    int coverIndex; // Offset: 0xC

    // allow leaning from this point
    bool lean; // Offset: 0x0

    // true if this represents a valid point on a cover edge (though it may not represent a actual cover point, just the end of the cover edge)
    bool valid; // Offset: 0x0

}; // Size: 0x14
