struct Relaxed_ShouldAttack : idAIStateTransition
{
    // if true, this transition won't be evaluated until after an ae_makeAttackCheck anim event
    int waitForPendingAttackCheck; // Offset: 0xF8

    // category name
    idAtomicString categoryName; // Offset: 0x100

}; // Size: 0x108
