struct idLogicNodePlayerStopDashAbility
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    int playerId; // Offset: 0x0

    bool refillMeter; // Offset: 0x4

}; // Size: 0x8
