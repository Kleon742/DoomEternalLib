struct mapEntitySplinePath_t
{
    idStr type; // Offset: 0x0

    idList < idVec3 , TAG_IDLIST , false > controlPoints; // Offset: 0x30

    bool useForTexLod; // Offset: 0x48

    mapEntitySplinePath_t::anon_13 hasFlags; // Offset: 0x49

}; // Size: 0x50
