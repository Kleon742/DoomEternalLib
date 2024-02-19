struct idHUD_RuneInfo : idHUDElement
{
    struct runeTimerInfo_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > runeStartTime; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > runeEndTime; // Offset: 0x8

        bool useScaledTime; // Offset: 0x10

    }; // Size: 0x18

    struct runeHudInfo_t
    {
        idDeclPerk* rune; // Offset: 0x0

        bool atMax; // Offset: 0x8

        bool isRecharging; // Offset: 0x9

        bool updateUntilInactive; // Offset: 0xA

        bool requiresUpdate; // Offset: 0xB

        bool disabled; // Offset: 0xC

    }; // Size: 0x10

    idArray < idHUD_RuneInfo::runeTimerInfo_t , 4 > runeTimers; // Offset: 0xF8

    idArray < idHUD_RuneInfo::runeHudInfo_t , 4 > runeHudInfo; // Offset: 0x158

    float bloodPunchPercent; // Offset: 0x198

}; // Size: 0x1A0
