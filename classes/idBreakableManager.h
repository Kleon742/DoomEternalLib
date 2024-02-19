struct idBreakableManager
{
    struct spawnParms_t
    {
        struct explosionParms_t
        {
            // Origin position to evaluate explosion from
            idVec3 origin; // Offset: 0x0

            // Direction of the explosion
            idVec3 direction; // Offset: 0xC

            // Applied falloff on the explosion
            float falloff; // Offset: 0x18

        }; // Size: 0x1C

        struct orientParms_t
        {
            // Joints used during orientation of pieces
            idList < breakableJoint_t , TAG_IDLIST , false >* joints; // Offset: 0x0

            // Pose filter information (e.g. what pieces to show and position as newly spawned)
            idList < idAtomicString , TAG_IDLIST , false >* filterPose; // Offset: 0x8

        }; // Size: 0x10

        // Tree animator spawning the breakable (example AI md6)
        idRenderModelSkinned* renderModelSkinned; // Offset: 0x0

        // Breakable entity to spawn
        idDeclEntityDef* declEntityDef; // Offset: 0x8

        // Gore behavior to apply when spawning
        idDeclGoreBehavior* declGoreBehavior; // Offset: 0x10

        // Entity we want to activate new pieces in, shared breakable
        idManagedClassPtr < idBreakable > breakable; // Offset: 0x18

        // Entity owning the breakable (that is considered spawning it, example ai entity)
        idManagedClassPtr < idAnimatedEntity > owner; // Offset: 0x38

        // Origin to spawn breakable at
        idVec3 origin; // Offset: 0x58

        // Offset applied to spawned origin position
        idVec3 offset; // Offset: 0x64

        // Axis to spawn breakable in
        idMat3 axis; // Offset: 0x70

        // Directional force applied to breakable at spawn
        idVec3 direction; // Offset: 0x94

        // Impulse applied in the given direction
        float impulse; // Offset: 0xA0

        // Explosion specific parameters
        idBreakableManager::spawnParms_t::explosionParms_t explosion; // Offset: 0xA4

        // Orientation specific parameters
        idBreakableManager::spawnParms_t::orientParms_t orient; // Offset: 0xC0

    }; // Size: 0xD0

    struct breakables_t
    {
        // multiple breakables of a specific type
        idStaticList < idManagedClassPtr < idEntity > , 8 , false , TAG_IDLIST > entity; // Offset: 0x0

        // index of last breakable used
        int next; // Offset: 0x118

    }; // Size: 0x120

    // all breakables, separated by type
    idStaticList < idBreakableManager::breakables_t , 256 , false , TAG_IDLIST > breakable; // Offset: 0x0

    idList < const idDeclEntityDef * , TAG_IDLIST , false > cachedDefs; // Offset: 0x12018

}; // Size: 0x12030
