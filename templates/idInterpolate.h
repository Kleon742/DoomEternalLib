// idInterpolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > >
template <typename _value_type_, typename _time_type_>
struct idInterpolate
{
    _time_type_ startTime; // Offset: 0x0

    _time_type_ duration; // Offset: 0x8

    _value_type_ invDuration; // Offset: 0x10

    _value_type_ startValue; // Offset: 0x14

    _value_type_ endValue; // Offset: 0x18

    _time_type_ currentTime; // Offset: 0x20

    _value_type_ currentValue; // Offset: 0x28

}; // Size: 0x30
