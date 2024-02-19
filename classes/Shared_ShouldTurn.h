struct Shared_ShouldTurn : idAIStateTransition
{
    // turn if the enemy is out of this view cone
    float minDot; // Offset: 0xF8

    // exit if checkAllowCancelAttack is not set
    bool checkAllowCancelAttack; // Offset: 0xFC

}; // Size: 0x100
