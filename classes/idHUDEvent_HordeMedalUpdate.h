struct idHUDEvent_HordeMedalUpdate
{
    struct hordeMedalUpdateData_t
    {
        idMaterial2* icon; // Offset: 0x0

        short index; // Offset: 0x8

        int medalGoal; // Offset: 0xC

        int previousMedalGoal; // Offset: 0x10

        swfNamedColors_t color; // Offset: 0x14

    }; // Size: 0x18

    idHUDEvent_HordeMedalUpdate::hordeMedalUpdateData_t info; // Offset: 0x0

}; // Size: 0x18
