struct idAISnippet_ArmoredBaron_ArmorRegenShowMeshes : idAISnippet
{
    // show meshes on this damage group
    idAtomicString bodyArmorDamageGroup; // Offset: 0x18

    // delay in armor reappear
    idTypesafeTime < int , millisecondUnique_t , 1000 > delay; // Offset: 0x20

}; // Size: 0x28
