struct idLogicNodeModelHorde : idLogicNodeModel
{
    // The Horde Command to pass to the game challenge
    idGameChallenge_Horde::hordeLDCommand_t commandToGive; // Offset: 0x10

    // The notification to fire when the horde command gets processed
    idDeclNotification* notificationToFire; // Offset: 0x18

    // Name of the command
    idStr name; // Offset: 0x20

}; // Size: 0x50
