struct aiActionAnimationInfo_t
{
    // web node to go through on way to viaNode (may be NULL)
    idAnimWebPath_Atomic viaNode; // Offset: 0x0

    // web node to path to
    idAnimWebPath_Atomic destNode; // Offset: 0x40

    // optional -- if specified, use via node for validation purposes but direct web through into node during attack
    idAnimWebPath_Atomic intoNode; // Offset: 0x80

    // anim index of anim in node, for nodes with multiple attacks
    int animIndex; // Offset: 0xC0

}; // Size: 0xC8
