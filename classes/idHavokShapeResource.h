struct idHavokShapeResource : idHavokResource
{
    struct settings_t
    {
        // Override shape to contain material generically across
        idMaterial2* overrideMaterial; // Offset: 0x0

        // Rescale of the shape
        idVec3 scale; // Offset: 0x8

        // Convex decomposition settings
        convexDecomposition_t convexDecomposition; // Offset: 0x14

        // Partial shape from models with multiple parts etc.
        int index; // Offset: 0x1C

        // Simplification to the shape
        int simplify; // Offset: 0x20

        // Clip-mask filter
        int filterClipMask; // Offset: 0x24

    }; // Size: 0x28

    idHavokShapePointer shape; // Offset: 0x78

}; // Size: 0x80
