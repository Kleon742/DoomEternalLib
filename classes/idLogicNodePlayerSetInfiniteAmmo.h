struct idLogicNodePlayerSetInfiniteAmmo
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_VALUE = 2
    };

    bool value; // Offset: 0x0

    int playerNum; // Offset: 0x4

}; // Size: 0x8
