struct idLogicNodeModelPlayerBecomeDemon : idLogicNodeModel
{
    // Actor Modifier decl to use on the player
    idDeclActorModifier* actorModifier; // Offset: 0x10

    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x18

    // If true, control/view will remain with player until Delayed Demon Transform logic node is activated
    bool delayDemonTransform; // Offset: 0x1C

}; // Size: 0x20
