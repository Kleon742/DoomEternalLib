struct idEngineAPI_ScopedBroadcastRegistrant
{
    idBroadcastManager* broadcastManager; // Offset: 0x0

    uint16 systemId; // Offset: 0x8

    unsigned short eventId; // Offset: 0xA

    void (*callback)(broadcastEventId_t evId , void * const param , const void * const eventData); // Offset: 0x10

    void* userParam; // Offset: 0x18

}; // Size: 0x20
