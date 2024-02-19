struct idHUDMenu_EndOfLevel : idMenu
{
    idHUDEvent_OpenEndOfLevelScreen::openEOLData_t eventData; // Offset: 0xD8

    int previousScreen; // Offset: 0x868

    // Delay deactivation until after idMenu::Update, or it causes problems with swfs being deleted
    bool wantsDeactivate; // Offset: 0x86C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > goToNextMapTime; // Offset: 0x870

    bool exitWhenProfileSaveComplete; // Offset: 0x878

    // ideally we'd separate credits from this menu entirely, but Main and DLC1 already did it that way. Don't fix what ain't broke, etc.
    bool onlyShowCredits; // Offset: 0x879

    // DLC2 quick-hack: need to hide this tab for the bossmap
    bool showSummary; // Offset: 0x87A

}; // Size: 0x880
