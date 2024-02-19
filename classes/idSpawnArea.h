struct idSpawnArea : idSpawnNode
{
    struct GeneratedPosition
    {
        // {{ units = m }}
        idVec3 position; // Offset: 0x0

        // Used to limit size of ent that can spawn here. {{ units = m }}
        float distanceFromEdge; // Offset: 0xC

        // Location obstructed while timer > 0
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > obstructionTimer; // Offset: 0x10

    }; // Size: 0x18

    struct debugGenPos_t
    {
        // {{ units = m }}
        idVec3 start; // Offset: 0x0

        // {{ units = m }}
        idVec3 end; // Offset: 0xC

        bool obstructed; // Offset: 0x18

    }; // Size: 0x1C

    // Source positions before projection and obstruction checks.
    idList < idSpawnArea::debugGenPos_t , TAG_IDLIST , false > debug_positions; // Offset: 0xBB8

    // Pre-generated potential spawn position. Also tracks previous dynamic obstructions.
    idList < idSpawnArea::GeneratedPosition , TAG_IDLIST , false > generatedPositions; // Offset: 0xBD0

    // Have "obstructed" timers that need updating. Num of Obst. pos can be significantly less than All pos.
    idList < idSpawnArea::GeneratedPosition * , TAG_IDLIST , false > obstructedPositions; // Offset: 0xBE8

    // Keeps track of index of last position returned.
    int lastPositionUsed; // Offset: 0xC00

    // Facing applied to characters spawned from this area.
    float yaw; // Offset: 0xC04

    // Spawn facing set towards this object.
    idManagedClassPtr < idEntity > facingTargetObj; // Offset: 0xC08

}; // Size: 0xC28
