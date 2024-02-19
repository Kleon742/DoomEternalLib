struct idLogicNodePrefetchPosition : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_TIMEOUT = 0,
        INPUT_POSITION = 1,
        INPUT_START = 2,
        OUTPUT_START = 3,
        INPUT_STOP = 4,
        OUTPUT_STOP = 5
    };

    struct instanceData_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > beginTime; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x8

    }; // Size: 0x10

}; // Size: 0x10
