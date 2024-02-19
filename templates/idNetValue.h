// idNetValue < int >
template <typename _type_>
struct idNetValue
{
    _type_ currentValue; // Offset: 0x0

    _type_ nextValue; // Offset: 0x4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverSetTime; // Offset: 0x8

}; // Size: 0x10
