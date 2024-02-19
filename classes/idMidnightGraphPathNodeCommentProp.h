struct idMidnightGraphPathNodeCommentProp : idMidnightGraphPathNodeProp
{
    // The inside color of the node
    idColor fillColor; // Offset: 0x18

    // The thickness of the border
    int borderThickness; // Offset: 0x28

    // The color of the border
    idColor borderColor; // Offset: 0x2C

    // The text displayed outside of the node
    idStr outsideText; // Offset: 0x40

    // The outside text color
    idColor outsideTextColor; // Offset: 0x70

    // The text displayed inside the node
    idStr insideText; // Offset: 0x80

    // The inside text color
    idColor insideTextColor; // Offset: 0xB0

}; // Size: 0xC0
