struct idHUD_Timer : idHUDElement
{
    // radius of the radar.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0xF8

    // is active
    bool timerActive; // Offset: 0x100

}; // Size: 0x108
