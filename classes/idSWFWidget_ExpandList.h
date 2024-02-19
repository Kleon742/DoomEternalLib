struct idSWFWidget_ExpandList : idSWFWidget_List
{
    // Tween duration to expand or collapse the widget for a full list, 0 will be instant
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > tweenDuration; // Offset: 0x1D0

    float (*tweenEasingFunction)(float t , float b , float c , float d); // Offset: 0x1D8

    bool hidingMask; // Offset: 0x1E0

}; // Size: 0x1E8
