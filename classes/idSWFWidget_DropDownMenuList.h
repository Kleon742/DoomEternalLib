struct idSWFWidget_DropDownMenuList : idSWFWidget_DropDownList
{
    enum dropDownListType_t : int
    {
        CENTER = 0,
        LEFT = 1,
        RIGHT = 2,
        COUNT = 3
    };

    idSWFWidget_DropDownMenuList::dropDownListType_t dropDownType; // Offset: 0x218

}; // Size: 0x220
