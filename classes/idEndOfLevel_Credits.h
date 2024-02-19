struct idEndOfLevel_Credits : idMenuElement
{
    bool creditsFinished; // Offset: 0x100

    idDeclCredits* creditsDecl; // Offset: 0x108

    idSWFWidget_Credits_Screen* creditsScreen; // Offset: 0x110

    bool overlayVisible; // Offset: 0x120

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overlayHideTime; // Offset: 0x128

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > forceEndTime; // Offset: 0x130

    bool creditsSkipped; // Offset: 0x138

}; // Size: 0x140
