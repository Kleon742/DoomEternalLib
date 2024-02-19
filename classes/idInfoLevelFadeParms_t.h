struct idInfoLevelFadeParms_t
{
    // How long to take to fade in the level(MS)
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeMS; // Offset: 0x0

    // Use a GUI or Post Process fade mode
    idView::idViewFadeMode fadeMode; // Offset: 0x4

    // What color to fade to
    idColor fadeColor; // Offset: 0x8

    // sound to play on fade
    idSoundEvent* fadeSound; // Offset: 0x18

}; // Size: 0x20
