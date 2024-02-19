struct idHUD_WeaponWheel : idHUDElement
{
    idHUDEvent_WeaponWheelOpened::weaponInfo_t weaponInfo[8]; // Offset: 0xF8

    int numWeapons; // Offset: 0x238

    idSWFWidget_WeaponWheel* wheel; // Offset: 0x240

    int currentWheelSelectionIndex; // Offset: 0x248

    bool canSwapMod; // Offset: 0x24C

    int desiredModIndex; // Offset: 0x250

    // Slow motion variables
    bool slowMotionActive; // Offset: 0x254

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > slowMotionStartTime; // Offset: 0x258

    bool isWheelOpen; // Offset: 0x260

    bool infinite; // Offset: 0x261

    bool bfgInfinite; // Offset: 0x262

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > deferredWeaponWheelCloseTime; // Offset: 0x268

    idSoundWwiseID weaponWheelGroup; // Offset: 0x270

    idSoundWwiseID wheelDisengage; // Offset: 0x274

    idSoundWwiseID wheelEngage; // Offset: 0x278

}; // Size: 0x280
