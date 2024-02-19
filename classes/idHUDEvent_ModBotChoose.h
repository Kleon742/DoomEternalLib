struct idHUDEvent_ModBotChoose
{
    struct modbotinfo_t
    {
        idDeclWeapon* weapon; // Offset: 0x0

        idPerkFamily* mod; // Offset: 0x8

        bool finalModForCategory; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_ModBotChoose::modbotinfo_t info; // Offset: 0x0

}; // Size: 0x18
