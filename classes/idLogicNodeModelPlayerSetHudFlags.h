struct idLogicNodeModelPlayerSetHudFlags : idLogicNodeModel
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1
    };

    struct instanceData_t
    {
        int playerId; // Offset: 0x0

        hudElementFlags_t hudFlags; // Offset: 0x4

    }; // Size: 0x8

    // optional: the player id for the player we are looking for, -1 == local player
    int playerId; // Offset: 0x10

    // flags to set on the player's HUD
    hudElementFlags_t hudFlags; // Offset: 0x14

}; // Size: 0x18
