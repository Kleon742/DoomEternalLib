struct idUCmdTracker
{
    enum inhibitFlags_t : int
    {
        UCMD_INHIBIT_NONE = 0,
        UCMD_INHIBIT_MOVEMENT_FWD = 1,
        UCMD_INHIBIT_MOVEMENT_RT = 2,
        UCMD_INHIBIT_MOVEMENT_UP = 4,
        UCMD_INHIBIT_VIEW = 8,
        UCMD_INHIBIT_BUTTONS = 16,
        UCMD_INHIBIT_CHANGE_WEAPON = 32,
        UCMD_INHIBIT_DASH = 64,
        UCMD_INHIBIT_MOVEMENT_ONCE = 128,
        UCMD_INHIBIT_VIEW_ONCE = 256,
        UCMD_INHIBIT_BUTTONS_ONCE = 512,
        UCMD_INHIBIT_VIEW_PROFILE = 1024,
        UCMD_INHIBIT_PRIMARY_ATTACK = 2048,
        UCMD_INHIBIT_SECONDARY_ATTACK = 4096,
        UCMD_INHIBIT_TERTIARY_ATTACK = 8192,
        UCMD_INHIBIT_JUMP = 16384,
        UCMD_INHIBIT_QUICK_INPUT = 32768,
        UCMD_INHIBIT_CHAINSAW = 65536,
        UCMD_INHIBIT_MOVEMENT = 7,
        UCMD_INHIBIT_ATTACK = 112640,
        UCMD_INHIBIT_ALL = 129151,
        UCMD_INHIBIT_ALL_ONCE = 896,
        UCMD_INHIBIT_ALL_BUT_VIEW_ONCE = 640
    };

    idUserCmd prevcmd; // Offset: 0x0

    idUserCmd usercmd; // Offset: 0x98

    idUserCmd commandBuffer[60]; // Offset: 0x130

    int curHistoryIndex; // Offset: 0x24D0

    idAngles viewAngles; // Offset: 0x24D4

    idAngles prevViewAngles; // Offset: 0x24E0

    idAngles cmdAngles; // Offset: 0x24EC

}; // Size: 0x24F8
