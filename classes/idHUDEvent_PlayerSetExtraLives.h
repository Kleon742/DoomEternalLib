struct idHUDEvent_PlayerSetExtraLives
{
    struct setExtraLivesData_t
    {
        bool spawning; // Offset: 0x0

        unsigned int lives; // Offset: 0x4

    }; // Size: 0x8

    idHUDEvent_PlayerSetExtraLives::setExtraLivesData_t info; // Offset: 0x0

}; // Size: 0x8
