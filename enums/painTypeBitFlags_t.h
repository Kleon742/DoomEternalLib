enum painTypeBitFlags_t : unsigned int
{
    BF_PAIN_NONE = 0,
    BF_PAIN_TWITCH = 2,
    BF_PAIN_TWITCH_HEAVY = 4,
    BF_PAIN_FALTER_LIGHT = 8,
    BF_PAIN_INTERRUPT = 16,
    BF_PAIN_AUGER_LOOP = 32,
    BF_PAIN_STUN_LOOP = 64,
    BF_PAIN_FALTER = 128,
    BF_PAIN_PUSHBACK = 256,
    BF_PAIN_MELEE_D5_FORWARD_REACT = 512,
    BF_PAIN_MELEE_D5_LEFT_REACT = 1024,
    BF_PAIN_MELEE_D5_RIGHT_REACT = 2048,
    BF_PAIN_MELEE_D5_UPPERCUT_REACT = 4096,
    BF_PAIN_STUN = 8192,
    BF_PAIN_AUGER = 16384,
    BF_PAIN_FIRE = 32768,
    BF_PAIN_STAGGER = 65536,
    BF_PAIN_STAGGER_VULNERABLE = 131072,
    BF_PAIN_KNOCKDOWN = 262144,
    BF_PAIN_LIVING_RAGDOLL = 524288,
    BF_PAIN_DEATH = 1048576,
    BF_PAIN_FULL_GIB = 2097152
};