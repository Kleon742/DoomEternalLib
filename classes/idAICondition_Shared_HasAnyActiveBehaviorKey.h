struct idAICondition_Shared_HasAnyActiveBehaviorKey : idAICondition
{
    // this condition is only valid if these behavior keys are set
    idList < idAtomicString , TAG_IDLIST , false > behaviorKeys; // Offset: 0x18

}; // Size: 0x30
