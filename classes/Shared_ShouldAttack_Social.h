struct Shared_ShouldAttack_Social : idAIStateTransition
{
    // optional flags
    aiAttackFlags_t attackFlags; // Offset: 0xF8

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0xFC

    // if true, this transition won't be evaluated until after an ae_makeAttackCheck anim event
    int waitForPendingAttackCheck; // Offset: 0x100

    // nocomment
    idAtomicString categoryName; // Offset: 0x108

    // nocomment
    idAtomicString nodeName; // Offset: 0x110

    // nocomment
    socialRespect_t minRespect; // Offset: 0x118

    // nocomment
    socialRespect_t maxRespect; // Offset: 0x11C

    // nocomment
    socialEmotion_t minEmotion; // Offset: 0x120

    // nocomment
    socialEmotion_t maxEmotion; // Offset: 0x124

    // optimization to avoid checking attacks against too many targets {{ units = m }}
    float maxRange; // Offset: 0x128

    // if true, only take transition if ai has aiEditable::behaviors::useAmbientSocialBehavior flag set
    bool ambientOnly; // Offset: 0x12C

}; // Size: 0x130
