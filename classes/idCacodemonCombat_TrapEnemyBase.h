struct idCacodemonCombat_TrapEnemyBase : idAIState
{
    // memory key that holds the destination for the snare
    idAtomicString snareDestinationKey; // Offset: 0x130

    // Condition that we might need to stop
    fxCondition_t fxConditionToStop; // Offset: 0x138

}; // Size: 0x140
