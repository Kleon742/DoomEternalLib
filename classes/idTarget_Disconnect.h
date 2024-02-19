struct idTarget_Disconnect : idTarget
{
    // Command string to execute with the useBinkCommand, handy to change videos
    idStr binkCommand; // Offset: 0xB88

    // Turn off hud at exit
    bool exitTurnOffHud; // Offset: 0xBB8

    // Number of seconds from total fade to transition
    float exitTranTime; // Offset: 0xBBC

}; // Size: 0xBC0
