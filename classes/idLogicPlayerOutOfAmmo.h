struct idLogicPlayerOutOfAmmo
{
    enum logicIdst : int
    {
        WEAPONS_OUT_OF_AMMO = 0,
        CHAINSAW_OUT_OF_AMMO = 1,
        BOTH_OUT_OF_AMMO = 2,
        INPUT_START = 3,
        OUTPUT_START = 4
    };

    idList < const idDeclAmmo * , TAG_IDLIST , false > ammoTypes; // Offset: 0x0

    bool hadAmmo; // Offset: 0x18

    bool hadFuel; // Offset: 0x19

}; // Size: 0x20
