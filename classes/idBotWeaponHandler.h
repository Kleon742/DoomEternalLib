struct idBotWeaponHandler
{
    struct WeaponHandlerData
    {
        botActionFlags_t fireMode; // Offset: 0x0

        idTypesafeTime < float , secondUnique_t , 1 > timeInFireMode; // Offset: 0x4

        bool isSecondaryFireCharging; // Offset: 0x8

        bool firedLastTick; // Offset: 0x9

    }; // Size: 0xC

    idBotWeaponHandler::WeaponHandlerData data; // Offset: 0x8

}; // Size: 0x18
