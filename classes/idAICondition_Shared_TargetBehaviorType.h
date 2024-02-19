struct idAICondition_Shared_TargetBehaviorType : idAICondition
{
    // check for these capabilities in action target or enemy
    actorBehaviorType_t require; // Offset: 0x18

    // check for these capabilities in action target or enemy, if empty, the everything is allowed
    actorBehaviorType_t allow; // Offset: 0x1C

    // check for these capabilities in action target or enemy
    actorBehaviorType_t exclude; // Offset: 0x20

}; // Size: 0x28
