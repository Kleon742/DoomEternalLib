struct idLogicCheckMapSubType
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_EVENT = 1,
        OUTPUT_BOOL = 2
    };

    idSubTypeCondition_t condition; // Offset: 0x0

}; // Size: 0x4
