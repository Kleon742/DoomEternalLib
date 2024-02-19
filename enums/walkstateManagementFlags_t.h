enum walkstateManagementFlags_t : int
{
    WMT_NONE = 0,
    WMT_TO_COVER = 2,
    WMT_MAINTAIN_DISTANCE = 4,
    WMT_MOVE_TO_ENEMY = 8,
    WMT_SLOW_CORNERS = 16,
    WMT_MAINTAIN_VIS = 32,
    WMT_SLOW_PACKS = 64,
    WMT_DECEL_TO_GOAL = 128
};
