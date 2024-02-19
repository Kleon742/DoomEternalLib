struct idDeclUIWalkthroughMenuShellBase : idDeclUIWalkthroughMenuBase
{
    // Get the menu element (i.e. screen) this tutorial references. If true, the walkthrough will start immediately
    bool startOnActivate; // Offset: 0xC0

    // The menu in the shell this walkthrough is for
    mainMenuElementID_t shellMenuID; // Offset: 0xC4

    // The event to register on activation if this is a deferred start walkthrough. The walkthrough will begin when that event is received.
    menuEventID_t shellMenuActivateEvent; // Offset: 0xC8

    // The event to broadcast on completion of this walkthrough ( can be left invalid if not needed )
    menuEventID_t shellMenuFinishedEvent; // Offset: 0xCC

}; // Size: 0xD0
