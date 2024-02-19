struct idHUDEvent_EquipMod
{
    struct equipModData_t
    {
        idDeclWeapon* weapon; // Offset: 0x0

        idDeclPerk* mod; // Offset: 0x8

        bool playModSelect; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_EquipMod::equipModData_t info; // Offset: 0x0

}; // Size: 0x18
