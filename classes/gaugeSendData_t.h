struct gaugeSendData_t
{
    idStr name; // Offset: 0x0

    float mean; // Offset: 0x30

    float std; // Offset: 0x34

    float minimum; // Offset: 0x38

    float maximum; // Offset: 0x3C

    float var; // Offset: 0x40

    idTypesafeTime < int , millisecondUnique_t , 1000 > timeRange; // Offset: 0x44

    gaugeType_t type; // Offset: 0x48

    int count; // Offset: 0x4C

}; // Size: 0x50
