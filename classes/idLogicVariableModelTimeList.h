struct idLogicVariableModelTimeList : idLogicVariableModel
{
    typedef idTypesafeTime < int , millisecondUnique_t , 1000 > runtime_t;

    typedef idTypesafeTime < int , millisecondUnique_t , 1000 > asset_t;

    idLogicListAsset < idTypesafeTime < int , millisecondUnique_t , 1000 > > value; // Offset: 0x10

}; // Size: 0x28
