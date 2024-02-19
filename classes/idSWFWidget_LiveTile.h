struct idSWFWidget_LiveTile : idSWFWidget_CommandIconButton
{
    liveTileInfo_t info; // Offset: 0x2B0

    idSWFWidget_MarqueeText* header; // Offset: 0x560

    idSWFWidget_MarqueeText* descriptionMarquee; // Offset: 0x568

    idSWFWidget_WebImage* webImage; // Offset: 0x570

    idSWFWidget_ProgressBar* progressBar; // Offset: 0x578

    int challengeProgress; // Offset: 0x580

    int challengeGoal; // Offset: 0x584

}; // Size: 0x588
