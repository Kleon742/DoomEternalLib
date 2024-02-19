struct idNarrativeLinkCondition
{
    struct waitParms_t
    {
        // How long to wait for.
        float seconds; // Offset: 0x0

    }; // Size: 0x4

    struct narrativeScriptParms_t
    {
        // Script Function to call.
        idStr scriptFunction; // Offset: 0x0

    }; // Size: 0x30

    struct narrativeVisitedParms_t
    {
        // Visited.
        idList < idStr , TAG_IDLIST , false > visited; // Offset: 0x0

    }; // Size: 0x18

    struct narrativeInputParms_t
    {
        // What is needed to be pressed.
        usercmdButton_t input; // Offset: 0x0

    }; // Size: 0x8

    struct narrativeIdleParms_t
    {
        // What is needed to be pressed.
        idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0x0

    }; // Size: 0x4

    struct narrativeAngleParms_t
    {
        // Min angles in degrees.
        float minAngle; // Offset: 0x0

        // Max angles in degrees.
        float maxAngle; // Offset: 0x4

    }; // Size: 0x8

    // who evaluates this condition. ( -1 is Director )
    int actorIndex; // Offset: 0x0

    // what condition to evaluate.
    narrativeConditionType_t type; // Offset: 0x4

    // NARRATIVE_CONDITION_WAIT_SEC parameters.
    idNarrativeLinkCondition::waitParms_t waitParms; // Offset: 0x8

    // NARRATIVE_CONDITION_SCRIPTFUNCTION Parameters
    idNarrativeLinkCondition::narrativeScriptParms_t scriptParms; // Offset: 0x10

    // NARRATIVE_CONDITION_VISITED Parameters
    idNarrativeLinkCondition::narrativeVisitedParms_t visitedParms; // Offset: 0x40

    // NARRATIVE_CONDITION_INPUT Parameters
    idNarrativeLinkCondition::narrativeInputParms_t inputParms; // Offset: 0x58

    // NARRATIVE_CONDITION_IDLE_TIME Parameters
    idNarrativeLinkCondition::narrativeIdleParms_t idleParms; // Offset: 0x60

    // NARRATIVE_CONDITION_DIRECTIONAL_POSITION or NARRATIVE_CONDITION_DIRECTIONAL_FACING Parameters
    idNarrativeLinkCondition::narrativeAngleParms_t angleParms; // Offset: 0x64

}; // Size: 0x70
