struct idBotControllerInterface_UserCmd : idBotControllerInterface
{
    idBot* botOwner; // Offset: 0x8

    idUserCmd usercmd; // Offset: 0x10

    // Action flags that get converted to ucmds. Look at "botActionFlags_t".
    int actionFlags; // Offset: 0xA8

    botMoveGoalInfo_t moveGoalInfo; // Offset: 0xAC

}; // Size: 0xD8
