struct idSWFWidget_Wheel : idSWFWidget
{
    // data associated with the wheel.
    idSWFWidget_WheelData* data; // Offset: 0x180

    // The class to instantiate when creating the wedge list
    idTypeInfoPtr < idSWFWidget_WheelWedge > wedgeClass; // Offset: 0x188

    // wedges of the wheel.
    idList < idSWFWidget_WheelWedge * , TAG_IDLIST , false > wedges; // Offset: 0x190

    // number of wedges currently displayed.
    int numWedges; // Offset: 0x1A8

    // which index was selected.
    int selectionIndex; // Offset: 0x1AC

    // last thing which was selected.
    int lastSelectionIndex; // Offset: 0x1B0

    // activated wedge.
    int activationIndex; // Offset: 0x1B4

    // last thing which was activated.
    int lastActivationIndex; // Offset: 0x1B8

    // automatically activate wedges when selected.
    bool activateWhenSelected; // Offset: 0x1BC

    // set widget state for selecting/unselecting/normal
    bool setWedgeWidgetState; // Offset: 0x1BD

    // update the focus index when selecting wedges
    bool setFocusIndexOnSelection; // Offset: 0x1BE

    // clear selection when input goes into deadzone or roll out
    bool clearSelectionFromInput; // Offset: 0x1BF

    // the compiled selection axis.
    idVec2 selectionAxis; // Offset: 0x1C0

    // The Axis that is smoothed every frame.
    idVec2 smoothedSelectionAxis; // Offset: 0x1C8

    // left Joystick input.
    idVec2 leftJoystickAxis; // Offset: 0x1D0

    // right Joystick input.
    idVec2 rightJoystickAxis; // Offset: 0x1D8

    // current mouse position.
    idVec2 curMousePosition; // Offset: 0x1E0

    // cached absolute center pos
    idVec2 wheelCenter; // Offset: 0x1E8

    // navigate with the left stick.
    bool useLeftStick; // Offset: 0x1F0

    // navigate with the right stick.
    bool useRightStick; // Offset: 0x1F1

    // If false, won't process input
    bool enableInput; // Offset: 0x1F2

    // If true wedges are selected with mouse cursor rollover events (for menus), otherwise it's a directional movement based approach
    bool mouseRollOverSelection; // Offset: 0x1F3

    // perform updates of rollover position
    bool mouseRollOverUpdates; // Offset: 0x1F4

}; // Size: 0x1F8
