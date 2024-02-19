struct idSWFWidget_FeatureSelectionPopup : idSWFWidget
{
    struct featureSelectionInfo_t
    {
        int commandID; // Offset: 0x0

        idStr label; // Offset: 0x8

        idStr description; // Offset: 0x38

        idMaterial2* image; // Offset: 0x68

        swfSoundType_t selectionSound; // Offset: 0x70

        bool showSticker; // Offset: 0x74

    }; // Size: 0x78

    idSWFWidget_FeatureSelectionPopup::anon_27 sprites; // Offset: 0x180

    idSWFWidget_List* buttonList; // Offset: 0x240

    idArray < idSWFWidget_Button * , 3 > buttons; // Offset: 0x248

    idStaticList < idSWFWidget_FeatureSelectionPopup::featureSelectionInfo_t , 3 , false , TAG_IDLIST > features; // Offset: 0x260

    idStr title; // Offset: 0x3E0

    int defaultFeatureIndex; // Offset: 0x410

}; // Size: 0x418
