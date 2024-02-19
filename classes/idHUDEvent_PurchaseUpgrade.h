struct idHUDEvent_PurchaseUpgrade
{
    struct upgradePurchaseData_t
    {
        idDeclPerk* upgrade; // Offset: 0x0

        idPerkFamily* mod; // Offset: 0x8

        idDeclWeapon* weapon; // Offset: 0x10

        int upgradeIndex; // Offset: 0x18

    }; // Size: 0x20

    idHUDEvent_PurchaseUpgrade::upgradePurchaseData_t info; // Offset: 0x0

}; // Size: 0x20
