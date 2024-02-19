struct idLogicNodeModelHordeRound : idLogicNodeModel
{
    // The Horde Arena Command to pass to the game challenge
    idLogicNodeHordeRound::hordeRoundCommands_t commandToGive; // Offset: 0x10

    // The notification to fire when the horde command gets processed
    idDeclNotification* notificationToFire; // Offset: 0x18

    // For starting staged timers at the start of certain round types
    idDeclStagedTimer* timerBehavior; // Offset: 0x20

    // index for which round this is ( for UI )
    int index; // Offset: 0x28

    // Name of the command
    idStr name; // Offset: 0x30

}; // Size: 0x60
