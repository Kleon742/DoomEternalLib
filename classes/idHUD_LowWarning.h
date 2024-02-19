struct idHUD_LowWarning : idHUDElement
{
    idSWFWidget* wgtDemonHidden; // Offset: 0xF8

    float healthCurrent; // Offset: 0x100

    float healthMax; // Offset: 0x104

    float lowHealthThreshold; // Offset: 0x108

    float criticalHealthThreshold; // Offset: 0x10C

    float armorCurrent; // Offset: 0x110

    float armorMax; // Offset: 0x114

    int currentAmmoCount; // Offset: 0x118

    int maxAmmoCount; // Offset: 0x11C

    int lowAmmoThreshold; // Offset: 0x120

    int ammoPerShot; // Offset: 0x124

    bool overammoActive; // Offset: 0x128

    bool infinite; // Offset: 0x129

    bool bfgInfinite; // Offset: 0x12A

    bool isBFG; // Offset: 0x12B

    // false == no mod, true == mod disabled
    bool modStringFlag; // Offset: 0x12C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > chainsawShowTime; // Offset: 0x130

    idHUDEvent_ChainsawFail::chainsawData_t chainsawFailData; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > noModShowTime; // Offset: 0x148

    bool isDemonPlayer; // Offset: 0x150

    bool showingChainsawWarning; // Offset: 0x151

    int lockonStatus; // Offset: 0x154

    idHUDEvent_DemonInvasionStateUpdate::demonInvasionStateData_t demonInvasionStateData; // Offset: 0x158

}; // Size: 0x168
