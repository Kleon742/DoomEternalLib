struct idInteractable_SlayerGate : idInteractable_Obstacle
{
    // requires a slayer rating greater than or equal to this
    int slayerRating; // Offset: 0x2D60

    // currency to give on completion
    idList < playerCurrency_t , TAG_IDLIST , false > currencyToGive; // Offset: 0x2D68

    // Order that the guards should appear in the mission screen.
    int dossierOrder; // Offset: 0x2D80

}; // Size: 0x2D88
