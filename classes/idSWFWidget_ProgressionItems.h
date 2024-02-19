struct idSWFWidget_ProgressionItems : idSWFWidget
{
    enum progressionItemState_t : int
    {
        PROGRESSION_ITEM_STATE_INVALID = -1,
        PROGRESSION_ITEM_STATE_DEFAULT = 0,
        PROGRESSION_ITEM_STATE_FOUND = 1
    };

    struct foundItemStatus_t
    {
        unsigned char id; // Offset: 0x0

        // knows what kind of item this is
        bool known; // Offset: 0x1

        // gained the item
        bool found; // Offset: 0x2

        int category; // Offset: 0x4

        automapMapGroupId_t automapGroup; // Offset: 0x8

    }; // Size: 0xC

    int numSprites; // Offset: 0x180

    idList < idSWFWidget_ProgressionItems::foundItemStatus_t , TAG_IDLIST , false > itemList; // Offset: 0x188

    idMaterial2* unknownItemIcon; // Offset: 0x1A0

    idList < idSWFWidget_ProgressionCategoryData , TAG_IDLIST , false >* progressionCategoryData; // Offset: 0x1A8

    idDeclUIDataGroup* progressionCategoryUIData; // Offset: 0x1B0

    bool dynamicItemSpacing; // Offset: 0x1B8

}; // Size: 0x1C0
