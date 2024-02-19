struct idSWFWidget_SectionList_Checkbox : idSWFWidget_SectionList
{
    struct checkboxSectionInfo_t
    {
        int id; // Offset: 0x0

        idList < idSWFWidget_CheckboxButton * , TAG_IDLIST , false > checkboxList; // Offset: 0x8

    }; // Size: 0x20

    idList < idSWFWidget_SectionList_Checkbox::checkboxSectionInfo_t * , TAG_IDLIST , false > checkboxListSections; // Offset: 0x230

    bool isRadioButtonList; // Offset: 0x248

}; // Size: 0x250
