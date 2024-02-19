struct idHUD_Notification : idHUDElement
{
    hudNotification_t currentData; // Offset: 0xF8

    idDeclNotification* secondaryNotification; // Offset: 0x520

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationStartTime; // Offset: 0x528

    int eventID; // Offset: 0x530

    int numDuplicates; // Offset: 0x534

}; // Size: 0x538
