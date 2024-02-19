struct calloutQueueItem_t
{
    idDeclGameEventCallout* callout; // Offset: 0x0

    calloutIdentifierType_t calloutIdentifier; // Offset: 0x8

    idManagedClassPtr < idEntity > activatorEntity; // Offset: 0x10

    int priority; // Offset: 0x30

    calloutData_t calloutData; // Offset: 0x38

}; // Size: 0x80
