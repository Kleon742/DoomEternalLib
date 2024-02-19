struct idInteractable_NightmareMarker : idInteractable
{
    // the node at which we need to inject the data to display
    idTypeInfoGraphPath markerDisplayState; // Offset: 0x2B50

    bool isBestRun; // Offset: 0x2B80

    bool isFriend; // Offset: 0x2B81

    bool isPublic; // Offset: 0x2B82

    idSWFWidget* rootWidget; // Offset: 0x2B88

}; // Size: 0x2B90
