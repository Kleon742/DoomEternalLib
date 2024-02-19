struct idObjectiveManager
{
    // if it exists in this list, it is considered unlocked
    idList < idObjective * , TAG_IDLIST , false > objectives; // Offset: 0x8

    // if it exists in this list, it is considered revealed
    idList < idObjective * , TAG_IDLIST , false > treasureHints; // Offset: 0x20

    idList < idObjective * , TAG_IDLIST , false > objectivesToReveal; // Offset: 0x38

    // index of the active objective.
    int activeObjectiveIndex; // Offset: 0x50

    // Should the automap animate from the objective to the player
    bool animateToObjective; // Offset: 0x54

    bool displayObjectives; // Offset: 0x55

    bool prevVisibility; // Offset: 0x56

    bool showObjective; // Offset: 0x57

    bool keepCompletedObjectiveOnScreen; // Offset: 0x58

    int currentObjectiveCount; // Offset: 0x5C

}; // Size: 0x60
