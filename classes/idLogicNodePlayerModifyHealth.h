struct idLogicNodePlayerModifyHealth
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerNum; // Offset: 0x0

    int healthValue; // Offset: 0x4

    int armorValue; // Offset: 0x8

}; // Size: 0xC
