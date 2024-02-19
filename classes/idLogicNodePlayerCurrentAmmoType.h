struct idLogicNodePlayerCurrentAmmoType
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_AMMO_TYPE = 2
    };

    int playerId; // Offset: 0x0

}; // Size: 0x4
