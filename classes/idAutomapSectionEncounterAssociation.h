struct idAutomapSectionEncounterAssociation
{
    struct idAutomapCheckpointAssociation_t
    {
        // Checkpoint name associated with the associated encounter. It must match the checkpointName (NOT the readableStringID) specified on the Target_LayerStateChange entity (WARNING: Do not associate encounters that do not award combat points, this will cause the fast travel to always be locked)
        idStr associatedCheckpointName; // Offset: 0x0

        // Should this checkpoint's fast travel be disabled when the encounter is active (WARNING: Do not associated encounters that do not award combat points, this will cause the fast travel to always be locked)
        bool disableFastTravelWhenEncounterActive; // Offset: 0x30

        // This should rarely be needed as the checkpoint's fast travel will not be available until the encounter is complete (WARNING: Do not associated encounters that do not award combat points, this will cause the fast travel to always be locked)
        bool disableFastTravelWhileEncounterIncomplete; // Offset: 0x31

    }; // Size: 0x38

    // TODO: just make these public and remove getters/setters? What encounter is the section associated with? Should match the name of the EncounterManager
    idStr encounterNameAssociation; // Offset: 0x0

    // What entity, which is shown as an icon on the map, is associated with this encounter
    idStrEntity encounterAssociatedEntityStr; // Offset: 0x30

    // The properties of the light associated with the Encounter Entity
    automapEncounterLightProperties_t encounterEntityLightProperties; // Offset: 0x60

    // If this encounter should be interfering with a checkpoint/fast travel based on status, set this to true and the associatedCheckpointData will appear, if false, it will be hidden
    bool hasAssociatedCheckpointData; // Offset: 0x9C

    // If this encounter is associated with a checkpoint and needs to block fast travel based on some encounter state, fill out these settings (Note: idTarget_LayerStateChange is the checkpoint entity)
    idAutomapSectionEncounterAssociation::idAutomapCheckpointAssociation_t associatedCheckpointData; // Offset: 0xA0

    // Encounter ptr related to the encounter name
    idManagedClassPtr < idEncounterManager > encounterAssociation; // Offset: 0xD8

}; // Size: 0xF8
