struct idLogicUIWidget : idClass
{
    struct widgetCallback_t
    {
        void (*callback)(void * const param , const char * eventName , const void * const eventData); // Offset: 0x0

        idAtomicString name; // Offset: 0x8

    }; // Size: 0x10

    // Logic entity parameters
    logicEntityParameters_t logic; // Offset: 0x18

    // Primary widget associated with this logic host
    idSWFWidget* widget; // Offset: 0x38

    // Is this logic host 'owned' by m_widget?
    bool widgetOwnsThis; // Offset: 0x40

    // Host object ID
    unsigned int objectId; // Offset: 0x44

    // Widget function callbacks exposed to logic
    idList < idLogicUIWidget::widgetCallback_t , TAG_IDLIST , false > widgetCallbacks; // Offset: 0x48

    // Index for the above
    idHashIndex widgetCallbackIndex; // Offset: 0x60

    bool propertiesNeedUpdate; // Offset: 0x90

}; // Size: 0x98
