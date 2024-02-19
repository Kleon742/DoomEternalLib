struct modelTrace_t
{
    localTrace_t tr; // Offset: 0x0

    // Will be NULL if nothing was hit.
    idRenderModelSurface* surf; // Offset: 0x30

    // Will be NULL if nothing was hit.
    idRenderModel* entity; // Offset: 0x38

}; // Size: 0x40
