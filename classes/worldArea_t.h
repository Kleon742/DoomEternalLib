struct worldArea_t
{
    // these are the visible render models in this area
    idList < idRenderIndex , TAG_RENDERER , false > modelRefs[3]; // Offset: 0x0

    // these are lights that actually draw
    idList < idRenderIndex , TAG_RENDERER , false > drawLightRefs; // Offset: 0x48

    // these are lights casting real-time shadows
    idList < idRenderIndex , TAG_RENDERER , false > shadowLightRefs; // Offset: 0x60

    // these are the visible decals in this area
    idList < decalInfoCommitted_t * , TAG_RENDERER , false > decals; // Offset: 0x78

    // number of this world area which can be used to retrieve the bounds
    int areaNum; // Offset: 0x90

}; // Size: 0x98
