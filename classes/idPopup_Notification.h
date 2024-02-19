struct idPopup_Notification : idMenuElement
{
    idMaterial2* icon; // Offset: 0x100

    idList < const idDeclNotification * , TAG_IDLIST , false > notifications; // Offset: 0x108

    swfNamedColors_t iconColor; // Offset: 0x120

    idStrId title; // Offset: 0x124

    idStrId subtext; // Offset: 0x128

    idTypesafeTime < int , millisecondUnique_t , 1000 > popupDelay; // Offset: 0x12C

    idTypesafeTime < int , millisecondUnique_t , 1000 > notificationStartTimeMS; // Offset: 0x130

    menuPopupNotificationLocation_t notificationLocation; // Offset: 0x134

    idList < float , TAG_IDLIST , false > originalYPositions; // Offset: 0x138

}; // Size: 0x150
