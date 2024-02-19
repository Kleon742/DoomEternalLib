struct idHUD_Keycard : idHUDElement
{
    struct keycardDelay_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > showTime; // Offset: 0x0

        idDeclInventory* keycard; // Offset: 0x8

    }; // Size: 0x10

    idList < const idDeclInventory * , TAG_IDLIST , false > keys; // Offset: 0xF8

    idList < idHUD_Keycard::keycardDelay_t , TAG_IDLIST , false > keycardsToAdd; // Offset: 0x110

}; // Size: 0x128
