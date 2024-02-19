struct idPOIWidgetInfo
{
    idDeclPOI* decl; // Offset: 0x0

    float (*easingFunction)(float t , float b , float c , float d); // Offset: 0x8

    idList < idHUD_POIInfo , TAG_MENU , false > poiInfos; // Offset: 0x10

}; // Size: 0x28
