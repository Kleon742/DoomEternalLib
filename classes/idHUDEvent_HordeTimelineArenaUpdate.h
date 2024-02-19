struct idHUDEvent_HordeTimelineArenaUpdate
{
    struct hordeArenaData_t
    {
        idDeclUICustomData_Widget_HordeProgress* dataDecl; // Offset: 0x0

        short levelIndex; // Offset: 0x8

        short roundIndex; // Offset: 0xA

        short waveCount; // Offset: 0xC

        short waveFlags; // Offset: 0xE

    }; // Size: 0x10

    idHUDEvent_HordeTimelineArenaUpdate::hordeArenaData_t info; // Offset: 0x0

}; // Size: 0x10
