struct idLogicRegistryTypeConversionLightToEntityList : idLogicRegistryTypeConversion
{
    typedef idLogicEntityTypePtr < idLight > from_t;

    typedef idLogicList < idLogicEntityPtr > to_t;

}; // Size: 0x10
