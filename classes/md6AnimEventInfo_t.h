struct md6AnimEventInfo_t
{
    idMD6Anim* anim; // Offset: 0x0

    idDeclMD6* decl; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x10

    short lastFrame; // Offset: 0x18

    short loopCount; // Offset: 0x1A

    unsigned char initCounter; // Offset: 0x1C

}; // Size: 0x20
