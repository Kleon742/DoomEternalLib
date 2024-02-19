struct idProp_HealthPickup : idProp_Pickup
{
    // Amount of time in MS until the health pickup respawns
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeUntilRespawnMS; // Offset: 0x1DF8

    // Amount to heal
    int amountToHeal; // Offset: 0x1DFC

    // Which player health component to heal
    playerHealthComponent_t componentToHeal; // Offset: 0x1E00

    // Determines if the health pack can be picked up if the player is already fully healed
    bool canBePickedUpByFullyHealedPlayer; // Offset: 0x1E04

}; // Size: 0x1E08
