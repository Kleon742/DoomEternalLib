struct idAICombatHint_SuppressionFirePoint : idAICombatHint
{
    // specify ZERO to define the spray area -OR- NON-ZERO for other primary fire points and to the designate anticipated fire point
    int groupPriority; // Offset: 0xC10

    // specify the proportional time to spend on this point (1.0 for normal, 0.5 for half, etc.)
    float sprayTime; // Offset: 0xC14

}; // Size: 0xC18
