struct idDeclObjective : idGameDeclTypeInfo
{
    // text to display for the main objective.
    idStrId displayText; // Offset: 0x90

    // text to display for the description
    idStrId description; // Offset: 0x94

    // if true will auto complete the entire objective when all the steps are complete. i.e. all bombs destroyed
    bool completeObjectiveWhenLastStepCompleted; // Offset: 0x98

    // if true will display treasure hint on automap
    bool isTreasureHint; // Offset: 0x99

    // flag to use the notification that doesn't go away
    bool pinObjective; // Offset: 0x9A

    // if > 1 then it must be completed this many times to be COMPLETE
    int countTimes; // Offset: 0x9C

    // The icon rendermodel to use on the automap - defaults to NULL
    idStr renderModelName; // Offset: 0xA0

    // Pull information on blitz from the game challenge and encounter manager
    bool isHordeBlitz; // Offset: 0xD0

}; // Size: 0xD8
