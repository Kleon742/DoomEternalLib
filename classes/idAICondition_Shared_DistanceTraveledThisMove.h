struct idAICondition_Shared_DistanceTraveledThisMove : idAICondition
{
    // return true if AI's current move is valid AND total dist traveled during current move is within this range {{ units = m }}
    idRange < float > distRange; // Offset: 0x18

}; // Size: 0x20
