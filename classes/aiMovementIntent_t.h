struct aiMovementIntent_t
{
    // origin of the AI that owns this intent {{ units = m }}
    idVec3 origin; // Offset: 0x0

    // fire position -- for melee characters, this is actually at the target's position {{ units = m }}
    idVec3 fireOrigin; // Offset: 0xC

    // direction of fire -- for melee characters, this is actully away from the target
    idVec3 fireDir; // Offset: 0x18

    // ai that owns this intent
    idEntityPtr_ThreadSafe < idAI2 > owner; // Offset: 0x28

    // monster type of AI that owns this intent
    aiMonsterType_t monsterType; // Offset: 0x40

    // radius of AI at this intent {{ units = m }}
    float radius; // Offset: 0x48

    // requested cosine of fire angle
    float fireDot; // Offset: 0x4C

    // anticipated distance of fire {{ units = m }}
    float fireDist; // Offset: 0x50

    // hack to help define arcs {{ units = m }} FIXME -- shouldn't be needed now that we have fire radius
    float fireOffset; // Offset: 0x54

    // 2D radius of attack {{ units = m }}
    float fireRadius; // Offset: 0x58

}; // Size: 0x60
