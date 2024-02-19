struct decalEntityParms_t
{
    idVec4 opacityParms; // Offset: 0x0

    idVec2 size; // Offset: 0x10

    idStr materialName; // Offset: 0x18

    float offsetHoriz; // Offset: 0x48

    float offsetVert; // Offset: 0x4C

    float depth; // Offset: 0x50

    float normalBlend; // Offset: 0x54

    short priority; // Offset: 0x58

    bool flipHoriz; // Offset: 0x5A

    bool flipVert; // Offset: 0x5B

    bool bakeIntoLightmap; // Offset: 0x5C

    bool invertNormal; // Offset: 0x5D

    bool overlayNormal; // Offset: 0x5E

    bool overrideNormal; // Offset: 0x5F

}; // Size: 0x60
