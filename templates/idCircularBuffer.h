// idCircularBuffer < idPlayerMetrics::damageDealtEntry_t , 32 >
template <typename _type_, auto _N0_>
struct idCircularBuffer
{
    _type_ buffer[_N0_]; // Offset: 0x0

    int num; // Offset: 0x200

    int head; // Offset: 0x204

}; // Size: 0x208
