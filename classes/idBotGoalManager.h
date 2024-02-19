struct idBotGoalManager : idEventReceiver
{
    idList < idManagedClassPtr < idEntity > , TAG_BOT , false > playerControlledEntityList; // Offset: 0x38

    idStaticList < idManagedClassPtr < idAnimatedEntity > , 189 , false , TAG_IDLIST > availableBotsList; // Offset: 0x50

    bool forceUpdate; // Offset: 0x1828

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastUpdateTimeGT; // Offset: 0x1830

    idList < idManagedClassPtr < idEntity > , TAG_BOT , false > debugBotEntityList; // Offset: 0x1838

}; // Size: 0x1850
