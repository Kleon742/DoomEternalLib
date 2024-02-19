struct idLogicNodeModelUINotification : idLogicNodeModel
{
    // throw this notification.
    idDeclNotification* notification; // Offset: 0x10

    // attach this info decl to the notification
    idGameDeclTypeInfo* infoDecl; // Offset: 0x18

    // insert number into subtext.
    int numInsertion; // Offset: 0x20

}; // Size: 0x28
