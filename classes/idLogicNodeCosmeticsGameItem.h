struct idLogicNodeCosmeticsGameItem
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_NO_HELMET_LIGHTS = 2,
        OUTPUT_HAS_ALTERNATE_INTRO = 3,
        OUTPUT_HAS_ALTERNATE_DEATH = 4
    };

    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x0

}; // Size: 0x4
