struct idTarget_Disconnect_GoToScreen : idTarget
{
    // Command string to execute with the useBinkCommand, handy to change videos
    idStr binkCommand; // Offset: 0xB88

    // Turn off hud at exit
    bool exitTurnOffHud; // Offset: 0xBB8

    // Number of seconds from total fade to transition
    float exitTranTime; // Offset: 0xBBC

    // Which screen to navigate to after unloading. defaults to root
    mainMenuElementID_t targetScreen; // Offset: 0xBC0

}; // Size: 0xBC8
