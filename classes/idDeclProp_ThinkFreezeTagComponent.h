struct idDeclProp_ThinkFreezeTagComponent : idDeclProp_ThinkComponent
{
    // How long in milliseconds does an alive player need to stay touching this volume to thaw the frozen player
    idTypesafeTime < int , millisecondUnique_t , 1000 > thawDurationMS; // Offset: 0xD0

    // How much faster the demon thaws players than normal players.
    float demonThawScale; // Offset: 0xD4

    // How much faster a taunting player thaws players than normal players.
    float tauntingThawScale; // Offset: 0xD8

}; // Size: 0xE0
