struct idLogicRegistryTypeConversionTriggerListToEntityList : idLogicRegistryTypeConversion
{
    typedef idLogicList < idLogicEntityTypePtr < idTrigger > > from_t;

    typedef idLogicList < idLogicEntityPtr > to_t;

}; // Size: 0x10
