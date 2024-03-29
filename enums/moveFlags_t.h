enum moveFlags_t : unsigned long long
{
    MOVEFL_NONE = 0,
    MOVEFL_NO_ATTACK = 1,
    MOVEFL_MELEE = 2,
    MOVEFL_NO_ARRIVALS = 4,
    MOVEFL_ALLOW_STATIONARY_TURNS = 8,
    MOVEFL_WAIT_FOR_CYCLES = 16,
    MOVEFL_ALLOW_POUNCES = 32,
    MOVEFL_IGNORE_PATHING = 64,
    MOVEFL_NO_SLIDE_TO_IDLE = 128,
    MOVEFL_PREDICT_ENTITY = 256,
    MOVEFL_FORCE_CONTINUE = 512,
    MOVEFL_UPDATE_RADAR = 1024,
    MOVEFL_ALLOW_RUN_AIMING = 2048,
    MOVEFL_ALLOW_STRAFING = 4096,
    MOVEFL_EXPLICIT_TURN = 8192,
    MOVEFL_NO_DEPARTURES = 16384,
    MOVEFL_TELEPORT = 32768,
    MOVEFL_AAS_ROUTE_ONLY = 65536,
    MOVEFL_SINGLE_ARRIVAL = 131072,
    MOVEFL_DYNAMIC_POSITION = 262144,
    MOVEFL_FORCE_STRAFING = 524288,
    MOVEFL_EARLY_ARRIVAL_FINISH = 1048576,
    MOVEFL_FIRE_AT_TARGET = 2097152,
    MOVEFL_LOOK_AHEAD = 4194304,
    MOVEFL_SIMPLE_HEIGHT_ARRIVAL = 8388608,
    MOVEFL_EXPLICIT_FLIGHT_DEST = 16777216,
    MOVEFL_NO_FLIGHT_VOLUME_CLIPPING = 33554432,
    MOVEFL_FAKE_PATH = 67108864,
    MOVEFL_EXPLICIT_CORNERS = 134217728,
    MOVEFL_SLIDE_TURN = 268435456,
    MOVEFL_LOCO_ANIMS_HAVE_NO_DELTA = 536870912,
    MOVEFL_SKIP_CHECK_STUCK = 1073741824,
    MOVEFL_EXACT_ARRIVAL = 2147483648,
    MOVEFL_ACTUAL_DESTINATION = 4294967296,
    MOVEFL_ON_FLIGHT_TRAVERSAL = 8589934592,
    MOVEFL_NO_IDLE_AFTER_TRAVERSALS = 17179869184
};
