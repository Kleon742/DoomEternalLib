struct Shared_ShouldAttack : idAIStateTransition
{
    // optional flags
    aiAttackFlags_t attackFlags; // Offset: 0xF8

    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0xFC

    // if true, this transition won't be evaluated until after an ae_makeAttackCheck anim event
    bool waitForPendingAttackCheck; // Offset: 0x100

    // if true, this transition won't be evaluated until after an ae_makeAttackCheck anim event
    bool waitForPendingAttackCheckAlways; // Offset: 0x101

    // nocomment
    idAtomicString categoryName; // Offset: 0x108

    // nocomment
    idAtomicString nodeName; // Offset: 0x110

    // if true, use action target instead of enemy
    bool useActionTarget; // Offset: 0x118

    // if true, use potential action targets
    bool usePotentialTargets; // Offset: 0x119

    // if true, allow early-out of this transition based on min/max attack decl settings
    bool allowPerfEarlyOut; // Offset: 0x11A

}; // Size: 0x120
