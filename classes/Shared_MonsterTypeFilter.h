struct Shared_MonsterTypeFilter : idAIStateTransition
{
    // types required
    aiMonsterType_t requiredTypes; // Offset: 0xF8

    // types that must not be there
    aiMonsterType_t excludeTypes; // Offset: 0x100

    // if true, require player
    bool requirePlayer; // Offset: 0x108

    // if true, exclude player
    bool excludePlayer; // Offset: 0x109

    // apply filter to current target instead of pending list
    bool checkCurrentTarget; // Offset: 0x10A

}; // Size: 0x110
