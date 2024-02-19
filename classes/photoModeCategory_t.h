struct photoModeCategory_t
{
    // Icon to use for this category.
    idMaterial2* icon; // Offset: 0x0

    // Name of the category.
    idStr categoryName; // Offset: 0x8

    // Settings that go with this Category.
    idList < photoModeSetting_t , TAG_IDLIST , false > settings; // Offset: 0x38

}; // Size: 0x50
