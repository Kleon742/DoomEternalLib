struct idDeclPodium : idDeclTypeInfo
{
    // list of the entity defs for the podium to spawn
    idList < const idDeclEntityDef * , TAG_IDLIST , false > entityDefs; // Offset: 0x88

    // FX Entity to use for spawning the podium in.
    idDeclEntityDef* spawnInFX; // Offset: 0xA0

    // The map that this decl was exported from.
    idStrMapName sourceMap; // Offset: 0xA8

}; // Size: 0xD8
