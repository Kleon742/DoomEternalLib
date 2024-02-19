struct idAICondition_Shared_DistanceToEnemy : idAICondition
{
    // condition passes if linear distance to the enemy is within this range {{ units = m }}
    idRange < float > distanceRange; // Offset: 0x18

}; // Size: 0x20
