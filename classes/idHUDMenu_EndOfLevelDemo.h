struct idHUDMenu_EndOfLevelDemo : idMenu
{
    idHUDEvent_OpenEndOfLevelScreen::openEOLData_t eventData; // Offset: 0xD8

    int previousScreen; // Offset: 0x868

    // Delay deactivation until after idMenu::Update, or it causes problems with swfs being deleted
    bool wantsDeactivate; // Offset: 0x86C

}; // Size: 0x870
