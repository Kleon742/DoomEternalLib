struct idInfoLevelFadeIn : idBloatedEntity
{
    // How long to take to fade in the level (in milliseconds).
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeMS; // Offset: 0xB88

    // Delay time (in milliseconds) before fade starts
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayMS; // Offset: 0xB8C

    // Set this to fade IN. Clear this to fade OUT.
    bool fadeIn; // Offset: 0xB90

    // Use a GUI or Post Process fade mode
    idView::idViewFadeMode fadeMode; // Offset: 0xB94

    // Activate this fade on LoadMap (otherwise, activated when triggered)
    bool activateOnLoad; // Offset: 0xB98

    // Only fade in after any key has been pressed.
    bool fadeInAfterAnyKey; // Offset: 0xB99

    // Removes this entity when activated
    bool removeWhenActivated; // Offset: 0xB9A

    // What color to fade to / from
    idColor fadeColor; // Offset: 0xB9C

}; // Size: 0xBB0
