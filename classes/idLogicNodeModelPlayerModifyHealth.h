struct idLogicNodeModelPlayerModifyHealth : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // -1 to ignore, will clamp at max
    int healthValue; // Offset: 0x14

    // -1 to ignore, will clamp at max
    int armorValue; // Offset: 0x18

}; // Size: 0x20
