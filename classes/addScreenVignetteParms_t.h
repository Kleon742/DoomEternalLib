struct addScreenVignetteParms_t
{
    unsigned int actionId; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationFadeIn; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationFadeOut; // Offset: 0x20

    unsigned long long actionGroupHandle; // Offset: 0x28

    int declActionIdx; // Offset: 0x30

    bool looping; // Offset: 0x34

    int layer; // Offset: 0x38

    float scale; // Offset: 0x3C

    float curve; // Offset: 0x40

    idVec3 color; // Offset: 0x44

}; // Size: 0x50
