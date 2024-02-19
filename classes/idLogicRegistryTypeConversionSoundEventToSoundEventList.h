struct idLogicRegistryTypeConversionSoundEventToSoundEventList : idLogicRegistryTypeConversion
{
    typedef idSoundEvent* from_t;

    typedef idLogicList < idSoundEvent * > to_t;

}; // Size: 0x10
