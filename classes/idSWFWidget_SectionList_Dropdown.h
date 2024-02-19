struct idSWFWidget_SectionList_Dropdown : idSWFWidget_SectionList
{
    struct dropdownSectionInfo_t
    {
        int id; // Offset: 0x0

        idList < idSWFWidget_DropdownButton * , TAG_IDLIST , false > dropdownList; // Offset: 0x8

    }; // Size: 0x20

    idList < idSWFWidget_SectionList_Dropdown::dropdownSectionInfo_t * , TAG_IDLIST , false > dropdownListSections; // Offset: 0x230

}; // Size: 0x248
