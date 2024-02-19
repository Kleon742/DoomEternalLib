struct idTarget_MapGroupUnlock : idTarget
{
    // The sound played when fast travel is unlocked for the map
    idSoundEvent* unlockSound; // Offset: 0xB88

    // index for the map group this target unlocks
    int mapGroupIndex; // Offset: 0xB90

    bool activated; // Offset: 0xB94

}; // Size: 0xB98
