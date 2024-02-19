struct hudNotification_t
{
    hudNotificationType_t notificationType; // Offset: 0x0

    idDeclNotification* notificationDecl; // Offset: 0x8

    idDecl* infoDecl; // Offset: 0x10

    int size; // Offset: 0x18

    uint16 playerBroadcastID; // Offset: 0x1C

    long long notificationQueueTime; // Offset: 0x20

    char genericData[1024]; // Offset: 0x28

}; // Size: 0x428
