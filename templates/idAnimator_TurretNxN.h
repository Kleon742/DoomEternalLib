// idAnimator_TurretNxN < 3 >
template <auto _N0_>
struct idAnimator_TurretNxN : idAnimator_Synced
{
    // idAnimator_TurretNxN < 3 >::triangle_t
    struct triangle_t
    {
        unsigned char vertex1; // Offset: 0x0

        unsigned char vertex2; // Offset: 0x1

        unsigned char vertex_N0_; // Offset: 0x2

    }; // Size: 0x3

    // idAnimator_TurretNxN < 3 >::blendgrid_t
    struct blendgrid_t
    {
        // points in the anim space
        idVec_N0_ vertexLocations[NUM_VERTICES]; // Offset: 0x0

        // triangulation of animation points
        idAnimator_TurretNxN < _N0_ >::triangle_t blendTriangles[NUM_BLEND_TRIANGLES]; // Offset: 0x6C

    }; // Size: 0x84

    // last containing blend stored for efficiency
    int lastBlendTriangle; // Offset: 0x1B0

    // handles for each aliases
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > vertexAliasHandles[_N0_*_N0_]; // Offset: 0x1B4

}; // Size: 0x1C8
