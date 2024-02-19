struct idHUD_CompassInfo
{
    idVec3 worldPosition; // Offset: 0x0

    idStr label; // Offset: 0x10

    idDeclPOI* decl; // Offset: 0x40

    idSWFWidget* widget; // Offset: 0x48

    idSWFCachedSpriteInstance widgetPingSpr; // Offset: 0x50

    idSWFTextInstance* widgetDistanceTxt; // Offset: 0x80

    idSWFCachedSpriteInstance widgetAboveSpr; // Offset: 0x88

    idSWFCachedSpriteInstance widgetBelowSpr; // Offset: 0xB8

    float scale; // Offset: 0xE8

    float alpha; // Offset: 0xEC

    int poiUid; // Offset: 0xF0

    bool refreshedThisFrame; // Offset: 0xF4

    bool waitingForPoiToHide; // Offset: 0xF5

    bool hidePOIFromCompass; // Offset: 0xF6

}; // Size: 0xF8
