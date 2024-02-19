struct idSWFWidget_SocialBarNotification : idSWFWidget
{
    struct socialBarNotification_t
    {
        socialBarNotificationType_t type; // Offset: 0x0

        idStr messageString; // Offset: 0x8

        unsigned int flags; // Offset: 0x38

        swfSoundType_t sound; // Offset: 0x3C

    }; // Size: 0x40

    // TODO - max queued notifications?
    idList < idSWFWidget_SocialBarNotification::socialBarNotification_t , TAG_IDLIST , false > queuedNotifications; // Offset: 0x180

    socialBarNotificationType_t currentType; // Offset: 0x198

    idStr currentString; // Offset: 0x1A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationEndTime; // Offset: 0x1D0

    bool waitingForPersistentNotification; // Offset: 0x1D8

}; // Size: 0x1E0
