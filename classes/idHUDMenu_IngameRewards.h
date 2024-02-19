struct idHUDMenu_IngameRewards : idMenuElement
{
    idDeferredFuncList deferred; // Offset: 0x100

    idDeclUICustomData_HUD_IngameRewards* uiData; // Offset: 0x148

    idSWFWidget_EOL_MasterLevelChallenge* notificationWidget; // Offset: 0x150

    idSWFWidget_EOL_MasterLevelReward* rewardWidget; // Offset: 0x158

    idStaticList < idHUDEvent_ShowIngameRewards::ingameReward_t , 10 , false , TAG_IDLIST > rewards; // Offset: 0x160

    idList < const idDeclWarehouseOfflineContainer * , TAG_IDLIST , false > containers; // Offset: 0x218

    idDeclUICustomData_HUD_IngameRewards::notificationInfo_t notificationInfo; // Offset: 0x230

    bool useFancyUnlockAnimation; // Offset: 0x280

    bool showRewards; // Offset: 0x281

    bool showTeasers; // Offset: 0x282

}; // Size: 0x288
