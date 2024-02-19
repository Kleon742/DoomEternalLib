struct idAISnippet_Shared_LerpEmissiveColorAndScaleBasedOnHealth : idAISnippet
{
    // emissive color at full health
    idColor maxHealthEmissiveColor; // Offset: 0x18

    // emissive color at zero health
    idColor zeroHealthEmissiveColor; // Offset: 0x28

    // emissive scale at full health
    float maxHealthEmissiveScale; // Offset: 0x38

    // emissive scale at zero health
    float zeroHealthEmissiveScale; // Offset: 0x3C

}; // Size: 0x40
