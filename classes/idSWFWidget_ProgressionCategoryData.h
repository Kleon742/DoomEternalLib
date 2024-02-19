struct idSWFWidget_ProgressionCategoryData
{
    // Title of the progression category.
    idStrId categoryTitle; // Offset: 0x0

    // Icon for individual progression item
    idMaterial2* categoryIcon; // Offset: 0x8

    // Canonical color to use for individual progression item
    swfNamedColors_t categoryIconColor; // Offset: 0x10

}; // Size: 0x18
