struct idLogicRegistryTypeConversionTimeToTimeList : idLogicRegistryTypeConversion
{
    typedef idTypesafeTime < int , millisecondUnique_t , 1000 > from_t;

    typedef idLogicList < milliseconds_t > to_t;

}; // Size: 0x10
