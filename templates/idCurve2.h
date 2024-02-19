// idCurve2 < float , float >
template <typename _value_>
struct idCurve2
{
    // times
    idList < _value_ , TAG_IDLIST , false > times; // Offset: 0x0

    // values
    idList < _value_ , TAG_IDLIST , false > values; // Offset: 0x18

    // loop mode
    idCurves::loopMode_t loopMode; // Offset: 0x30

}; // Size: 0x38
