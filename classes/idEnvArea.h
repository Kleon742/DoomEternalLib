struct idEnvArea : idBloatedEntity
{
    // post-effects environment decl for this light
    idDeclEnv* envEffectsDecl; // Offset: 0xB88

    // if set, index of the visibility group to use when baking lightmap/shadow cache for this environment
    int visibilityGroup; // Offset: 0xB90

    // if set, does not use a static shadow geometry cache
    bool noShadowCache; // Offset: 0xB94

    // if set, this will be used by a buildArea with localized sky lighting for baking sky contribution to lightmap
    idImageCubeCPU skyHDRCubeMapName; // Offset: 0xB98

    // planes for the polytope
    idList < idVec4 , TAG_IDLIST , false > planes; // Offset: 0xBA0

}; // Size: 0xBB8
