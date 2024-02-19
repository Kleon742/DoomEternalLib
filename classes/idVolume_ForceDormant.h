struct idVolume_ForceDormant : idVolume
{
    // names of entities to force dormant
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entitiesToForceDormant; // Offset: 0xC20

    // how many frames to make things dormant
    int dormantDurationInFrames; // Offset: 0xC38

    // if true, make all guis dormant
    bool forceGuisDormant; // Offset: 0xC3C

}; // Size: 0xC40
