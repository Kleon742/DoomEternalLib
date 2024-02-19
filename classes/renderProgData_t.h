struct renderProgData_t
{
    // blend modes, write masks, etc (passed to GL_State)
    unsigned long long glState; // Offset: 0x0

    // renderParm overrides
    idParmBlock parmBlock; // Offset: 0x8

    idAtomicString descriptorSetLayout; // Offset: 0x18

    idGrowableList < short , 200 , TAG_IDLIST > viewRenderParms; // Offset: 0x20

    idGrowableList < short , 200 , TAG_IDLIST > rayViewRenderParms; // Offset: 0x1C8

    idGrowableList < short , 64 , TAG_IDLIST > instanceRenderParms; // Offset: 0x370

    idGrowableList < short , 64 , TAG_IDLIST > surfaceRenderParms; // Offset: 0x408

    idGrowableList < short , 64 , TAG_IDLIST > structTypeParms; // Offset: 0x4A0

    idGrowableList < short , 64 , TAG_IDLIST > structDescSetParms; // Offset: 0x538

    idGrowableList < short , 16 , TAG_IDLIST > sampledImageParms[4]; // Offset: 0x5D0

    idGrowableList < short , 16 , TAG_IDLIST > bufferImageParms[4]; // Offset: 0x6B0

    renderProgPermutationData_t permutationData; // Offset: 0x790

    // alphatest, etc
    int flags; // Offset: 0x13E0

    // taken from parmBlock
    float stageSort; // Offset: 0x13E4

    // stages enabled
    int stages; // Offset: 0x13E8

    // fragment program writes 'result.color0', 'result.color1', etc.
    int numColorOutputs; // Offset: 0x13EC

    // if ( glState & GLS_ALPHA_COVERAGE ) != 0
    bool hasAlphaToCoverage; // Offset: 0x0

    // vertex program performs a texture lookup
    bool hasVertexTexture; // Offset: 0x0

    // fragment program uses the 'clip()' function
    bool hasClip; // Offset: 0x0

    // fragment program writes 'result.depth'
    bool hasDepthOutput; // Offset: 0x0

    // fragment program can have branches stripped (PS3 only)
    bool hasBranchStripping; // Offset: 0x0

    // fragment program force early depth-stencil test before the pixel shader execution
    bool hasEarlyDepthStencil; // Offset: 0x0

    // shader program has custom GL State
    bool hasCustomGLState; // Offset: 0x0

    // Program uses global texture descriptor set
    bool usesGlobalTextures; // Offset: 0x0

    // Program can render multiple surfaces using different descriptor sets at once
    bool supportsMerging; // Offset: 0x0

    // Program has a compatible mergeable permutation
    bool hasMergeableVersion; // Offset: 0x0

    // geometry program emits vertices
    bool useGSEmitVertex; // Offset: 0x0

    // Reads any UBO/SSBO/UTB/STB
    bool readsBuffer; // Offset: 0x0

    // Writes SSBO or STB
    bool writesBuffer; // Offset: 0x0

    // Forced triangle winding
    bool forcesWinding; // Offset: 0x0

    // Stage uses view descriptor set
    bool usesDescriptorSets[8]; // Offset: 0x13F2

    // mask for program stage (right now only relevant for vertex)
    unsigned int vertexMask[8]; // Offset: 0x13FC

    // mask for program stage (right now only relevant for vertex)
    unsigned int indexMask[8]; // Offset: 0x141C

    // bit per valid stage
    unsigned int validStages; // Offset: 0x143C

    // input attribute information
    idStaticList < int , 64 , false , TAG_IDLIST > inAttribs[8]; // Offset: 0x1440

    // output attribute information
    idStaticList < int , 64 , false , TAG_IDLIST > outAttribs[8]; // Offset: 0x1D00

    // only relevant for compute compute local size (defined by layout in shader)
    unsigned int computeLocalSize[3]; // Offset: 0x25C0

    // compiler options
    renderProgCompilerOpts_t compilerOptions; // Offset: 0x25CC

    // render output format
    progRenderOutputFormat_t renderOutputFormat; // Offset: 0x264C

    idDeclRenderLayerDefinition* renderLayerDefinition; // Offset: 0x2650

    int renderLayerDefinitionIndex; // Offset: 0x2658

    int renderLayerNumRenderParms; // Offset: 0x265C

    idStaticList < unsigned char , 4 , false , TAG_IDLIST > usedInlineConstants; // Offset: 0x2660

    unsigned long long progNameFingerprint; // Offset: 0x2680

    idList < idStr , TAG_IDLIST , false > printfFormatStrings; // Offset: 0x2688

    stageRayPayloads_t rayGenPayloads; // Offset: 0x26A0

    stageRayPayloads_t hitPayloads; // Offset: 0x2798

    stageRayPayloads_t missPayloads; // Offset: 0x2890

}; // Size: 0x2988
