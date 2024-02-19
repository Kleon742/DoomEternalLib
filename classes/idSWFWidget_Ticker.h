struct idSWFWidget_Ticker : idSWFWidget
{
    struct tickerData_t
    {
        idMaterial2* actorIcon; // Offset: 0x0

        idStr actorText; // Offset: 0x8

        swfNamedColors_t actorColor; // Offset: 0x38

        idMaterial2* icon; // Offset: 0x40

        idStr text; // Offset: 0x48

        swfNamedColors_t textColor; // Offset: 0x78

        swfNamedColors_t bgColor; // Offset: 0x7C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x80

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x88

    }; // Size: 0x90

    idList < idSWFWidget_Ticker::tickerData_t , TAG_IDLIST , false > queuedData; // Offset: 0x180

    idList < const idSWFSpriteInstance * , TAG_IDLIST , false > hidingItems; // Offset: 0x198

    idSWFCachedSpriteInstance listSprite; // Offset: 0x1B0

    swfNamedColors_t defaultColor; // Offset: 0x1E0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tweenDuration; // Offset: 0x1E8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > defaultDuration; // Offset: 0x1F0

    float (*tweenEasingFunction)(float t , float b , float c , float d); // Offset: 0x1F8

    int maxNumVisibleItems; // Offset: 0x200

}; // Size: 0x208
