struct dataDrivenRule_t
{
    // stat to check
    gameStat_t stat; // Offset: 0x0

    // stat duration for the stat to check
    gameStatDuration_t statDuration; // Offset: 0x4

    // second stat to check
    gameStat_t secondStat; // Offset: 0x8

    // duration for the second stat to check
    gameStatDuration_t secondStatDuration; // Offset: 0xC

    // value to check stat against ( for percentage, value is 0-100 )
    int value; // Offset: 0x10

    // operation to check the stat value against the decl value if the rule is true or not
    ruleOperation_t operation; // Offset: 0x14

    // score weight for this rule ( 1 is default )
    float weight; // Offset: 0x18

}; // Size: 0x1C
