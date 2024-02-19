struct idAICondition_Shared_ShieldProtectingMe : idAICondition
{
    // name of shield to check
    idAtomicString shieldName; // Offset: 0x18

    // pass condition only if shield will protect us for this long
    idTypesafeTime < float , secondUnique_t , 1 > secondsRequired; // Offset: 0x20

}; // Size: 0x28
