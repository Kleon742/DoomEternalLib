struct idLogicNodeModelPlayerGiveStatusEffect : idLogicNodeModel
{
    // status effec to give the player
    idDeclStatusEffect* statusEffect; // Offset: 0x10

    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x18

    // how long the effect applies, 0 for infinity
    idTypesafeTime < int , millisecondUnique_t , 1000 > effectTime; // Offset: 0x1C

    // subsequent applications of the same effect will refresh it instead of removing
    bool refreshEffect; // Offset: 0x20

}; // Size: 0x28
