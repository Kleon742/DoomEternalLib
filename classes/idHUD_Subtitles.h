struct idHUD_Subtitles : idHUDElement
{
    struct subtitleLine_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

        idStr text; // Offset: 0x10

        idStr speaker; // Offset: 0x40

        idManagedClassPtr < const idEntity > source; // Offset: 0x70

        idSoundEvent* sound; // Offset: 0x90

        bool isPartialLine; // Offset: 0x98

        bool isFirstPart; // Offset: 0x99

        bool isLastPart; // Offset: 0x9A

    }; // Size: 0xA0

    struct activeLineInfo_t
    {
        idHUD_Subtitles::subtitleLine_t* lineData; // Offset: 0x0

        int spriteIndex; // Offset: 0x8

    }; // Size: 0x10

    idArray < idSWFWidget * , 3 > textWidgets; // Offset: 0xF8

    idList < const idHUD_Subtitles::subtitleLine_t * , TAG_IDLIST , false > queuedLines; // Offset: 0x110

    idList < idHUD_Subtitles::activeLineInfo_t , TAG_IDLIST , false > activeLines; // Offset: 0x128

    // Cache these so if they change at runtime we can update the sprites
    int currentSubtitleSize; // Offset: 0x140

    int cachedShowSpeaker; // Offset: 0x144

    bool cachedShowBacking; // Offset: 0x148

    idSoundEvent* debugInfoSound; // Offset: 0x150

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > debugInfoStartTime; // Offset: 0x158

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > debugInfoSoundEndTime; // Offset: 0x160

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > debugInfoSubtitleEndTime; // Offset: 0x168

}; // Size: 0x170
