struct idHUD_Notification_CallOut : idHUDElement
{
    idList < hudNotification_t , TAG_IDLIST , false > queuedNotifications; // Offset: 0xF8

    idList < const idSWFSpriteInstance * , TAG_IDLIST , false > hidingNotifications; // Offset: 0x110

    idList < hudNotification_t , TAG_IDLIST , false > majorNotifications; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > majorStartTime; // Offset: 0x140

    bool majorIsHiding; // Offset: 0x148

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > majorTimerStartTime; // Offset: 0x150

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > majorTimerEndTime; // Offset: 0x158

}; // Size: 0x160
