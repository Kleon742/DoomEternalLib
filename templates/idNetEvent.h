// idNetEvent < 15 >
struct idNetEvent
{
    int count; // Offset: 0x0

    int lastCount; // Offset: 0x4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSetTime; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ignoreThresholdGT; // Offset: 0x10

}; // Size: 0x18
