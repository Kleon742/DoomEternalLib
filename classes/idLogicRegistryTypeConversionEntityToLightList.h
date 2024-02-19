struct idLogicRegistryTypeConversionEntityToLightList : idLogicRegistryTypeConversion
{
    typedef idLogicEntityPtr from_t;

    typedef idLogicList < idLogicEntityTypePtr < idLight > > to_t;

}; // Size: 0x10
