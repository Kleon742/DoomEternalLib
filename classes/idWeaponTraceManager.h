struct idWeaponTraceManager
{
    idStaticList < weaponTrace_t , 6 , false , TAG_IDLIST > weaponTraces[2]; // Offset: 0x0

    idSysMutexArray < 2 > weaponTraceMutex; // Offset: 0x390

    int currentDeferred; // Offset: 0x3E0

}; // Size: 0x3E8
