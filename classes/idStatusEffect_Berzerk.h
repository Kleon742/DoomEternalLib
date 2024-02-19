struct idStatusEffect_Berzerk : idStatusEffect
{
    struct upgradeData_t
    {
        // How much to extend berserk effect on kills.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > berserkTimeExtensionGT_Kills; // Offset: 0x0

        // How many kills it takes to get to the most diminished return of time extension.
        int berserkTimeExtensionMax_Kills; // Offset: 0x8

        // How much diminishing returns we have for time extension.
        idDeclTable* berserkTimeExentionTable_Kills; // Offset: 0x10

        // How much to reduce Damage.
        float berserkDamageReductionPercentage; // Offset: 0x18

    }; // Size: 0x20

    // save / restore these
    int playerAnimAbilities; // Offset: 0x130

    // player weapon restored to this after BFG time is up
    idDeclWeapon* previousWeapon; // Offset: 0x138

    // player weapon restored to this after BFG time is up
    idDeclWeapon* previousReserveWeapon; // Offset: 0x140

    // number of kills player has done for this effect session.
    int numberOfKills; // Offset: 0x148

    // we are currently berzerking
    bool weAreBerzerking; // Offset: 0x14C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > waitingOnPreviousWeaponTime; // Offset: 0x150

    idStatusEffect_Berzerk::upgradeData_t upgradedData; // Offset: 0x158

}; // Size: 0x178
