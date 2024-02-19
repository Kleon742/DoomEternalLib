// idCurveTangent < float , float >
template <typename _value_>
struct idCurveTangent : idCurve2 < _value_ , _value_ >
{
    // tangents in
    idList < _value_ , TAG_IDLIST , false > tangentsIn; // Offset: 0x38

    // tangents out
    idList < _value_ , TAG_IDLIST , false > tangentsOut; // Offset: 0x50

}; // Size: 0x68
