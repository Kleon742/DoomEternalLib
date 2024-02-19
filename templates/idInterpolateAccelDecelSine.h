// idInterpolateAccelDecelSine < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > >
template <typename _value_type_, typename _time_type_>
struct idInterpolateAccelDecelSine
{
    _time_type_ startTime; // Offset: 0x0

    _time_type_ accelTime; // Offset: 0x8

    _time_type_ linearTime; // Offset: 0x10

    _time_type_ decelTime; // Offset: 0x18

    _value_type_ startValue; // Offset: 0x20

    _value_type_ endValue; // Offset: 0x24

    idExtrapolate < _value_type_ , _time_type_ > extrapolate; // Offset: 0x28

}; // Size: 0x60
