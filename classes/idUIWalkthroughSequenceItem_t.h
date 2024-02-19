struct idUIWalkthroughSequenceItem_t
{
    // Str id of the text to go over the command bar
    idStrId commandBarTextId; // Offset: 0x0

    // These widgets are allowed to receive swf events
    idList < uiAllowedWidget_t , TAG_IDLIST , false > allowedWidgets; // Offset: 0x8

    // A list of keys that can be processed
    idList < keyNum_t , TAG_IDLIST , false > allowedKeys; // Offset: 0x20

    // A list of keys that are disallowed
    idList < keyNum_t , TAG_IDLIST , false > restrictedKeys; // Offset: 0x38

    // The gamepad button used to abandon the walkthrough
    commandBarButton_t abandonButton; // Offset: 0x50

    // The keyboard key used to abandon the walkthrough
    keyNum_t abandonKey; // Offset: 0x54

    // Allow joystick events with non-Focus advance conditions
    bool joystickAllowed; // Offset: 0x58

    // The condition that must be satisfied to advance the sequence
    idUIWalkthroughAdvanceCondition_t advanceCondition; // Offset: 0x60

    // A list of text boxes for this sequence item
    idList < idUIWalkthroughTextBox_t , TAG_IDLIST , false > textBoxes; // Offset: 0x88

    // A list of highlight boxes for this sequence item
    idList < idUIWalkthroughHighlightBox_t , TAG_IDLIST , false > highlightBoxes; // Offset: 0xA0

    // A list of widgets that will be hidden for this sequence
    idList < idStr , TAG_IDLIST , false > hiddenWidgets; // Offset: 0xB8

    // A delay before input will be accepted for this sequence item. {{ units == ms }}
    idTypesafeTime < int , millisecondUnique_t , 1000 > inputDelay; // Offset: 0xD0

    // Whether to check the allowed widget's custom logic for allowing/preventing input. Programmers, see CheckCustomWalkthroughLogic.
    bool checkCustomLogic; // Offset: 0xD4

    // The game time at which this sequence item became active.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activationTime; // Offset: 0xD8

}; // Size: 0xE0
