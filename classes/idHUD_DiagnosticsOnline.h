struct idHUD_DiagnosticsOnline : idHUDElement
{
    // Our list of HealthBars
    idList < idHUD_HealthBarInfo , TAG_MENU , false > healthBars; // Offset: 0xF8

    // entities around the player
    idList < idHUDEvent_DiagnosticsOnlineUpdate::diagnosticsInfo_t::entityInfo_t , TAG_IDLIST , false > entities; // Offset: 0x110

    // How many healthbars have been set this frame.
    int numHealthBars; // Offset: 0x128

}; // Size: 0x130
