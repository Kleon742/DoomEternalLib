struct idAISnippet_Shared_MitigateDamage : idAISnippet
{
    // if true, start damage mitigation vs action target
    bool useActionTarget; // Offset: 0x18

    // if true, use potential targets lists
    bool usePotentialTargets; // Offset: 0x19

    // if true, end mitigation instead of starting it
    bool stop; // Offset: 0x1A

    // Name for the mitigation
    idAtomicString damageMitigationName; // Offset: 0x20

}; // Size: 0x28
