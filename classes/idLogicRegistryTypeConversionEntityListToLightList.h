struct idLogicRegistryTypeConversionEntityListToLightList : idLogicRegistryTypeConversion
{
    typedef idLogicList < idLogicEntityPtr > from_t;

    typedef idLogicList < idLogicEntityTypePtr < idLight > > to_t;

}; // Size: 0x10
