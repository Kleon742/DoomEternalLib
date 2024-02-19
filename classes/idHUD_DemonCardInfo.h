struct idHUD_DemonCardInfo : idHUDElement
{
    idHUDEvent_DemonCardUpdate::demonCardInfo_t demonCardInfo; // Offset: 0xF8

    idSWFWidget_Text* cardName; // Offset: 0x120

    idList < idSWFWidget * , TAG_IDLIST , false > pips; // Offset: 0x128

}; // Size: 0x140
