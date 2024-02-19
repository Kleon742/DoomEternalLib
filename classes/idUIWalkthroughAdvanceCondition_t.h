struct idUIWalkthroughAdvanceCondition_t
{
    // The type of advance condition this condition is
    uiWalkthroughAdvanceConditionType_t conditionType; // Offset: 0x0

    // List of strings that identify widgets this event can occur on
    idList < idStr , TAG_IDLIST , false > widgetIdentifiers; // Offset: 0x8

    // The gamepad button used to advance the walkthrough
    keyNum_t advanceButton; // Offset: 0x20

    // The keyboard key used to advance the walkthrough
    keyNum_t advanceKey; // Offset: 0x24

}; // Size: 0x28
