struct idLogicNodeModelEntitySetRendermodelScale_v2 : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_SCALE_DONE = 2,
        INPUT_ENTITIES = 3,
        INPUT_SCALE = 4
    };

    struct instanceData_t
    {
        idDeclTable* scaleTable; // Offset: 0x0

        idLogicList < idLogicEntityPtr > entities; // Offset: 0x8

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x48

    }; // Size: 0x50

    // table for scaling
    idDeclTable* scaleTable; // Offset: 0x10

}; // Size: 0x18
