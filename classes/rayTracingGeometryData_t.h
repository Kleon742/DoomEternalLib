struct rayTracingGeometryData_t
{
    enum enum_F600 : int
    {
        FORMAT_POSITIONS_STRIDE_BITS = 4,
        FORMAT_LIGHTMAP_UVS_STRIDE_BITS = 4,
        FORMAT_NORMALS_STRIDE_BITS = 4,
        FORMAT_TANGENTS_STRIDE_BITS = 4,
        FORMAT_COLORS_STRIDE_BITS = 4,
        FORMAT_MATERIAL_UVS_STRIDE_BITS = 4,
        LOD_BITS = 3,
        SKINNING_BITS = 1,
        FORMAT_POSITIONS_STRIDE_SHIFT = 0,
        FORMAT_LIGHTMAP_UVS_STRIDE_SHIFT = 4,
        FORMAT_NORMALS_STRIDE_SHIFT = 8,
        FORMAT_TANGENTS_STRIDE_SHIFT = 12,
        FORMAT_COLORS_STRIDE_SHIFT = 16,
        FORMAT_MATERIAL_UVS_STRIDE_SHIFT = 20,
        LOD_SHIFT = 24,
        SKINNING_SHIFT = 27,
        COMPRESSION_BITS_SHIFT = 28,
        FORMAT_POSITION_STRIDE_MASK = 15,
        FORMAT_LIGHTMAP_UVS_STRIDE_MASK = 240,
        FORMAT_NORMALS_STRIDE_MASK = 3840,
        FORMAT_TANGENTS_STRIDE_MASK = 61440,
        FORMAT_COLORS_STRIDE_MASK = 983040,
        FORMAT_MATERIAL_UVS_STRIDE_MASK = 15728640,
        LOD_MASK = 117440512,
        SKINNING_MASK = 134217728,
        FORMAT_POSITIONS_COMPRESSED_MASK = 268435456,
        FORMAT_LIGHTMAP_UVS_COMPRESSED_MASK = 536870912,
        FORMAT_MATERIAL_UVS_COMPRESSED_MASK = 1073741824
    };

    unsigned int indicesOffset; // Offset: 0x0

    unsigned int positionsOffset; // Offset: 0x4

    unsigned int lightmapUVsOffset; // Offset: 0x8

    unsigned int normalsOffset; // Offset: 0xC

    unsigned int tangentsOffset; // Offset: 0x10

    unsigned int colorsOffset; // Offset: 0x14

    unsigned int materialUVsOffset; // Offset: 0x18

    unsigned int formatAndLod; // Offset: 0x1C

}; // Size: 0x20
