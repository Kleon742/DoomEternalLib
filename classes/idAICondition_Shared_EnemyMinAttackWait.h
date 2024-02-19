struct idAICondition_Shared_EnemyMinAttackWait : idAICondition
{
    // pass condition if min time until next enemy attack is over this
    idTypesafeTime < float , secondUnique_t , 1 > secondsRequired; // Offset: 0x18

}; // Size: 0x20
