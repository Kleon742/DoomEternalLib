struct idHUD_POI : idHUDElement
{
    // 0-1
    float offscreenPullX; // Offset: 0xF8

    // 0-1
    float offscreenPullY; // Offset: 0xFC

    idList < idPOIWidgetInfo , TAG_MENU , false > poiWidgetInfos; // Offset: 0x100

}; // Size: 0x118
