struct idLogicRegistryTypeConversionTriggerToTriggerList : idLogicRegistryTypeConversion
{
    typedef idLogicEntityTypePtr < idTrigger > from_t;

    typedef idLogicList < idLogicEntityTypePtr < idTrigger > > to_t;

}; // Size: 0x10
