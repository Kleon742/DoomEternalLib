struct idDeclScoringRubric : idGameDeclTypeInfo
{
    struct difficultyScoreBonus_t
    {
        // score bonus for this difficulty and up (unless better found)
        float value; // Offset: 0x0

        // difficulty that this applies to
        gameDifficulty_t difficulty; // Offset: 0x4

    }; // Size: 0x8

    // difficulty bonus
    idArray < idDeclScoringRubric::difficultyScoreBonus_t , 5 > difficultyScoreBonus; // Offset: 0x90

    // list of demon scoring
    idList < const idDeclScoringItem_Demon * , TAG_IDLIST , false > demonItems; // Offset: 0xB8

    // list of demon scoring for demon bounties
    idList < const idDeclScoringItem_Demon * , TAG_IDLIST , false > bountyItems; // Offset: 0xD0

    // List of violence events
    idList < const idDeclScoringItem_ViolenceEvent * , TAG_IDLIST , false > violenceEventItems; // Offset: 0xE8

    // List of events that piggy-back off hud events
    idList < const idDeclScoringItem_HudEvent * , TAG_IDLIST , false > hudEventItems; // Offset: 0x100

    // List of events that trigger off score id events
    idList < const idDeclScoringItem_Event * , TAG_IDLIST , false > eventItems; // Offset: 0x118

    // List of events that reward for having them at the end of level
    idList < const idDeclScoringItem_InventoryItem * , TAG_IDLIST , false > endOfLevelItems; // Offset: 0x130

    // the entire list of scoring events
    idList < const idDeclScoringItem * , TAG_IDLIST , false > scoringItems; // Offset: 0x148

}; // Size: 0x160
