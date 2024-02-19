struct idDeclActorPopulation : idGameDeclTypeInfo
{
    struct aiTypeDefAssignment_t
    {
        // Parent entity def. Any child of this def is a legitimate decl to spawn with
        idDeclEntityDef* entityDef; // Offset: 0x0

        // The AI type this def is associated with
        ePopulationSpawnType_t aiType; // Offset: 0x8

        // Point value for this AI when spawning from a budget
        int pointValue; // Offset: 0xC

        // Weighted chance of the AI being spawned (normalized against other weights in this template)
        float spawnWeight; // Offset: 0x10

        // Faction name associated with the ai type. This will need to match one of the faction graph entries.
        idStr factionName; // Offset: 0x18

        // Sound shader used for the ambient sounds that represent this AI type
        idSoundEvent* ambientSoundShader; // Offset: 0x48

        // Default sensory settings for this AI type. These are applied to an AI if RestoreDefaultPerception is called
        idDeclAISensorySettings* defaultSensorySettings; // Offset: 0x50

    }; // Size: 0x58

    // Assignment list
    idList < idDeclActorPopulation::aiTypeDefAssignment_t , TAG_IDLIST , false > aiTypeDefAssignments; // Offset: 0x90

}; // Size: 0xA8
