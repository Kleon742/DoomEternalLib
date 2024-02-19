struct idAbility_Groundslam : idInventoryItem
{
    // whether we are active or not
    bool active; // Offset: 0x110

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cooldownTime; // Offset: 0x118

    idInventoryItemUpgrade upgradeComponent; // Offset: 0x120

    idDeclAbility_Groundslam* groundslamDecl; // Offset: 0x150

}; // Size: 0x158
