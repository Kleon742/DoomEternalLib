struct renderModelExtendedInfo_t
{
    int lightRigDecl; // Offset: 0x0

    float customLodDistances[5]; // Offset: 0x4

    float maxTexelDensity; // Offset: 0x18

    float maxVisibleRange; // Offset: 0x1C

    float fadeVisibilityOver; // Offset: 0x20

    int lightGroupID; // Offset: 0x24

    int firstMaterialRemap; // Offset: 0x28

    int numMaterialRemaps; // Offset: 0x2C

    int firstMaterialRemapRT; // Offset: 0x30

    int numMaterialRemapsRT; // Offset: 0x34

    int outlineMaterial; // Offset: 0x38

    int geoDecalMaterial; // Offset: 0x3C

    idColor geoDecalTint; // Offset: 0x40

    idColor color; // Offset: 0x50

    float colorScale; // Offset: 0x60

    idColor emissiveColor; // Offset: 0x64

    float emissiveScale; // Offset: 0x74

    int firstRenderParm; // Offset: 0x78

    int numRenderParms; // Offset: 0x7C

    int parmBlockMaterial; // Offset: 0x80

    int traceGroup; // Offset: 0x84

    float ambientScale; // Offset: 0x88

    int customSkinIndex; // Offset: 0x8C

    float depthSortBias; // Offset: 0x90

    short sortBias; // Offset: 0x94

    unsigned short layerIdx; // Offset: 0x96

}; // Size: 0x98
