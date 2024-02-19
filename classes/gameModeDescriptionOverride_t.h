struct gameModeDescriptionOverride_t
{
    // the game mode this override will work for. Use the same name as the game modes layer name. EX: use "mp/domination" for the Domination game mode name.
    idAtomicString gameModeLayerName; // Offset: 0x0

    // the description to use
    idStrId description; // Offset: 0x8

}; // Size: 0x10
