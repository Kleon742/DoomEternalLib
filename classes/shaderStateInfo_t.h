struct shaderStateInfo_t
{
    renderProgPermutationData_t permutationData; // Offset: 0x0

    idStr inheritFrom; // Offset: 0xC50

    idStr rawSourcePermutations; // Offset: 0xC80

    idStr mergeableDataRegister; // Offset: 0xCB0

    idStr rawSourceParms; // Offset: 0xCE0

    idStr rawSourceState; // Offset: 0xD10

    idStr rawSourceFlags; // Offset: 0xD40

    idStr rawSourceAttribRename; // Offset: 0xD70

    idStr rawSourceComputeLayout; // Offset: 0xDA0

    idStr rawSourceShaderStorageLayout; // Offset: 0xDD0

    idStr rawSourceCompilerOptions; // Offset: 0xE00

    idStr rawSourceRenderLayers; // Offset: 0xE30

    idStr rawSourceDescriptorSetLayout; // Offset: 0xE60

    idStr rawSourceRenderOutput; // Offset: 0xE90

    idStr rawSourceStages; // Offset: 0xEC0

    idStr rawSourceRayPayloads; // Offset: 0xEF0

    idStr rawSourceRayConfig; // Offset: 0xF20

    idStr rawSourceHLSLHeader; // Offset: 0xF50

    idStr rawSourceHLSLHeaders[8]; // Offset: 0xF80

    idStr rawSourceHLSLSources[8]; // Offset: 0x1100

}; // Size: 0x1280
