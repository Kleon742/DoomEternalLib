struct idHUD_Diagnostics : idHUDElement
{
    // entities around the player.
    idList < idHUDEvent_DiagnosticsUpdate::diagnosticsInfo_t::entityInfo_t , TAG_IDLIST , false > entities; // Offset: 0xF8

    // Max visible diagnostics rune
    int maxVisible; // Offset: 0x110

    // Max Distance diagnostics Run.
    float maxDistance; // Offset: 0x114

}; // Size: 0x118
