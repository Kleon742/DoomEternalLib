struct idLogicVariableModelEntityClassList : idLogicVariableModel
{
    typedef idTypeInfoPtr < idEntity > runtime_t;

    typedef idTypeInfoPtr < idEntity > asset_t;

    idLogicListAsset < idTypeInfoPtr < idEntity > > value; // Offset: 0x10

}; // Size: 0x28
