struct contactInfo_t
{
    // contact type
    contactType_t type; // Offset: 0x0

    // point of contact {{ units = m }}
    idVec3 point; // Offset: 0x4

    // contact plane normal
    idVec3 normal; // Offset: 0x10

    // contact plane distance {{ units = m }}
    float dist; // Offset: 0x1C

    // contact feature separation at initial position {{ units = m }}
    float separation; // Offset: 0x20

    // contents at other side of surface
    int contentFlags; // Offset: 0x24

    // surface flags
    int surfaceFlags; // Offset: 0x28

    // surface type
    int surfaceType; // Offset: 0x2C

    // contact feature on model
    int modelFeature; // Offset: 0x30

    // contact feature on trace model
    int trmFeature; // Offset: 0x34

    // entity the contact surface is a part of
    idSpawnId spawnId; // Offset: 0x38

    // physics identifier the contact surface is part of
    int physicsId; // Offset: 0x3C

    // id of physics body the contact surface is part of
    int bodyId; // Offset: 0x40

    // id of physics body used to generate this contact
    int selfId; // Offset: 0x44

    // various flags
    unsigned char flags; // Offset: 0x48

    // surface color
    unsigned char surfaceColor[3]; // Offset: 0x49

}; // Size: 0x4C
