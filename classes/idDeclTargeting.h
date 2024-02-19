struct idDeclTargeting : idGameDeclTypeInfo
{
    struct aimTargetingPoint_t
    {
        // Type of Target Point. ( AR, Aim Assist etc. )
        aim_Target_type_t targetType; // Offset: 0x0

        // The tag name associated with this target point.
        idAtomicString tagName; // Offset: 0x8

        // max targetable distance for this point. {{ units = m }}
        float maxDistance; // Offset: 0x10

        // How far the reticle can be away from this point to be considered "valid" {{ units = m }}
        float masAimDelta; // Offset: 0x14

        // Do we want to be able to look at these points through walls and such?
        bool trace; // Offset: 0x18

        // offset of the target point. {{ units = m }}
        idVec3 pointOffset; // Offset: 0x1C

        // whether this point is valid for melee targeting
        bool validForMelee; // Offset: 0x28

    }; // Size: 0x30

    struct highlightInfo_t
    {
        // Name of a targeting group to add to aim assist
        idAtomicString targetingGroupName; // Offset: 0x0

        // Name of a damage group to do a flash highlight for
        idAtomicString damageGroupName; // Offset: 0x8

        // Mame of the highlight group to turn on for this group
        idAtomicString highlightGroupName; // Offset: 0x10

        // aim assist decls that can highlight this mesh kit ( if target group is set )
        idList < const idDeclAimAssist * , TAG_IDLIST , false > aimDecls; // Offset: 0x18

        // damage decls that can activate this highlight ( if damage group is set )
        idList < const idDeclDamage * , TAG_IDLIST , false > damageDecls; // Offset: 0x30

        // only perform this highlight if the target has armor ( false = all the time, true = only when AI_HEALTH_SHIELD > 0 )
        bool shieldOnly; // Offset: 0x48

    }; // Size: 0x50

    // scale applied to scoring results, defaults to 1.0 (added to give spirit a better chance of being targeted)
    float scoringScalar; // Offset: 0x90

    // All the possible target points available.
    idList < idDeclTargeting::aimTargetingPoint_t , TAG_IDLIST , false > targetPoints; // Offset: 0x98

    // an association of target points to mesh kits, combined with which aim assist decls can enable a highlight
    idList < idDeclTargeting::highlightInfo_t , TAG_IDLIST , false > highlightMeshTargets; // Offset: 0xB0

    // is this entity targetable by aimTarget System.
    bool targetable; // Offset: 0xC8

    // is this entity lockable by the rocket launcher lock mod
    bool lockable; // Offset: 0xC9

    // skips the pvs check in AimTargetSelector
    bool skipPVSCheck; // Offset: 0xCA

    // What kind of target is this?
    aim_targetType_t targetType; // Offset: 0xCC

    // how many kills is needed for the system to call out vulnerability
    int numKills; // Offset: 0xD0

    // The target name to be displayed by the HUD and in menus.
    idStrId targetDisplayName; // Offset: 0xD4

    // When targeting decl is used on an AI Proxy target, this controls if meathook is allowed. Necessary because of how the meathook directly interacts with the AI proxy.
    bool allowMeatHookForAIProxy; // Offset: 0xD8

}; // Size: 0xE0
