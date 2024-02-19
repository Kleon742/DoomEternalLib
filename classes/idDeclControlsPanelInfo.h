struct idDeclControlsPanelInfo : idGameDeclTypeInfo
{
    struct controlInfo_t
    {
        // The button or buttons used on controller
        commandBarButton_t controllerInput; // Offset: 0x0

        // The keys used on PC
        idList < keyNum_t , TAG_IDLIST , false > pcKeys; // Offset: 0x8

        // The text describing what the input does
        idStrId descriptionText; // Offset: 0x20

        // Whether to use mouse movement as the PC equivalent (there is no keyNum_t for mouse movement)
        bool isMouseMoveForPC; // Offset: 0x24

        // Whether the pcKey is mouse wheel vert (there is no keyNum_t for bidirectional mouse wheel)
        bool isMouseWheelVert; // Offset: 0x25

        // Whether to flip the order of compound controller buttons like BUTTON_JOY_BUMPERS, and the accompanying PC keys.
        bool flipCompoundTooltips; // Offset: 0x26

    }; // Size: 0x28

    // heading text for the controls panel if one
    idStrId headingText; // Offset: 0x90

    // the info used for an individual control the controls to show in the panel
    idList < idDeclControlsPanelInfo::controlInfo_t , TAG_IDLIST , false > controlsToShow; // Offset: 0x98

}; // Size: 0xB0
