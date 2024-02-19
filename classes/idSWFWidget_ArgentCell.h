struct idSWFWidget_ArgentCell : idSWFWidget
{
    struct headerCategoryInfo_t
    {
        idDeclPerk* perk; // Offset: 0x0

        int count; // Offset: 0x8

        int obtained; // Offset: 0xC

        int categoryEnum; // Offset: 0x10

    }; // Size: 0x18

    idSWFSpriteInstance* prePopupSprite; // Offset: 0x180

    masteryData_t masteryData; // Offset: 0x188

    idList < idSWFWidget_ArgentCell::headerCategoryInfo_t , TAG_IDLIST , false > headerInfoList; // Offset: 0x218

    idSWFWidget_DynamicGrid* upgradeGrid; // Offset: 0x230

    idSWFWidget_List* masteryList; // Offset: 0x238

    idList < idHUDEvent_ArgentCellPerkFamilyUpdate::perkFamilyInfo_t , TAG_IDLIST , false > perkFamilies; // Offset: 0x240

    idList < idHUDEvent_ArgentCellCategoryUpdate::categoryInfo_t , TAG_IDLIST , false > categories; // Offset: 0x258

    bool expanded; // Offset: 0x270

}; // Size: 0x278
