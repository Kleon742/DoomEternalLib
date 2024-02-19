struct idLogicNodeModelPlayerStopDashAbility : idLogicNodeModel
{
    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x10

    // wether we want to refill the meter or not
    bool refillMeter; // Offset: 0x14

}; // Size: 0x18
