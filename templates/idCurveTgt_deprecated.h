// idCurveTgt_deprecated < float , float >
template <typename _value_>
struct idCurveTgt_deprecated
{
    // value
    idCurve2 < _value_ , _value_ > value; // Offset: 0x0

    // tgt in
    idList < _value_ , TAG_IDLIST , false > tgtIn; // Offset: 0x38

    // tgt out
    idList < _value_ , TAG_IDLIST , false > tgtOut; // Offset: 0x50

}; // Size: 0x68
