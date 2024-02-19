struct idEncounterEvent_SyncMaintainAITriggers : idEncounterEvent
{
    idList < idEncounterEvent_MaintainAICount * , TAG_IDLIST , false > trackedMaintainAIEvents; // Offset: 0x90

    bool allMaintainsReadyToRespawn; // Offset: 0xA8

}; // Size: 0xB0
