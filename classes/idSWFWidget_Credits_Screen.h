struct idSWFWidget_Credits_Screen : idSWFWidget
{
    idSWFWidget* overblack; // Offset: 0x188

    idSWFWidget_Credits_Line* creditLinePool[32]; // Offset: 0x190

    idDeclCredits* creditData; // Offset: 0x290

    int topLineIndex; // Offset: 0x298

    int nextDataIndex; // Offset: 0x29C

    float topPosition; // Offset: 0x2A0

    float bottomPosition; // Offset: 0x2A4

    bool needsPositionUpdate; // Offset: 0x2A8

    bool spritesInitialized; // Offset: 0x2A9

    bool afterCreditsCinematicStarted; // Offset: 0x2AA

    idTypesafeTime < int , millisecondUnique_t , 1000 > afterCreditsEndTime; // Offset: 0x2AC

    bool finishedCredits; // Offset: 0x2B0

}; // Size: 0x2B8
