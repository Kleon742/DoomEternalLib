struct idHUDEvent_DebugElement
{
    enum debugHudElementEvent_t : int
    {
        DEBUG_HUD_ELEMENT_CREATE = 0,
        DEBUG_HUD_ELEMENT_UPDATE = 1,
        DEBUG_HUD_ELEMENT_DELETE = 2,
        DEBUG_HUD_ELEMENT_SHOW = 3,
        DEBUG_HUD_ELEMENT_HIDE = 4
    };

    struct info_t
    {
        idHUDEvent_DebugElement::debugHudElementEvent_t eventId; // Offset: 0x0

        char name[32]; // Offset: 0x4

        float x; // Offset: 0x24

        float y; // Offset: 0x28

        float width; // Offset: 0x2C

        float height; // Offset: 0x30

        float prct; // Offset: 0x34

        idColor frameColor; // Offset: 0x38

        idColor barColor; // Offset: 0x48

        char barText[64]; // Offset: 0x58

        bool absoluteSize; // Offset: 0x98

    }; // Size: 0x9C

    idHUDEvent_DebugElement::info_t info; // Offset: 0x0

}; // Size: 0x9C
