struct idLogicVariableModelSoundEventList : idLogicVariableModel
{
    typedef idSoundEvent* runtime_t;

    typedef idSoundEvent* asset_t;

    // Type conversion declarations.
    idLogicListAsset < idSoundEvent * > value; // Offset: 0x10

}; // Size: 0x28
