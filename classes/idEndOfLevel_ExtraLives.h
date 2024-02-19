struct idEndOfLevel_ExtraLives : idMenuElement
{
    bool overlayVisible; // Offset: 0x100

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overlayHideTime; // Offset: 0x108

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > forceEndTime; // Offset: 0x110

}; // Size: 0x118
