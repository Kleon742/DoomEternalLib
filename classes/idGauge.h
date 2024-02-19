struct idGauge
{
    idStr gaugeName; // Offset: 0x0

    gaugeType_t gaugeType; // Offset: 0x30

    int count; // Offset: 0x34

    float min; // Offset: 0x38

    float max; // Offset: 0x3C

    float mean; // Offset: 0x40

    // used in the "online algorithm" for computing variance
    float m2; // Offset: 0x44

    idTypesafeTime < int , millisecondUnique_t , 1000 > firstLogTime; // Offset: 0x48

    idTypesafeTime < int , millisecondUnique_t , 1000 > lastLogTime; // Offset: 0x4C

    // cached display values
    int cached_count; // Offset: 0x50

    idTypesafeTime < int , millisecondUnique_t , 1000 > cached_timeRange; // Offset: 0x54

    float cached_min; // Offset: 0x58

    float cached_max; // Offset: 0x5C

    float cached_mean; // Offset: 0x60

    float cached_std; // Offset: 0x64

    float cached_var; // Offset: 0x68

}; // Size: 0x70
