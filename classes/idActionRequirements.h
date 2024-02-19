struct idActionRequirements
{
    // the action to tie these requirements to
    idInteractionAction_t action; // Offset: 0x0

    // indicates how to interpret the list of requirements
    idRequirementEvaluation_t evaluation; // Offset: 0x4

    // the list of requirements that must be fulfilled in order to allow action completion
    idList < idSingleRequirement_t , TAG_IDLIST , false > itemsRequiredList; // Offset: 0x8

    // Stat needs to be greater than 1.
    gameStat_t statRequired; // Offset: 0x20

    // Stat Duration.
    gameStatDuration_t statDuration; // Offset: 0x24

}; // Size: 0x28
