struct idLogicRegistryTypeConversionLightToLightList : idLogicRegistryTypeConversion
{
    typedef idLogicEntityTypePtr < idLight > from_t;

    typedef idLogicList < idLogicEntityTypePtr < idLight > > to_t;

}; // Size: 0x10
