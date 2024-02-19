struct idUseableUniversalAmmoComponent : idUseableComponent
{
    idDeclProp_UniversalAmmoComponent* componentDecl; // Offset: 0x30

    // Keep track of how much ammo was actually given for accurate HUD messages.
    idList < universalAmmoGiven_t , TAG_IDLIST , false > givenAmmo; // Offset: 0x38

    idList < universalEquipmentGiven_t , TAG_IDLIST , false > givenEquipment; // Offset: 0x50

}; // Size: 0x68
