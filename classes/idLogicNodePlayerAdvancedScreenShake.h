struct idLogicNodePlayerAdvancedScreenShake
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        OUTPUT_DONE = 2,
        INPUT_ENTITY = 3,
        INPUT_INFINITE_SHAKE = 4,
        INPUT_NORMALIZED_STRENGTH = 5,
        INPUT_START = 6,
        OUTPUT_START = 7,
        INPUT_STOP = 8,
        OUTPUT_STOP = 9
    };

    int playerNum; // Offset: 0x0

    idDeclAdvancedViewShake* advancedScreenShakeDecl; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x10

}; // Size: 0x18
