struct idAnimWebHandsDirectionalAnimator : idAnimator_GameAnimWeb
{
    enum webDirIndex_t : int
    {
        INDEX_2_N = 0,
        INDEX_2_S = 1,
        INDEX_4_N = 0,
        INDEX_4_E = 1,
        INDEX_4_S = 2,
        INDEX_4_W = 3,
        INDEX_8_N = 0,
        INDEX_8_NE = 1,
        INDEX_8_E = 2,
        INDEX_8_SE = 3,
        INDEX_8_S = 4,
        INDEX_8_SW = 5,
        INDEX_8_W = 6,
        INDEX_8_NW = 7
    };

    enum webVar_t : int
    {
        VAR_2_INDEX_0 = 0,
        VAR_2_INDEX_1 = 1,
        VAR_2_INDEX_BLEND = 2,
        VAR_4_INDEX_0 = 3,
        VAR_4_INDEX_1 = 4,
        VAR_4_INDEX_BLEND = 5,
        VAR_8_INDEX_0 = 6,
        VAR_8_INDEX_1 = 7,
        VAR_8_INDEX_BLEND = 8,
        VAR_STRENGTH = 9,
        VAR_MAX = 10
    };

    float webVars[10]; // Offset: 0x888

}; // Size: 0x8B0
