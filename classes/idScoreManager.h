struct idScoreManager
{
    struct encounterScoreData_t
    {
        unsigned int score; // Offset: 0x0

        idStr encounterName; // Offset: 0x8

    }; // Size: 0x38

    float score; // Offset: 0x0

    int blitzScore; // Offset: 0x4

    int difficulty; // Offset: 0x8

    int previousBest; // Offset: 0xC

    int medalIndex; // Offset: 0x10

    short difficultyIndex; // Offset: 0x14

    aiMonsterType_t currentBlitzTarget; // Offset: 0x18

    idTree < idScoreSubsectionDataNode , TAG_IDLIST , false > scoreSectionHead; // Offset: 0x20

    idTree < idScoreSubsectionDataNode , TAG_IDLIST , false >* currentSectionNode; // Offset: 0x98

    idList < idScoreManager::encounterScoreData_t , TAG_IDLIST , false > encounterScoreList; // Offset: 0xA0

    // List of all scoring events
    idDeclScoringRubric* rubric; // Offset: 0xB8

    // decl with medal data
    idDeclHordeSummaryUtility* medalDecl; // Offset: 0xC0

    // list of notifications for reaching a new medal score
    idList < const idDeclNotification * , TAG_IDLIST , false > medalNotifications; // Offset: 0xC8

    // List of demon scoring events
    idListMap < aiMonsterType_t , const idDeclScoringItem_Demon * > demonList; // Offset: 0xE0

    // List of scoring events that piggy back off hud events
    idListMap < hudEventID_t , const idDeclScoringItem_HudEvent * > hudEventList; // Offset: 0x110

    // List of scoring events that piggy back off hud events
    idListMap < scoreEventID_t , const idDeclScoringItem_Event * > scoreEventList; // Offset: 0x140

    // List of scoring events that piggy back off hud events
    idListMap < const idDeclViolenceEvent * , const idDeclScoringItem_ViolenceEvent * > violenceEventList; // Offset: 0x170

    // keeps track of all active multiplier events
    idList < const idDeclScoringItem * , TAG_IDLIST , false > multiplierQueue; // Offset: 0x1A0

    // Cache the goal values so its faster to index into them
    idList < int , TAG_IDLIST , false > medalGoalList; // Offset: 0x1B8

    // the player
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x1D0

    // multiplier for all incoming scoring events, can be changed by multiplier events
    float currentMultiplier; // Offset: 0x1F0

    // system id for progression manager in the event system
    uint16 broadcastSystemId; // Offset: 0x1F4

    // system id for hud in unregistering
    uint16 hudBroadcastSystemId; // Offset: 0x1F6

}; // Size: 0x1F8
