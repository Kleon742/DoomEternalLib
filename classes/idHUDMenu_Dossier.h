struct idHUDMenu_Dossier : idMenu
{
    dossierTelemetryData_t dossierTelemetryData; // Offset: 0xD8

    idHUDEvent_OpenDossier::openDossierPlayerData_t previousDossierData; // Offset: 0x108

    idHUDEvent_OpenDossier::openDossierPlayerData_t dossierData; // Offset: 0x12C

    dossierPage_t desiredScreen; // Offset: 0x150

    idStaticList < int , 6 , false , TAG_IDLIST > screenToTabIndexMapping; // Offset: 0x158

    int secretCount; // Offset: 0x188

}; // Size: 0x1C0
