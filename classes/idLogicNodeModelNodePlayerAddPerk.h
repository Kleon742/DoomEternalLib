struct idLogicNodeModelNodePlayerAddPerk : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // Perk to be given to the player
    idDeclPerk* declPerk; // Offset: 0x18

}; // Size: 0x20
