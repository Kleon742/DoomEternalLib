struct idStaticEntity : idBloatedEntity
{
    // if true the geometry is processed for nodes and portals by dmap
    bool bsp; // Offset: 0xB88

    // if true the geometry is compiled into the AAS
    bool aas; // Offset: 0xB89

    // if true the (opaque) geometry will occlude other geometry
    bool occluder; // Offset: 0xB8A

}; // Size: 0xB90
