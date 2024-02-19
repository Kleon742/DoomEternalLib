struct idHavokCollision
{
    idHavokPhysics* havokPhysics; // Offset: 0x0

    idQueryLists* queryLists; // Offset: 0x8

    int numHandles; // Offset: 0x10

    // first submitted last frame
    unsigned long long collisionQueryFirstSubmittedIndex; // Offset: 0x18

    // last submitted last frame or this frame
    unsigned long long collisionQueryLastSubmittedIndex; // Offset: 0x20

    // first allocated this frame
    unsigned long long collisionQueryFirstAllocedIndex; // Offset: 0x28

    // last allocated this frame
    unsigned long long collisionQueryLastAllocedIndex; // Offset: 0x30

    // last resolved this frame
    unsigned long long collisionQueryLastResolvedIndex; // Offset: 0x38

    // first submitted last frame
    unsigned long long gatherQueryFirstSubmittedIndex; // Offset: 0x40

    // last submitted last frame or this frame
    unsigned long long gatherQueryLastSubmittedIndex; // Offset: 0x48

    // first allocated this frame
    unsigned long long gatherQueryFirstAllocedIndex; // Offset: 0x50

    // last allocated this frame
    unsigned long long gatherQueryLastAllocedIndex; // Offset: 0x58

    // last resolved this frame
    unsigned long long gatherQueryLastResolvedIndex; // Offset: 0x60

    // first submitted last frame
    unsigned long long multiHitQueryFirstSubmittedIndex; // Offset: 0x68

    // last submitted last frame or this frame
    unsigned long long multiHitQueryLastSubmittedIndex; // Offset: 0x70

    // first allocated this frame
    unsigned long long multiHitQueryFirstAllocedIndex; // Offset: 0x78

    // last allocated this frame
    unsigned long long multiHitQueryLastAllocedIndex; // Offset: 0x80

    // last resolved this frame
    unsigned long long multiHitQueryLastResolvedIndex; // Offset: 0x88

    idHavokShapePointer defaultClipModel; // Offset: 0x90

    // special clip model with small bounds but big radius
    idHavokShapePointer playerMeleeClipModel; // Offset: 0x98

    idHavokShapePointer playerMeleeKampfhundGrappleClipModel; // Offset: 0xA0

    idHavokShapePointer playerRammbockClipModel; // Offset: 0xA8

    idHavokShapePointer playerTakedownCollisionCheck; // Offset: 0xB0

    idHavokShapePointer playerProneTakedownCollisionCheck; // Offset: 0xB8

    idHavokShapePointer clipProneCheck; // Offset: 0xC0

    idHavokShapePointer clipHandIKCheck; // Offset: 0xC8

    idHavokShapePointer clipLowerArm; // Offset: 0xD0

    idHavokShapePointer clipWeaponTrace; // Offset: 0xD8

    idHavokShapePointer clipDroneSphere; // Offset: 0xE0

    idHavokShapePointer clipPoint; // Offset: 0xE8

    idHavokShapePointer clip4x8; // Offset: 0xF0

    idHavokShapePointer clip6x9; // Offset: 0xF8

    idHavokShapePointer clip8x8; // Offset: 0x100

    idHavokShapePointer clip16x16; // Offset: 0x108

    idHavokShapePointer clip24x24; // Offset: 0x110

    idHavokShapePointer clip32x32; // Offset: 0x118

    idHavokShapePointer clip8x16; // Offset: 0x120

    idHavokShapePointer clip8x16x8; // Offset: 0x128

    idHavokShapePointer clip48x48; // Offset: 0x130

    idHavokShapePointer clip64x64; // Offset: 0x138

    idHavokShapePointer clip96x96; // Offset: 0x140

    idHavokShapePointer clip24x24x96; // Offset: 0x148

    idHavokShapePointer clip32x32x96; // Offset: 0x150

    idHavokShapePointer clip48x48x96; // Offset: 0x158

    idHavokShapePointer clip32x32x1; // Offset: 0x160

    idHavokShapePointer clip32x96x1; // Offset: 0x168

    idHavokShapePointer clip16sphere; // Offset: 0x170

}; // Size: 0x178
