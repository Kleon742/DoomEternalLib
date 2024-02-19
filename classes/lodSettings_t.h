struct lodSettings_t
{
    struct simplygon_t
    {
        // Relative importance of vertex colors (0 = ignore, 1 = default, > 1 = higher importance)
        float vertexColorImportance; // Offset: 0x0

        // Relative importance of geometry (0 = ignore, 1 = default)
        float geometryImportance; // Offset: 0x4

        // Relative importance of materials (0 = ignore, 1 = default)
        float materialImportance; // Offset: 0x8

        // Relative importance of skinning (0 = ignore, 1 = default)
        float skinningImportance; // Offset: 0xC

        // Relative importance of edge sets (0 = ignore, 1 = default)
        float edgeSetImportance; // Offset: 0x10

        // Relative importance of textures (0 = ignore, 1 = default)
        float textureImportance; // Offset: 0x14

        // Relative importance of shading (0 = ignore, 1 = default)
        float shadingImportance; // Offset: 0x18

        // Relative importance of groups (0 = ignore, 1 = default)
        float groupImportance; // Offset: 0x1C

        // Drastically increases the quality of the LODs normals, at the cost of extra processing time
        bool useHighQualityNormals; // Offset: 0x20

    }; // Size: 0x24

    // If set vertices within each others welding distance will be welded together.
    bool useWelding; // Offset: 0x0

    // Welding distance, below which vertices will be welded
    float weldDistance; // Offset: 0x4

    // if set, t-junctions will be removed. If enabled, it also requires UseWelding to be on.
    bool useTJunctionRemover; // Offset: 0x8

    // T-Junction distance, below which T-Junctions will be welded
    float tJunctionDistance; // Offset: 0xC

    // (degrees) When recomputeNormals is on, it prevents smoothing of normals if the angle between two triangles is above this value.
    float hardAngleThreshold; // Offset: 0x10

    // recompute normals
    bool recomputeNormals; // Offset: 0x14

    // splits triangles into different groups based on smoothing group id.
    bool useSmoothingGroups; // Offset: 0x15

    // Don't reduce a surface if it has less than this many triangles.
    int surfaceTriangleThreshold; // Offset: 0x18

    // Simplygon specific settings
    lodSettings_t::simplygon_t simplygon; // Offset: 0x1C

}; // Size: 0x40
