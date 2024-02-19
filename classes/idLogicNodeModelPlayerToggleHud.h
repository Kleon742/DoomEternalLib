struct idLogicNodeModelPlayerToggleHud : idLogicNodeModel
{
    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x10

    // enable, disable or toggle
    idLogicNodeToggleHudType setType; // Offset: 0x14

}; // Size: 0x18
