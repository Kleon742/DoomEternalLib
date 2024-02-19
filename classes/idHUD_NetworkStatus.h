struct idHUD_NetworkStatus : idHUDElement
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > highLatency_startTime; // Offset: 0xF8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > latencyVariation_startTime; // Offset: 0x100

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > packetLoss_startTime; // Offset: 0x108

}; // Size: 0x110
