struct idLogicRegistryTypeConversionEntityToTriggerList : idLogicRegistryTypeConversion
{
    typedef idLogicEntityPtr from_t;

    typedef idLogicList < idLogicEntityTypePtr < idTrigger > > to_t;

}; // Size: 0x10
