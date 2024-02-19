struct idDeclGameDifficulty : idGameDeclTypeInfo
{
    // ------------------------ Difficulty scale ------------------------ percentage to adjust on EASY difficulty level
    float easyScale; // Offset: 0x90

    // percentage to adjust on MEDIUM difficulty level (NORMAL DIFFICULTY)
    float mediumScale; // Offset: 0x94

    // percentage to adjust on HARD difficulty level
    float hardScale; // Offset: 0x98

    // percentage to adjust on NIGHTMARE difficulty level
    float nightmareScale; // Offset: 0x9C

    // percentage to adjust on EASY difficulty level for self damage
    float easyScale_Self; // Offset: 0xA0

    // percentage to adjust on MEDIUM difficulty level (NORMAL DIFFICULTY) for self damage
    float mediumScale_Self; // Offset: 0xA4

    // percentage to adjust on HARD difficulty level for self damage
    float hardScale_Self; // Offset: 0xA8

    // percentage to adjust on NIGHTMARE difficulty level for self damage
    float nightmareScale_Self; // Offset: 0xAC

}; // Size: 0xB0
