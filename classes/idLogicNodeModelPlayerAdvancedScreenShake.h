struct idLogicNodeModelPlayerAdvancedScreenShake : idLogicNodeModel
{
    // player this affects (-1 = local player)
    int playerNum; // Offset: 0x10

    // screen shake decl
    idDeclAdvancedViewShake* advancedScreenShakeDecl; // Offset: 0x18

}; // Size: 0x20
