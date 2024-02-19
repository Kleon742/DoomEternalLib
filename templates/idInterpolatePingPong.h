// idInterpolatePingPong < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > >
template <typename _value_type_, typename _time_type_>
struct idInterpolatePingPong
{
    _time_type_ startTime; // Offset: 0x0

    _time_type_ accelTime; // Offset: 0x8

    _time_type_ decelTime; // Offset: 0x10

    _time_type_ duration; // Offset: 0x18

    _value_type_ invAccelDuration; // Offset: 0x20

    _value_type_ invDecelDuration; // Offset: 0x24

    _value_type_ startValue; // Offset: 0x28

    _value_type_ endValue; // Offset: 0x2C

    _time_type_ currentTime; // Offset: 0x30

    _value_type_ currentValue; // Offset: 0x38

    bool infDuration; // Offset: 0x3C

}; // Size: 0x40
