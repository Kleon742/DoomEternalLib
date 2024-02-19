struct idRequiredActions_t
{
    // indicates how to interpret the list of requirements
    idRequirementEvaluation_t requirementType; // Offset: 0x0

    // the list of actions required for the object or edge
    idList < idInteractionAction_t , TAG_IDLIST , false > actionsRequiredList; // Offset: 0x8

}; // Size: 0x20
