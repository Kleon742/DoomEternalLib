struct idSWFWidget : idClass
{
    enum idSWFWidgetDeferredOp_t : int
    {
        SWF_WIDGET_DEFER_NONE = 0,
        SWF_WIDGET_DEFER_INSTANT = 1,
        SWF_WIDGET_DEFER_RESET = 2,
        SWF_WIDGET_DEFER_UPDATE = 4,
        SWF_WIDGET_DEFER_SHOW = 8,
        SWF_WIDGET_DEFER_SHOW_INSTANT = 9,
        SWF_WIDGET_DEFER_HIDE = 16,
        SWF_WIDGET_DEFER_HIDE_INSTANT = 17,
        SWF_WIDGET_DEFER_STOP = 32
    };

    struct eventObserver_t
    {
        void (*callback)(void * const param , const idSWFWidget * widget , const idSWFWidgetEvent & event); // Offset: 0x0

        void* user; // Offset: 0x8

    }; // Size: 0x10

    typedef idList < idStr , TAG_MENU > menuStrList_t;

    // The Widget parent.
    idSWFWidget* parentWidget; // Offset: 0x10

    // The Sprite Instance we are using for this widget.
    idSWFSpriteInstance* boundSprite; // Offset: 0x18

    // Instance name of the sprite used by the widget.
    idStr spriteName; // Offset: 0x20

    // Base settable UI walkthrough ID
    idStr uiWalkthroughId; // Offset: 0x50

    // Sprite Path of the widget.
    idList < idStr , TAG_MENU , false > spritePath; // Offset: 0x80

    // Hash of the sprite path.
    int spritePathHash; // Offset: 0x98

    // the children of this widget.
    idList < idSWFWidget * , TAG_MENU , false > children; // Offset: 0xA0

    // anyone who observes our events.
    idList < idSWFWidget * , TAG_MENU , false > widgetObservers; // Offset: 0xB8

    // supports repeating actions, like scroll up
    idSWFActionRepeater_t* actionRepeater; // Offset: 0xD0

    // generic observers. ( call back style )
    idList < idSWFWidget::eventObserver_t , TAG_MENU , false > callbackObservers; // Offset: 0xD8

    idList < idList < idSWFWidgetAction , TAG_MENU > , TAG_MENU , false > eventActions; // Offset: 0xF0

    idArray < char , 56 > eventActionLookup; // Offset: 0x108

    // Call back to our handler.
    bool (*handlerCallback)(void * const param , idSWFWidgetAction & action , const idSWFWidgetEvent & event , idSWFWidget * targetWidget); // Offset: 0x140

    // our Handler.
    void* handlerParm; // Offset: 0x148

    // focus index for the widget.
    int focusIndex; // Offset: 0x150

    // What state the button is in.
    idSWFWidgetState_t widgetState; // Offset: 0x154

    // is this item expanded.
    bool treeExpanded; // Offset: 0x158

    // Can this be expanded.
    bool treeExpandable; // Offset: 0x159

    // Call "Update()" when the widget state changes
    bool updateOnStateChange; // Offset: 0x15A

    // Override flag to tell this widget to allows allow events regardless of player restrictions
    bool alwaysAllowEvents; // Offset: 0x15B

    // Bool to track whether or not bound sprites should be visible restricted
    bool visibilityRestricted; // Offset: 0x15C

    // Reference count for this widget, once this reaches 0 in Release() the widget will delete itself
    swfReferenceCounter_t* refCounter; // Offset: 0x160

    // swf file being used for this Widget.
    idSWF* swf; // Offset: 0x168

    // logic host for this Widget.
    idLogicUIWidget* logicHost; // Offset: 0x170

    // prevents recursive ReceiveEvents when no attached callback handles the event
    SWFWidgetEvent_t handlingReceiveEvent; // Offset: 0x178

    // operations to defer until the next Think.
    int deferredOperations; // Offset: 0x17C

}; // Size: 0x180
