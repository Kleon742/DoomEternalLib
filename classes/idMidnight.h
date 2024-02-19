struct idMidnight
{
    enum TrackType_t : int
    {
        EMTT_INVALID = 0,
        EMTT_UNUSED2 = 1,
        EMTT_UNUSED3 = 2,
        EMTT_UNUSED1 = 3,
        EMTT_LOOKAT = 4,
        EMTT_UNUSED4 = 5,
        EMTT_UNUSED5 = 6,
        EMTT_UNUSED6 = 7,
        EMTT_ANIM = 8,
        EMTT_MOTION = 9,
        EMTT_ACTION = 10,
        EMTT_UNUSED7 = 11,
        EMTT_UNUSED8 = 12,
        EMTT_UNUSED9 = 13,
        EMTT_UNUSED10 = 14,
        EMTT_RETARGETING = 15,
        EMTT_SFX = 16,
        EMTT_UNUSED11 = 17,
        EMTT_UNUSED12 = 18,
        EMTT_UNUSED13 = 19,
        EMTT_UNUSED14 = 20,
        EMTT_UNUSED15 = 21,
        EMTT_FLOW_CONTROL = 22,
        EMTT_UNUSED17 = 23,
        EMTT_UNUSED18 = 24,
        EMTT_LOOP = 25,
        EMTT_LOGIC_EVENT = 26,
        EMTT_LIGHTDATA = 27,
        EMTT_UNUSED20 = 28,
        EMTT_CAPTURE = 29,
        EMTT_MOTIONANIM = 30,
        EMTT_LIGHTCONTROL = 31,
        EMTT_CAMERADATA = 32,
        EMTT_FXEVENT = 33,
        EMTT_VOICEOVER = 34,
        EMTT_NUM = 35,
        EMTT_NB_TRACK_TYPE = 35,
        EMTT_FIRST = 1
    };

    enum NodeCPointType_t : int
    {
        EMNCPT_INPUT = 1,
        EMNCPT_ENTRY_OUT_FIRST = 2,
        EMNCPT_SCENE_OUT_NEXT = 3,
        EMNCPT_LOOP_OUT_LOOPING = 4,
        EMNCPT_LOOP_OUT_END = 5,
        EMNCPT_CONDBOOL_OUT_TRUE = 6,
        EMNCPT_CONDBOOL_OUT_FALSE = 7,
        EMNCPT_CONDMD6_OUT_1 = 8,
        EMNCPT_CONDMD6_OUT_2 = 9,
        EMNCPT_CONDMD6_OUT_3 = 10,
        EMNCPT_CONDMD6_OUT_4 = 11,
        EMNCPT_CONDMD6_OUT_5 = 12,
        EMNCPT_CONDMD6_OUT_FIRST = 8,
        EMNCPT_CONDMD6_OUT_LAST = 12,
        EMNCPT_OUT_OUT_FIRST = 13,
        EMNCPT_OUT_OUT_LAST = 44,
        EMNCPT_CONDINT_OUT_DEFAULT = 45,
        EMNCPT_CONDINT_OUT_FIRST = 46,
        EMNCPT_CONDINT_OUT_LAST = 66,
        EMNCPT_CONDPROMPT_OUT_FIRST = 67,
        EMNCPT_CONDPROMPT_OUT_LAST = 87
    };

    enum enum_5B00 : int
    {
        MDNT_INST_FIRST_HANDLE = 1,
        MDNT_INST_INVALID_TIME = -1
    };

    enum invalidHandle_t : int
    {
        INVALID_HANDLE_INDEX = 0
    };

    enum invalidGroupIndex_t : int
    {
        INVALID_GROUP_INDEX = -1
    };

    enum invalidSceneIndex : int
    {
        INVALID_SCENE_INDEX = -1
    };

    enum invalidKeyIndex_t : int
    {
        INVALID_KEY_INDEX = -1
    };

    enum invalidNodeIndex : int
    {
        INVALID_NODE_INDEX = -1
    };

    enum KeyValueMgmt_t : int
    {
        EMKVM_FULL = 0,
        EMKVM_FLOAT = 1,
        EMKVM_CURVE = 2
    };

    enum Priority_t : int
    {
        PRIORITY_MIN = 0,
        PRIORITY_DECORATIVE = 1,
        PRIORITY_NPC_DISTRACTION = 2,
        PRIORITY_DEFAULT = 3,
        PRIORITY_NARRATIVE_LOW = 4,
        PRIORITY_NARRATIVE_MEDIUM = 5,
        PRIORITY_NARRATIVE_HIGH = 6,
        PRIORITY_NARRATIVE_VERYHIGH = 7,
        PRIORITY_NPC_SEARCH = 8,
        PRIORITY_NPC_COMBAT = 9,
        PRIORITY_NPC_REACTIVITY = 10,
        PRIORITY_NPC_MESMERIZE = 11,
        PRIORITY_NPC_HITREACT = 12,
        PRIORITY_NPC_SWARM_COMBAT = 13,
        PRIORITY_NPC_SPECIALMOVE = 14,
        PRIORITY_NPC_DEATH_SLEEP = 15,
        PRIORITY_NPC_POSSESS = 16,
        PRIORITY_FATALITY = 17,
        PRIORITY_CARRY_CORPSE = 18,
        PRIORITY_MAX = 19
    };

    enum InterruptionType_t : int
    {
        INTERRUPT_SCENE_END = 0,
        INTERRUPT_MIDNIGHT_END = 1,
        INTERRUPT_STOP_REQUEST = 2,
        INTERRUPT_MIDNIGHT_OVERRIDE = 3,
        INTERRUPT_MIDNIGHT_OVERRIDE_NO_FAST_OUT = 4,
        INTERRUPT_ENTITY_KILLED = 5,
        INTERRUPT_PREVIEW = 6,
        INTERRUPT_BREAK_LOOP_INSTANT = 7,
        INTERRUPT_PLAY_OUT = 8,
        INTERRUPT_GROUP_ENABLE = 9,
        INTERRUPT_GROUP_DISABLE = 10,
        INTERRUPT_UNAVAILABLE_ENTITY = 11,
        INTERRUPT_NOT_STARTED = 12,
        INTERRUPT_MIDNIGHT_RESET = 13,
        INTERRUPT_ENTITY_DESTROYED = 14,
        INTERRUPT_SCENE_SKIPPED = 15,
        INTERRUPT_NONE = 16
    };

    enum EntityConfiguration_t : int
    {
        EMEC_PLAYER = 0,
        EMEC_NPC = 1,
        EMEC_PLAYER_AND_NPC = 2,
        EMEC_INVALID = 3
    };

    enum EntityResources_t : int
    {
        EMER_NOTHING = 0,
        EMER_SPEECH_ONLY = 1,
        EMER_OTHER = 2,
        EMER_ALL = 3
    };

    enum NodeType_t : int
    {
        EMNT_INVALID = 0,
        EMNT_LOOP = 1,
        EMNT_CONDBOOL = 2,
        EMNT_CONDMD6 = 3,
        EMNT_CONDINT = 4,
        EMNT_CONDPROMPT = 5,
        EMNT_COMMENT = 6
    };

    enum NodeCondType_t : int
    {
        EMNCT_STATIC = 0,
        EMNCT_RANDOM = 1,
        EMNCT_SEQUENTIAL = 2
    };

    enum errorCode_t : int
    {
        ALLOWED = 0,
        DENIED_PRIORITY = 1,
        DENIED_EMPTY = 2,
        DENIED_ENTITY_NOT_AVAILABLE = 3,
        DENIED_INVALID = 4,
        DENIED_FASTOUT = 5
    };

    enum idEquipStateRequired_t : int
    {
        EQUIP_STATE_NO_CHANGE = 0,
        EQUIP_STATE_DRAW = 1,
        EQUIP_STATE_UNDRAW = 2,
        EQUIP_STATE_AIM = 3
    };

    enum GroupInterruptionType_t : int
    {
        GRP_INTERRUPT_MIDNIGHT = 0,
        GRP_INTERRUPT_GROUP = 1,
        GRP_INTERRUPT_NONE = 2
    };

    enum groupDynFlags_t : int
    {
        GRP_DYN_FLAG_NONE = 0,
        GRP_DYN_FLAG_FORCE_GESTURE = 1
    };

    enum SpecialGroup_t : int
    {
        SPECIALGROUP_DIRECTOR = 0,
        SPECIALGROUP_PLAYER_BODY = 1,
        SPECIALGROUP_PLAYER_ARM_LEFT = 2,
        SPECIALGROUP_PLAYER_ARM_RIGHT = 3,
        SPECIALGROUP_PLAYER_CAMERA = 4,
        SPECIALGROUP_PLAYER_EQUIPEMENT_LEFT = 5,
        SPECIALGROUP_PLAYER_EQUIPEMENT_RIGHT = 6,
        SPECIALGROUP_PLAYER_NPC1 = 7,
        SPECIALGROUP_PLAYER_NPC1_EQUIPEMENT_LEFT = 8,
        SPECIALGROUP_PLAYER_NPC1_EQUIPEMENT_RIGHT = 9,
        SPECIALGROUP_PLAYER_NPC2 = 10,
        SPECIALGROUP_PLAYER_DUMMY1 = 11,
        SPECIALGROUP_PLAYER_TARGET1 = 12,
        SPECIALGROUP_MDNT_OBJECT_OWNER = 13,
        SPECIALGROUP_MAX = 14
    };

    enum CutsceneType_t : int
    {
        CUTSCENETYPE_NONE = 0,
        CUTSCENETYPE_REALTIME = 1,
        CUTSCENETYPE_PRERENDERED = 2
    };

    enum curveTgtType_t : int
    {
        TGT_STRAIGHT = 0,
        TGT_PLATEAU = 1,
        TGT_INTERPOLATED = 2
    };

    enum motionAxis_t : int
    {
        AXIS_WORLD = 0,
        AXIS_LOCAL = 1
    };

    enum idTakedownRotationSpeed_t : int
    {
        TAKEDOWN_ROTATION_SPEED_NORMAL = 0,
        TAKEDOWN_ROTATION_SPEED_SLOW = 1
    };

    enum enum_7500 : unsigned int
    {
        EMUI32_SCENE_SHIFT = 25,
        EMUI32_SCENE_MASK = 4261412864,
        EMUI32_SCENE_MAX = 127,
        EMUI32_GROUP_SHIFT = 18,
        EMUI32_GROUP_MASK = 33292288,
        EMUI32_GROUP_MAX = 127,
        EMUI32_TRACK_SHIFT = 12,
        EMUI32_TRACK_MASK = 258048,
        EMUI32_TRACK_MAX = 63,
        EMUI32_KEY_SHIFT = 0,
        EMUI32_KEY_MASK = 4095,
        EMUI32_KEY_MAX = 4095,
        EMUI32_ENTRY_SHIFT = 20,
        EMUI32_ENTRY_MASK = 1048576,
        EMUI32_ENTRY_MAX = 1,
        EMUI32_NODE_SHIFT = 12,
        EMUI32_NODE_MASK = 1044480,
        EMUI32_NODE_MAX = 255,
        EMUI32_POINT_SHIFT = 0,
        EMUI32_POINT_MASK = 4095,
        EMUI32_POINT_MAX = 4095,
        EMUI32_OUT_SHIFT = 21,
        EMUI32_OUT_MASK = 2097152,
        EMUI32_OUT_MAX = 1,
        INVALID_UID = 0
    };

    enum enum_7600 : unsigned long long
    {
        EMUI_SCENE_SHIFT = 54,
        EMUI_SCENE_MAX = 1023,
        EMUI_GROUP_SHIFT = 32,
        EMUI_GROUP_MASK = 281470681743360,
        EMUI_GROUP_MAX = 65534,
        EMUI_TRACK_SHIFT = 16,
        EMUI_TRACK_MASK = 4294901760,
        EMUI_TRACK_MAX = 65534,
        EMUI_KEY_SHIFT = 0,
        EMUI_KEY_MASK = 65535,
        EMUI_KEY_MAX = 65534
    };

    struct instanceHandle : idIndex < unsigned int , idMidnight::invalidHandle_t , 0 >
    {
    }; // Size: 0x4

    struct idSort_TrackTypes : idSort_Quick < idMidnight::TrackType_t , idMidnight::idSort_TrackTypes >
    {
    }; // Size: 0x8

    typedef int GroupIndexType;

    typedef idIndex < idMidnight::GroupIndexType , idMidnight::invalidGroupIndex_t > GroupIndex_t;

    typedef int SceneIndexType;

    typedef idIndex < idMidnight::SceneIndexType , idMidnight::invalidSceneIndex > SceneIndex;

    typedef int KeyIndexType;

    typedef idIndex < idMidnight::KeyIndexType , idMidnight::invalidKeyIndex_t > KeyIndex_t;

    typedef int NodeIndexType;

    typedef idIndex < idMidnight::NodeIndexType , idMidnight::invalidNodeIndex > NodeIndex;

    typedef idCurveTangent < float > KeyCurve;

    typedef idCurveTangent < idVec3 > MotionCurve;

    typedef idCurveTangent < idQuat > MotionQuatCurve;

    typedef idCurveTangent < idAngles > MotionAngleCurve;

    typedef idLookupTable KeyCurve_Deprecated;

    typedef idCurveTgt_deprecated < float > KeyCurveTangent_Deprecated;

    typedef idCurveTgt_deprecated < idVec3 > MotionCurveTangent_Deprecated;

}; // Size: 0x0
