struct idLogicNodePlayerInhibitControls
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_INHIBIT = 1,
        OUTPUT_ACTIVATE = 2
    };

    enum inhibitControlsFlags_t : unsigned int
    {
        INHIBIT_CONTROLS_VIEW = 1,
        INHIBIT_CONTROLS_MOVEMENT = 2,
        INHIBIT_CONTROLS_ATTACK = 4,
        INHIBIT_CONTROLS_CHANGEWEAPON = 8,
        INHIBIT_CONTROLS_DASH = 16,
        INHIBIT_CONTROLS_JUMP = 32,
        INHIBIT_CONTROLS_ATTACK_PRIMARY = 64,
        INHIBIT_CONTROLS_ATTACK_SECONDARY = 128,
        INHIBIT_CONTROLS_ATTACK_TERTIARY = 256,
        INHIBIT_CONTROLS_CHAINSAW = 512,
        INHIBIT_CONTROLS_WEAPON_WHEEL = 1024,
        INHIBIT_CONTROLS_BLOCK_CODE_INHIBIT_FLAGS = 2048
    };

    idLogicNodePlayerInhibitControls::inhibitControlsFlags_t inhibitFlags; // Offset: 0x0

}; // Size: 0x4
