struct idLogicNodeModelPlayerSetInfiniteAmmo : idLogicNodeModel
{
    // optional: the player id for the player we are looking for, -1 == local player
    int playerNum; // Offset: 0x10

    // 0 - turn off infinite ammo, 1 turn on infinite ammo
    bool value; // Offset: 0x14

}; // Size: 0x18
