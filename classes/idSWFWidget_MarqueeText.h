struct idSWFWidget_MarqueeText : idSWFWidget
{
    enum marqueeState_t : int
    {
        MARQUEE_NONE = 0,
        MARQUEE_INITIAL_WAIT = 1,
        MARQUEE_MOVE = 2,
        MARQUEE_END_WAIT = 3,
        MARQUEE_FADE_OUT = 4,
        MARQUEE_FADE_IN = 5
    };

    idStr textValue; // Offset: 0x180

    idList < idStr , TAG_IDLIST , false > textSpritePath; // Offset: 0x1B0

    idStr maskName; // Offset: 0x1C8

    bool canMarquee; // Offset: 0x1F8

    float endPadding; // Offset: 0x1FC

    swfEditTextVertAlign_t verticalAlignment; // Offset: 0x200

    idSWFWidget_MarqueeText::marqueeState_t marqueeState; // Offset: 0x204

    // Start time of the current state
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > marqueeStartTime; // Offset: 0x208

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > initialWaitTime; // Offset: 0x210

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endWaitTime; // Offset: 0x218

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeOutTime; // Offset: 0x220

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeInTime; // Offset: 0x228

    // Pixels per second
    float velocity; // Offset: 0x230

}; // Size: 0x238
