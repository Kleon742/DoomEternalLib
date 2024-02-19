struct idAICondition_Shared_ShieldHealthFraction : idAICondition
{
    // name of shield, or empty string for "current"
    idAtomicString shieldName; // Offset: 0x18

    // shield must have this much health fraction for condition to pass
    float requiredFraction; // Offset: 0x20

}; // Size: 0x28
