struct battlemodePlayerStreak_t
{
    // weak pointer to streak definition
    idWeakPtr < battlemodeStreak_t > streak; // Offset: 0x0

    // number of wins in current streak
    unsigned char wins; // Offset: 0x8

    // number of losses in current streak
    unsigned char losses; // Offset: 0x9

}; // Size: 0x10
