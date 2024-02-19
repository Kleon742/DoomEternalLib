struct idLogicNodeModelDelay : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_DELAY = 1,
        OUTPUT_ACTIVATE = 2,
        INPUT_RESET = 3,
        INPUT_CANCEL = 4
    };

    struct instanceData_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x0

    }; // Size: 0x8

}; // Size: 0x10
