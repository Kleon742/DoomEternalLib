struct idUpgradeHandler
{
    idManagedClassPtr < idPlayer > playerOwner; // Offset: 0x8

    uint16 broadcastID; // Offset: 0x28

    idSysMutex mutex; // Offset: 0x30

    idList < const idDeclPerk * , TAG_IDLIST , false > perkUpgrades; // Offset: 0x58

    idList < const idDeclPerk * , TAG_IDLIST , false > perkDowngrades; // Offset: 0x70

}; // Size: 0x88
