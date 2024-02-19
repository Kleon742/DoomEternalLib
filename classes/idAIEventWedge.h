struct idAIEventWedge : idAIEvent
{
    enum enum_45D01 : int
    {
        WEDGEPLANE_TOP = 0,
        WEDGEPLANE_BOTTOM = 1,
        WEDGEPLANE_LEFT = 2,
        WEDGEPLANE_RIGHT = 3,
        WEDGEPLANE_MAX = 4
    };

    // direction the wedge points
    idVec3 dir; // Offset: 0x80

    // distance of the far edge of the wedge {{ units = m }}
    float radius; // Offset: 0x8C

    // last time planes were updated
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastRefresh; // Offset: 0x90

    idMat3 axis; // Offset: 0x98

    idArray < idPlane , 4 > planes; // Offset: 0xBC

}; // Size: 0x100
