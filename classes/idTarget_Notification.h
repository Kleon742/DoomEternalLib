struct idTarget_Notification : idTarget
{
    // flag for hiding the notification
    bool hide; // Offset: 0xB88

    // which notification to fire
    hudNotificationType_t notificationType; // Offset: 0xB8C

    // header for notification
    idStrId header; // Offset: 0xB90

    // subtext for notification description
    idStrId subtext; // Offset: 0xB94

    // icon for notification
    idMaterial2* icon; // Offset: 0xB98

    // entity to activate after thr menu has been dismissed
    idManagedClassPtr < idEntity > onCompleteTarget; // Offset: 0xBA0

}; // Size: 0xBC0
