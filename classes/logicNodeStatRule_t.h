struct logicNodeStatRule_t
{
    // game stat tied to this rule
    gameStat_t stat; // Offset: 0x0

    // stat duration tied to this rule
    gameStatDuration_t statDuration; // Offset: 0x4

    // number of times the requirements must be met to satisfy this rule.
    int count; // Offset: 0x8

    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0xC

}; // Size: 0x10
