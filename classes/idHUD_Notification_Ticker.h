struct idHUD_Notification_Ticker : idHUDElement
{
    struct tickerData_t
    {
        hudNotification_t data; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x428

    }; // Size: 0x430

    idList < hudNotification_t , TAG_IDLIST , false > queuedNotifications; // Offset: 0xF8

    idList < const idSWFSpriteInstance * , TAG_IDLIST , false > hidingNotifications; // Offset: 0x110

    idList < idHUD_Notification_Ticker::tickerData_t , TAG_IDLIST , false > tickerNotifications; // Offset: 0x128

}; // Size: 0x140
