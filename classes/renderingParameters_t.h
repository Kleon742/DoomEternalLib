struct renderingParameters_t
{
    idImageView* image; // Offset: 0x0

    idImageView* emissiveImage; // Offset: 0x8

    idImageView* motionImage; // Offset: 0x10

    idDrawVert* verts; // Offset: 0x18

    unsigned int numVertsPerParticle; // Offset: 0x20

    particleRenderMode_t mode; // Offset: 0x24

    simulationSpace_t simulationSpace; // Offset: 0x28

    sortParameter_t sortParameter; // Offset: 0x2C

    bool reverseSort; // Offset: 0x30

    float curvature; // Offset: 0x34

    float emissive; // Offset: 0x38

    float emissiveMultiplier; // Offset: 0x3C

    float alphaFade; // Offset: 0x40

    float softParticleAlphaScale; // Offset: 0x44

    float entityColorBlendVal; // Offset: 0x48

    float nearFadeBeginDistance; // Offset: 0x4C

    float nearFadeEndDistance; // Offset: 0x50

    float farFadeBeginDistance; // Offset: 0x54

    float farFadeEndDistance; // Offset: 0x58

    float depthOffsetScale; // Offset: 0x5C

    float translucencyScale; // Offset: 0x60

    bool backfaceCulling; // Offset: 0x64

    bool opaque; // Offset: 0x65

    float specular; // Offset: 0x68

    float smoothness; // Offset: 0x6C

    bool gunParticle; // Offset: 0x70

    bool equipmentLauncherParticle; // Offset: 0x71

    bool lootParticle; // Offset: 0x72

    bool squeezeNormal; // Offset: 0x73

    bool alphaTest; // Offset: 0x74

    bool useLightAtlas; // Offset: 0x75

    bool parametric; // Offset: 0x76

    float cameraOffset; // Offset: 0x78

    float emissiveMaskMultiplier; // Offset: 0x7C

    int emissiveMaskMode; // Offset: 0x80

    idVec3 emissiveMaskColor; // Offset: 0x84

    idVec3 emissiveMaskColor2; // Offset: 0x90

    idVec2 motionVectorIntensity; // Offset: 0x9C

    idVec2 pivotOffset; // Offset: 0xA4

}; // Size: 0xB8
