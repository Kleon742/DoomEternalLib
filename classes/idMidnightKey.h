struct idMidnightKey : idClass
{
    enum enum_22200 : int
    {
        EMK_NO_DURATION = -1,
        EMK_INVALID_START_TIME = -1,
        EMK_INVALID_PRIORITY = -1
    };

    enum Type_t : int
    {
        EMKT_INVALID = -1,
        EMKT_POINT = 0,
        EMKT_CLIP = 1
    };

    enum Category_t : int
    {
        EMKC_LOOKAT = 0,
        EMKC_UNUSED1 = 1,
        EMKC_UNUSED2 = 2,
        EMKC_UNUSED3 = 3,
        EMKC_ANIM = 4,
        EMKC_UNUSED4 = 5,
        EMKC_UNUSED5 = 6,
        EMKC_UNUSED6 = 7,
        EMKC_UNUSED7 = 8,
        EMKC_RETARGETING = 9,
        EMKC_UNUSED8 = 10,
        EMKC_UNUSED9 = 11,
        EMKC_UNUSED10 = 12,
        EMKC_SFX = 13,
        EMKC_MOTION = 14,
        EMKC_UNUSED11 = 15,
        EMKC_UNUSED12 = 16,
        EMKC_UNUSED13 = 17,
        EMKC_UNUSED14 = 18,
        EMKC_ATTACHMENT = 19,
        EMKC_UNUSED15 = 20,
        EMKC_INTERRUP_CONTROL = 21,
        EMKC_UNUSED23 = 22,
        EMKC_UNUSED24 = 23,
        EMKC_UNUSED16 = 24,
        EMKC_DAMAGE_ENTITY = 25,
        EMKC_INTERACT_ENTITY = 26,
        EMKC_HIDE_ENTITY = 27,
        EMKC_SHOW_ENTITY = 28,
        EMKC_ACTIVATE_ENTITY = 29,
        EMKC_DEACTIVATE_ENTITY = 30,
        EMKC_START_LOGIC = 31,
        EMKC_RENDER_FEATURE = 32,
        EMKC_UNUSED18 = 33,
        EMKC_LOOP = 34,
        EMKC_UNUSED19 = 35,
        EMKC_UNUSED20 = 36,
        EMKC_LOGIC_EVENT = 37,
        EMKC_LIGHTDATA = 38,
        EMKC_UNUSED21 = 39,
        EMKC_UNUSED22 = 40,
        EMKC_CAPTURE = 41,
        EMKC_MOTIONANIM = 42,
        EMKC_LIGHTCONTROL = 43,
        EMKC_TAKEDOWN = 44,
        EMKC_CAMERADATA = 45,
        EMKC_RETARGET_PLAYER_VIEW = 46,
        EMKC_RESET_PLAYER_VIEW = 47,
        EMKC_FXEVENT = 48,
        EMKC_VOICEOVER = 49,
        EMKC_SHOOT = 50,
        EMKC_RESETCLOTH = 51,
        EMKC_KILLAI = 52,
        EMKC_PVP_PODIUM_EVENT = 53,
        EMKC_CODEX_EVENT = 54,
        EMKC_NUM = 55
    };

    idSignal < > SignalPropertiesChanged; // Offset: 0x10

    // store the handle of the key
    idMidnightKeyHandle handle; // Offset: 0x68

    // indicate the start time of the key
    idTypesafeTime < int , millisecondUnique_t , 1000 > startTime; // Offset: 0x80

    // indicate if the key is a point key or a clip
    idMidnightKey::Type_t type; // Offset: 0x84

    // indicate the priority of the key
    int priority; // Offset: 0x88

    // indicate the duration of the key
    idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x8C

    // indicate the category of the key
    idMidnightKey::Category_t category; // Offset: 0x90

    // Properties
    idMidnightKeyProperties* keyProp; // Offset: 0x98

}; // Size: 0xA0
