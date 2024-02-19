struct addScreenOverlayParms_t
{
    unsigned int actionId; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationFadeIn; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationFadeOut; // Offset: 0x20

    int layer; // Offset: 0x28

    idMaterial2* overlayMaterial; // Offset: 0x30

    idVec4 tintColor; // Offset: 0x38

    float colorScale; // Offset: 0x48

    idVec2 colorMapTiling; // Offset: 0x4C

    idDeclTable* alphaTable; // Offset: 0x58

    idTypesafeTime < int , millisecondUnique_t , 1000 > alphaTablePeriod; // Offset: 0x60

    float flowMapScale; // Offset: 0x64

    idTypesafeTime < int , millisecondUnique_t , 1000 > flowPeriod; // Offset: 0x68

    float curveScale; // Offset: 0x6C

    float curvePower; // Offset: 0x70

    bool blendAdditive; // Offset: 0x74

    bool useColorMapAsAlphaOnly; // Offset: 0x75

    bool colorMapMirroredTiling; // Offset: 0x76

    bool revealedByAnimatedMasks; // Offset: 0x77

    bool looping; // Offset: 0x78

}; // Size: 0x80
