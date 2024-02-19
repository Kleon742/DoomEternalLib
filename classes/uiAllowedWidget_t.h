struct uiAllowedWidget_t
{
    // The name of this widget
    idStr widgetIdentifier; // Offset: 0x0

    // The types of events that are allowed on this widget
    uiAllowedWidgetEvents_t allowedEventFlags; // Offset: 0x30

    // If true, this will allow events on the widgets parents
    bool allowEventsToParent; // Offset: 0x34

    // If true, this widget will be highlighted (i.e. excluded from being dimmed)
    bool highlight; // Offset: 0x35

}; // Size: 0x38
