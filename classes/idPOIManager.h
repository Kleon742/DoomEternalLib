struct idPOIManager
{
    // All the pois currently in world. ( and being shown )
    idList < idPOIInfo , TAG_IDLIST , false > pois; // Offset: 0x0

    // system id for 'HUD' in the event system
    uint16 broadcastSystemId; // Offset: 0x18

    bool justEmptied; // Offset: 0x1A

    // refreshes all timed POIs
    bool refreshTimedPOIs; // Offset: 0x1B

    // Hide/Show active POI
    bool showHideActivePOI; // Offset: 0x1C

    // Hide/Show active POI when using interactables
    bool showHideActivePOIDuringInteractable; // Offset: 0x1D

    // Hide/Show active POI when using interactables PlayerUseProxy
    bool showHideActivePOIDuringPlayerUseProxy; // Offset: 0x1E

    // Display active POI
    bool showActivePOI; // Offset: 0x1F

    int currentUid; // Offset: 0x20

}; // Size: 0x28
