struct idAICondition_Shared_EncounterRole : idAICondition
{
    // only transition if current role matches one of these
    idList < encounterGroupRole_t , TAG_IDLIST , false > include; // Offset: 0x18

    // only transition if current role isn't in this list
    idList < encounterGroupRole_t , TAG_IDLIST , false > exclude; // Offset: 0x30

}; // Size: 0x48
