struct idLogicNodeModelListIterate : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_LOOPING = 1,
        INPUT_LIST = 2,
        INPUT_INDEX = 3,
        OUTPUT_SUCCESS = 4,
        OUTPUT_VALUE = 5,
        OUTPUT_END = 6
    };

    // Type name
    idStr typeName; // Offset: 0x10

}; // Size: 0x40
