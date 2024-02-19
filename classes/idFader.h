struct idFader
{
    enum type_t : int
    {
        FADE_LINEAR = 0,
        FADE_SINE = 1,
        FADE_INVERSE_SINE = 2
    };

    idFader::type_t type; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x10

    float startValue; // Offset: 0x18

    float endValue; // Offset: 0x1C

}; // Size: 0x20
