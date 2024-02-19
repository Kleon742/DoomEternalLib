struct idSWFWidget_DemonAbility : idSWFWidget
{
    idHUDEvent_DemonAbilityUpdate::demonDeckInfo_t::demonCardInfo_t abilityData; // Offset: 0x180

    idHUDEvent_DemonAbilityUpdate::demonDeckInfo_t::demonCardInfo_t previousAbilityData; // Offset: 0x1C0

    bool activeAbility; // Offset: 0x200

    bool isDisabled; // Offset: 0x201

}; // Size: 0x208
