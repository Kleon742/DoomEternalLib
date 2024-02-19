struct idSWFWidget_ProgressionCategoryItemInfo : idSWFWidget
{
    idStrId labelId; // Offset: 0x180

    bool sectionHeader; // Offset: 0x184

    int current; // Offset: 0x188

    int max; // Offset: 0x18C

    bool showCompleteState; // Offset: 0x190

    bool animateCompleteState; // Offset: 0x191

    progressionCategory_t category; // Offset: 0x194

    idMaterial2* categoryIcon; // Offset: 0x198

    swfNamedColors_t categoryIconColor; // Offset: 0x1A0

}; // Size: 0x1A8
