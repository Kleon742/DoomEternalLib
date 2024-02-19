struct idHUD_POIInfo
{
    idVec3 worldPosition; // Offset: 0x0

    idVec3 offScreenPosition; // Offset: 0xC

    idVec2 screenPosition; // Offset: 0x18

    idVec2 compassScreenPosition; // Offset: 0x20

    idStr label; // Offset: 0x28

    idSWFWidget* widget; // Offset: 0x58

    float scale; // Offset: 0x60

    float alpha; // Offset: 0x64

    int durationMS; // Offset: 0x68

    int startTimeMS; // Offset: 0x6C

    int refreshTimeMS; // Offset: 0x70

    bool hasLOS; // Offset: 0x74

    bool usesLOS; // Offset: 0x75

    bool isBountyPOI; // Offset: 0x76

    bool isTimedBountyPOI; // Offset: 0x77

    int entityNum; // Offset: 0x78

    float lerpAmount; // Offset: 0x7C

    int poiUid; // Offset: 0x80

    bool refreshedThisFrame; // Offset: 0x84

    float distanceToPlayer; // Offset: 0x88

    bool drawClosest; // Offset: 0x8C

    bool hidden; // Offset: 0x8D

    bool animating; // Offset: 0x8E

    int overrideColor; // Offset: 0x90

}; // Size: 0x98
