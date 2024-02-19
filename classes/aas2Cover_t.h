struct aas2Cover_t
{
    // position of the cover {{ units = m }}
    idVec3 origin; // Offset: 0x0

    // direction the cover is facing
    idVec3 dir; // Offset: 0xC

    // radius of cover node {{ units = m }}
    float radius; // Offset: 0x18

    // optional anim index
    idIndex < short , invalidAASAnimIndex_t , - 1 > idleAnimIndex; // Offset: 0x1C

    // area this cover point is in
    short areaNum; // Offset: 0x1E

    // flags indicating cover point attributes. Look at "aas2CoverFlag_t"
    short flags; // Offset: 0x20

    // alignment padding
    unsigned short padding; // Offset: 0x22

    // number of other cover points intersecting this one
    int numTouching; // Offset: 0x24

    // first intersecting CoverPoint index in touchingCoverIndex
    int firstTouching; // Offset: 0x28

    // bitfield of AI types that can use this cover
    int aiTypes; // Offset: 0x2C

    // spawnId of the entity that has this cover reserved
    int reservedBy; // Offset: 0x30

    // gameSystem->MapInstance()->GetGameTime() must be > than this to use this cover
    int usableTime; // Offset: 0x34

}; // Size: 0x38
