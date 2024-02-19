struct idLogicNodeModelMasterLevelSettings : idLogicNodeModel
{
    // player this applies to (-1 = local player)
    int playerNum; // Offset: 0x10

    // loadout to apply
    idDeclDevInvLoadout* loadoutDecl; // Offset: 0x18

}; // Size: 0x20
