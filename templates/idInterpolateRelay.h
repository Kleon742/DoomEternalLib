// idInterpolateRelay < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > >
template <typename _value_type_, typename _time_type_>
struct idInterpolateRelay
{
    idInterpolate < _value_type_ , _time_type_ > type0; // Offset: 0x0

    idInterpolatePingPong < _value_type_ , _time_type_ > type1; // Offset: 0x30

    bool select1; // Offset: 0x70

}; // Size: 0x78
