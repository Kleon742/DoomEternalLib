struct idLogicRegistryTypeConversionEntityListToTriggerList : idLogicRegistryTypeConversion
{
    typedef idLogicList < idLogicEntityPtr > from_t;

    typedef idLogicList < idLogicEntityTypePtr < idTrigger > > to_t;

}; // Size: 0x10
