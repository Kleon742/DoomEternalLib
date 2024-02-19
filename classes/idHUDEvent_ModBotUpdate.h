struct idHUDEvent_ModBotUpdate
{
    struct modbotinfo_t
    {
        struct weaponInfo_t
        {
            idDeclWeapon* weapon; // Offset: 0x0

            int modOwned[2]; // Offset: 0x8

        }; // Size: 0x10

        idHUDEvent_ModBotUpdate::modbotinfo_t::weaponInfo_t weaponInfos[8]; // Offset: 0x0

        int numWeapons; // Offset: 0x80

    }; // Size: 0x88

    idHUDEvent_ModBotUpdate::modbotinfo_t info; // Offset: 0x0

}; // Size: 0x88
