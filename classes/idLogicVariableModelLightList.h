struct idLogicVariableModelLightList : idLogicVariableModel
{
    typedef idLogicEntityTypePtr < idLight > runtime_t;

    typedef idLogicEntityTypePtr < idLight > asset_t;

    idLogicListAsset < idLogicEntityTypePtr < idLight > > value; // Offset: 0x10

}; // Size: 0x28
