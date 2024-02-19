struct idInteractable_Doom : idInteractable
{
    DoomClassicScreens_t currentScreen; // Offset: 0x2B50

    idSWFWidget* rootWidget; // Offset: 0x2B58

    idSWFWidget_List* buttonList; // Offset: 0x2B60

    idSWFWidget_Button* doom1Button; // Offset: 0x2B68

    idSWFWidget_Button* doom2Button; // Offset: 0x2B70

    idSWFWidget_List* inputList; // Offset: 0x2B78

    idPlayer* playerActivator; // Offset: 0x2B80

    bool d1Unlocked; // Offset: 0x2B88

    bool d2Unlocked; // Offset: 0x2B89

    // Telemtry timer
    int d1Duration; // Offset: 0x2B8C

    int d2Duration; // Offset: 0x2B90

    int keypad[12]; // Offset: 0x2BA8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > allowInputTime; // Offset: 0x2BD8

    // material to use for the Doom classic screen.
    idMaterial2* doomClassicMaterial; // Offset: 0x2BE0

}; // Size: 0x2BE8
