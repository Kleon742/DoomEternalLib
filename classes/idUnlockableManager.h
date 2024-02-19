struct idUnlockableManager
{
    struct QuestUnlockableRule_t
    {
        // Decl to track.
        idDeclUnlockable* unlockDecl; // Offset: 0x0

        // custom metrics object if stat type being tracked is custom type
        idManagedClassPtr < idAbnormalPlayerMetrics > customMetrics; // Offset: 0x8

        // keep track of the previous values of the rules
        idList < int , TAG_IDLIST , false > ruleHistory; // Offset: 0x28

        // signal whether we are currently tracking this unlockable
        bool tracking; // Offset: 0x40

        // signal whether we are done with this unlockable
        bool fulfilled; // Offset: 0x41

    }; // Size: 0x48

    // list of mission challenges
    idDeclMissionChallengeList* missionChallenges; // Offset: 0x0

    // list of milestones
    idDeclMilestoneList* milestones; // Offset: 0x8

    idPlayer* owner; // Offset: 0x10

    // For looking up in the list by decl
    idHashIndex unlockableDeclHashIndex; // Offset: 0x18

    // For looking up in the list by stat
    idHashIndex unlockableStatHashIndex; // Offset: 0x48

    idStaticList < int , 1100 , false , TAG_IDLIST > statUnlockableList; // Offset: 0x78

    idStaticList < UnlockableTable_t , 1100 , false , TAG_IDLIST > unlockableList; // Offset: 0x11C0

    // list of weapon mastery challenges for the pinned challenge serialization
    idList < const idDeclUnlockable * , TAG_IDLIST , false > weaponMasteryChallengeList; // Offset: 0xBDB8

    // List of pinned challenges
    idStaticList < challengeInfo_t , 3 , false , TAG_IDLIST > pinnedChallengesList; // Offset: 0xBDD0

    bool supressNotifications; // Offset: 0xC2F8

}; // Size: 0xC300
