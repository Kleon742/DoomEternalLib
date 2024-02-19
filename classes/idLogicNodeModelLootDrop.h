struct idLogicNodeModelLootDrop : idLogicNodeModel
{
    // which video to play
    idDeclLootDrop* lootDropDecl; // Offset: 0x10

    // data for how to launch the loot
    idLootDropComponent lootDropComponent; // Offset: 0x18

}; // Size: 0xB0
