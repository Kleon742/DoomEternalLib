struct idHUD_Notification_FastTravel : idHUDElement
{
    hudNotification_t currentData; // Offset: 0xF8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationStartTime; // Offset: 0x520

}; // Size: 0x528
