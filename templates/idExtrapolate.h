// idExtrapolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > >
template <typename _value_type_, typename _time_type_>
struct idExtrapolate
{
    extrapolation_t extrapolationType; // Offset: 0x0

    _time_type_ startTime; // Offset: 0x8

    _time_type_ duration; // Offset: 0x10

    _value_type_ startValue; // Offset: 0x18

    _value_type_ baseSpeed; // Offset: 0x24

    _value_type_ speed; // Offset: 0x30

    _time_type_ currentTime; // Offset: 0x40

    _value_type_ currentValue; // Offset: 0x48

    float invDuration; // Offset: 0x54

}; // Size: 0x58
