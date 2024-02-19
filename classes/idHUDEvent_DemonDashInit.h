struct idHUDEvent_DemonDashInit
{
    struct demonDashInitData_t
    {
        // max number of dashes ever allowed to be stored
        int maxPips; // Offset: 0x0

        // what button does the player press to dash
        cmdGenButton_t button; // Offset: 0x4

        // what color to setup the dash UI with
        demonHudColor_t color; // Offset: 0x8

        // what icon to show in the dash UI
        idMaterial2* icon; // Offset: 0x10

        // active demon's bindset
        bindSet_t bindset; // Offset: 0x18

    }; // Size: 0x20

    idHUDEvent_DemonDashInit::demonDashInitData_t info; // Offset: 0x0

}; // Size: 0x20
