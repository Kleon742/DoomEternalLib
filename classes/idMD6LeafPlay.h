struct idMD6LeafPlay : idMD6Leaf
{
    enum rateScaleType_t : int
    {
        RATESCALE_HASTE = 0,
        RATESCALE_GRAVITY = 1,
        RATESCALE_ANIM_EVENTS = 2,
        RATESCALE_MAX = 3
    };

    enum syncFlags_t : int
    {
        SYNC_NONE = 0,
        SYNC_CAN_BE_CHILD = 1,
        SYNC_CAN_BE_MASTER = 2,
        SYNC_DISABLE_FIRST_QUARTER = 4,
        SYNC_MATCH_CYCLE_INDEX = 8
    };

    // game time when animation is at the start of frame 0
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x28

    // idArray< float, rateScaleType_t::RATESCALE_MAX >gameRateScales;
    idArray < float , 3 > gameRateScales; // Offset: 0x30

    // 0 - 1, fractional remainder of startTime, if -1, don't use it
    float startTimeFraction; // Offset: 0x3C

    // scale for frame rate
    float rateScale; // Offset: 0x40

    // floatrateScale_base; base rate scale floatrateScale_gravity; yet another rate scale temp hack to get custom phase marker data into system
    int syncDataIndex; // Offset: 0x44

    float lastEventFrame; // Offset: 0x48

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTicksPerSec; // Offset: 0x50

    unsigned char syncGroup; // Offset: 0x58

    unsigned char syncFlags; // Offset: 0x59

}; // Size: 0x60
