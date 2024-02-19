struct idDamageShield : idWeapon
{
    enum visualFxState_t : int
    {
        DAMAGE_SHIELD_NONE = 0,
        DAMAGE_SHIELD_OFF = 1,
        DAMAGE_SHIELD_ON = 2,
        DAMAGE_SHIELD_ON_DAMAGED = 3
    };

    struct idDamageShieldOwnerSyncData
    {
        int fitlerDamageToAmmo; // Offset: 0x0

        int localAmmoSpent; // Offset: 0x4

        float deflectionDotProduct; // Offset: 0x8

    }; // Size: 0xC

    struct idDamageShieldServerSyncData
    {
        // This is a temp hack to get around the fact that the ammo inventory is not spendable on the server.....
        int ammoToSpend; // Offset: 0x0

    }; // Size: 0x4

    idDamageShield::idDamageShieldServerSyncData serverSyncData; // Offset: 0x3BA0

    idDamageShield::idDamageShieldOwnerSyncData ownerSyncData; // Offset: 0x3BA4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > shieldCostGT; // Offset: 0x3BB0

    idDamageShield::visualFxState_t shieldFxState; // Offset: 0x3BB8

    int nextChangeTime; // Offset: 0x3BBC

}; // Size: 0x3BC0
