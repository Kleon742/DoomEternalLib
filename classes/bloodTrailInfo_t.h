struct bloodTrailInfo_t
{
    // half width used for generating blood trails
    float bloodTrailHalfWidth; // Offset: 0x0

    // half length used for generating tire trails
    float bloodTrailHalfLength; // Offset: 0x4

    // lifetime of blood trail (ms)
    float bloodTrailLifeTime; // Offset: 0x8

    // time when trail should begin to fade (ms)
    float bloodTrailFadeTime; // Offset: 0xC

    // mumber of quads before texture tiles
    int numQuadsBeforeTilingTex; // Offset: 0x10

    // material used when generating tire trails
    idMaterial2* bloodTrailMaterial; // Offset: 0x18

}; // Size: 0x20
