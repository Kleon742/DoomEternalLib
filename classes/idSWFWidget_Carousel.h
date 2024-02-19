struct idSWFWidget_Carousel : idSWFWidget
{
    idList < idSWFWidget * , TAG_MENU , false > items; // Offset: 0x180

    idSWFWidget_Button* prevButton; // Offset: 0x198

    idSWFWidget_Button* nextButton; // Offset: 0x1A0

    // Only works with 3+ items
    bool allowWrapping; // Offset: 0x1A8

    float distanceBetweenItems; // Offset: 0x1AC

    float (*tweenEasingFunction)(float t , float b , float c , float d); // Offset: 0x1B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > customTweenDuration; // Offset: 0x1B8

    // If false, will scroll vertically
    bool scrollHorizontal; // Offset: 0x1C0

}; // Size: 0x1C8
