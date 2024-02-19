struct characterAbilityUIInfo
{
    // the icon of the
    idMaterial2* icon; // Offset: 0x0

    // the UI title of the ability
    idStrId title; // Offset: 0x8

    // the UI description of the ability
    idStrId description; // Offset: 0xC

    // color the ability slot will use on the ui
    demonHudColor_t color; // Offset: 0x10

}; // Size: 0x18
