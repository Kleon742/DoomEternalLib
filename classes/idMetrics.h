struct idMetrics : idEventReceiver
{
    struct metrics_killMessage_t
    {
        idManagedClassPtr < idEntity > killer; // Offset: 0x0

        idManagedClassPtr < idEntity > victim; // Offset: 0x20

        idManagedClassPtr < idEntity > inflictor; // Offset: 0x40

        idDamageParms* displayedDamageParms; // Offset: 0x60

        idDamageParms* trueDamageParms; // Offset: 0x68

        bool syncedAnimKill; // Offset: 0x70

    }; // Size: 0x78

    struct metrics_intMessage_t
    {
        idManagedClassPtr < idPlayer > player; // Offset: 0x0

        gameStat_t stat; // Offset: 0x20

        int value; // Offset: 0x24

    }; // Size: 0x28

    idPlayerMetrics players[12]; // Offset: 0x38

    idGameChallenge* gameChallenge; // Offset: 0xE9DF8

    idList < idStr , TAG_IDLIST , false > completedLevelNames; // Offset: 0xE9E00

    // debug
    idList < gameStat_t , TAG_IDLIST , false > trackedStats; // Offset: 0xE9E18

    int trackedStatsPlayerId; // Offset: 0xE9E30

    idStaticList < idMetrics::metrics_killMessage_t , 64 , false , TAG_IDLIST > pendingKillMessages; // Offset: 0xE9E38

    idStaticList < idMetrics::metrics_intMessage_t , 128 , false , TAG_IDLIST > pendingIntMessages; // Offset: 0xEBC50

    bool isActive; // Offset: 0xED068

}; // Size: 0xED070
