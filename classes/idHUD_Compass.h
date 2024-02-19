struct idHUD_Compass : idHUDElement
{
    idList < idCompassWidgetInfo , TAG_MENU , false > poiWidgetInfos; // Offset: 0xF8

    idList < idHUD_CompassInfo , TAG_MENU , false > poiInfo; // Offset: 0x110

    idList < idSWFSpriteInstance * , TAG_MENU , false > lineSprites; // Offset: 0x128

    idSWFTextInstance* cardinalDirectionTxt; // Offset: 0x140

    idSWFCachedSpriteInstance sentinelArmorSpr; // Offset: 0x148

    bool sentinelArmorActive; // Offset: 0x178

}; // Size: 0x180
