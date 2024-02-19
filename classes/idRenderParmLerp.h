struct idRenderParmLerp
{
    // the render parm decl
    idDeclRenderParm* decl; // Offset: 0x0

    // number of scalar values used by this render parm
    int numValues; // Offset: 0x8

    // time transition started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x10

    // duration of transition in milliseconds
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x18

    idVec4 startValue; // Offset: 0x20

    idVec4 endValue; // Offset: 0x30

    idVec4 curValue; // Offset: 0x40

}; // Size: 0x50
