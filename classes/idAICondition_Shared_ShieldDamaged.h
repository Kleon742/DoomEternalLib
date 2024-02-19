struct idAICondition_Shared_ShieldDamaged : idAICondition
{
    // name of shield to check
    idAtomicString shieldName; // Offset: 0x18

    // how long ago to look
    idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x20

}; // Size: 0x28
