struct idDeclProp_AISummonComponent : idDeclProp_UseComponent
{
    // demon to spawn
    idDeclEntityDef* aiDef; // Offset: 0x130

    // range to spawn the demon away from the player if posible. {{ units = m }}
    idRange < float > spawnRange; // Offset: 0x138

}; // Size: 0x140
