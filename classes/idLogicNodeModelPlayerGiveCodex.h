struct idLogicNodeModelPlayerGiveCodex : idLogicNodeModel
{
    // codex entry to give the player
    idDeclCodexEntry* codexToGive; // Offset: 0x10

    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x18

}; // Size: 0x20
