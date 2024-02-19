struct idSWFWidget_DialogNotification : idSWFWidget
{
    struct dialogNotification_t
    {
        idStr header; // Offset: 0x0

        idStr body; // Offset: 0x30

        swfSoundType_t sound; // Offset: 0x60

        idMaterial2* icon; // Offset: 0x68

        swfNamedColors_t iconColor; // Offset: 0x70

    }; // Size: 0x78

    idList < idSWFWidget_DialogNotification::dialogNotification_t , TAG_IDLIST , false > notificationQueue; // Offset: 0x180

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > notificationStartTime; // Offset: 0x198

    bool waitingToHide; // Offset: 0x1A0

}; // Size: 0x1A8
