struct advancedDescriptionList_t
{
    struct advancedDescriptionInfo_t
    {
        // The localized description string, the string "Reduces cooldown time from <var1>s to <var2>s" and become "Reduces cooldown time from 10s to 5s" with varStrings of "10" and "5".
        idStrId desc; // Offset: 0x0

        // The list of variable strings to be inserted into the description string.
        idList < idStr , TAG_IDLIST , false > varStrings; // Offset: 0x8

    }; // Size: 0x20

    // If this value is -1 means the normal perk 'description' will be used, 0 to (list.Num()) will use the advanced description
    int activeIndex; // Offset: 0x0

    // The list of advanced descriptions.
    idList < advancedDescriptionList_t::advancedDescriptionInfo_t , TAG_IDLIST , false > list; // Offset: 0x8

}; // Size: 0x20
