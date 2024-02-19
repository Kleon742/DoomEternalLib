struct idNotificationManager
{
    struct notificationSubsection_t
    {
        idList < hudNotification_t , TAG_IDLIST , false > notificationQueue; // Offset: 0x0

        hudNotification_t currentNotificationData; // Offset: 0x18

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationPostTime; // Offset: 0x440

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationEndTime; // Offset: 0x448

    }; // Size: 0x450

    // definitions for different notification types
    idList < const idDeclNotification * , TAG_IDLIST , false > notificationDefs; // Offset: 0x0

    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x18

    idStaticList < idNotificationManager::notificationSubsection_t , 5 , false , TAG_IDLIST > notificationSubsections; // Offset: 0x38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > HACK_DontAllowLoadCheckPointTimeStart; // Offset: 0x15E0

}; // Size: 0x15E8
