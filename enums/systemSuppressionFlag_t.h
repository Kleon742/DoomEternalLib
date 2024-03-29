enum systemSuppressionFlag_t : unsigned int
{
    SSF_NONE = 0,
    SSF_STATE = 1,
    SSF_ACTION = 2,
    SSF_MOVEMENT = 4,
    SSF_WEB_NODE = 8,
    SSF_ANIM = 16,
    SSF_ENTITY_SETTING = 64,
    SSF_MISC_BEHAVIOR = 128,
    SSF_TRAVERSAL = 256,
    SSF_CVAR = 512,
    SSF_OPTIMIZATION = 1024,
    SSF_CINEMATIC = 2048,
    SSF_INTERACTION = 4096,
    SSF_DEATH = 8192,
    SSF_RAGDOLL = 16384
};
