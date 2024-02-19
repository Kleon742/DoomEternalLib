struct idAICondition_Shared_TargetFilter_TargetType : idAICondition
{
    // bits for which monsters to include in our group
    aiMonsterType_t monsters; // Offset: 0x18

    // if true, allow players
    bool players; // Offset: 0x20

    // if true, allow non-actors
    bool nonActors; // Offset: 0x21

    // if true, don't use IO stack, use current target
    bool checkCurrentTarget; // Offset: 0x22

}; // Size: 0x28
