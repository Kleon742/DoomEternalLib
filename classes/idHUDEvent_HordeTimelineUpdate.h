struct idHUDEvent_HordeTimelineUpdate
{
    struct hordeTimelineData_t
    {
        idDeclUICustomData_Widget_HordeProgress* dataDecl; // Offset: 0x0

        short levelIndex; // Offset: 0x8

        int currentIndex; // Offset: 0xC

        int beatenFlags; // Offset: 0x10

        short roundType; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_HordeTimelineUpdate::hordeTimelineData_t info; // Offset: 0x0

}; // Size: 0x18
