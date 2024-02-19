struct idPlayerHealth : idShieldHealthT < playerHealthComponent_t , PLAYER_HEALTH_MAX , PLAYER_HEALTH_COMPONENT_HEALTH , PLAYER_HEALTH_COMPONENT_ARMOR >
{
    idList < idUpgradeMod_Data::dataModType_t , TAG_IDLIST , false > dataUpgrades[2]; // Offset: 0x1E0

}; // Size: 0x210
