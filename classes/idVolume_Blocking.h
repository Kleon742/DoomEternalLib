struct idVolume_Blocking : idBloatedEntity
{
    // will block a player
    bool blockPlayers; // Offset: 0xB88

    // will block demons
    bool blockDemons; // Offset: 0xB89

    // will block bullets
    bool blockShots; // Offset: 0xB8A

    // if true, bots and AI can't see thru this volume.
    bool isOpaque; // Offset: 0xB8B

    // show a visible trigger
    bool isVisible; // Offset: 0xB8C

    // true to allow this volume to register touches from spawn time
    bool startEnabled; // Offset: 0xB8D

    // Keep track of whether Spawn() has been called
    bool spawned; // Offset: 0xB8E

    // is the volume currently enabled
    bool active; // Offset: 0xB8F

    int contentMask; // Offset: 0xB90

    int blockedVolumeIndex; // Offset: 0xB94

    idColor triggerColor; // Offset: 0xB98

}; // Size: 0xBA8
