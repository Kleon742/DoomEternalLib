struct idLogicNodePlayerGetCurrentHealthAndArmor
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_HEALTH = 2,
        OUTPUT_ARMOR = 3
    };

    int playerId; // Offset: 0x0

}; // Size: 0x4
