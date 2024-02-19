struct idHUDEvent_PlayerNotification
{
    struct notificationData_t
    {
        // value for the dash meter
        idDecl* infoDecl; // Offset: 0x0

        int notificationEnum; // Offset: 0x8

        void* data; // Offset: 0x10

    }; // Size: 0x18

    idHUDEvent_PlayerNotification::notificationData_t info; // Offset: 0x0

}; // Size: 0x18
