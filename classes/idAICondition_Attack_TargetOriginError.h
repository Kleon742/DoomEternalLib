struct idAICondition_Attack_TargetOriginError : idAICondition
{
    // if distance from original predicted origin to updated predicted origin is greater than this, not valid {{ units = m }}
    float maxErrorDist; // Offset: 0x18

}; // Size: 0x20
