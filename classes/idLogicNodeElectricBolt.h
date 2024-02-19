struct idLogicNodeElectricBolt
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        INPUT_START = 1,
        OUTPUT_START = 2,
        INPUT_EMITTER_ENTITY = 3,
        INPUT_EMITTER_ORIGIN = 4,
        INPUT_EMITTER_ENTITY_ORIGIN = 5,
        INPUT_ENTITY_INDIVIDUAL_TARGET = 6,
        INPUT_ENTITY_TARGET_LIST = 7,
        INPUT_CLEAR_TARGETS = 8,
        INPUT_USE_RANDOM_MIN_AND_MAX_TIME = 9,
        INPUT_MIN_RESET_TIME_MS = 10,
        INPUT_MAX_RESET_TIME_MS = 11,
        OUTPUT_ACTIVATE = 12
    };

    idVec3 boltOrigin; // Offset: 0x0

    // electric bolt decl system
    idDeclElectricBolt* electricBoltDecl; // Offset: 0x10

}; // Size: 0x18
