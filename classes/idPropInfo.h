struct idPropInfo
{
    idStrStatic < 256 > propName; // Offset: 0x0

    idList < idTagInfo , TAG_ANIMTAGS , false > tags; // Offset: 0x130

    bool visibleByDefault; // Offset: 0x148

}; // Size: 0x150
