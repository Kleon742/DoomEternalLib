struct idAICondition_Shared_IsEnemyOnLeftSide : idAICondition
{
    // time (in seconds) in the future to predict enemy pos
    idTypesafeTime < float , secondUnique_t , 1 > predictionTime; // Offset: 0x18

}; // Size: 0x20
