struct idHUDEvent_ShowLaterInTheMission
{
    struct showLaterInTheMissionData_t
    {
        int stringID; // Offset: 0x0

        idEntity* completionEntity; // Offset: 0x8

        idMaterial2* material; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_ShowLaterInTheMission::showLaterInTheMissionData_t info; // Offset: 0x0

}; // Size: 0x18
