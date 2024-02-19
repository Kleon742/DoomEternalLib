struct idAICondition_Shared_IsEnemyMoving : idAICondition
{
    // Movement direction relative to the AI. Assume the AI is facing down the +x axis
    idVec3 relativeDirection; // Offset: 0x18

    // Arc or tolerance the movement can be within
    float degreeTolerance; // Offset: 0x24

}; // Size: 0x28
