struct idSWFWidget_List : idSWFWidget
{
    enum dividerPushDirection_t : int
    {
        DIVIDER_PUSH_BEFORE = 0,
        DIVIDER_PUSH_AFTER = 1
    };

    enum listAlignment_t : int
    {
        ALIGN_TOP = 0,
        ALIGN_BOTTOM = 1
    };

    struct dividerInfo_t
    {
        // where the divider was inserted into the list
        int insertIndex; // Offset: 0x0

        // how large the divider should be (relative size - will flip negative/positive based on pushDirection)
        float dividerSize; // Offset: 0x4

        // which direction to push elements in the list
        idSWFWidget_List::dividerPushDirection_t pushDirection; // Offset: 0x8

    }; // Size: 0xC

    idSWFWidget_ScrollBar* scrollBar; // Offset: 0x180

    int numVisibleOptions; // Offset: 0x188

    int numSelectableOptions; // Offset: 0x18C

    int viewOffset; // Offset: 0x190

    int viewIndex; // Offset: 0x194

    int scrollOff; // Offset: 0x198

    bool allowWrapping; // Offset: 0x19C

    bool childrenUseCustomSpritePath; // Offset: 0x19D

    bool defaultSpritePathIncludesInfo; // Offset: 0x19E

    bool lockControls; // Offset: 0x19F

    idSWFWidget_List::listAlignment_t alignment; // Offset: 0x1A0

    idList < idSWFWidget_List::dividerInfo_t , TAG_IDLIST , false > dividerInfo; // Offset: 0x1A8

    bool useListData; // Offset: 0x1C0

    bool useAllListData; // Offset: 0x1C1

    bool selectOnRollOver; // Offset: 0x1C2

    bool resetStartY; // Offset: 0x1C3

    bool resetFocusOnScreenChange; // Offset: 0x1C4

    bool playScrollFailedSound; // Offset: 0x1C5

    bool updateStateOfChildrenOnUpdate; // Offset: 0x1C6

    bool scrollFailPassthrough; // Offset: 0x1C7

    bool updateParentOnScroll; // Offset: 0x1C8

    bool nonFocusableItems; // Offset: 0x1C9

    bool recalculateOnDelete; // Offset: 0x1CA

}; // Size: 0x1D0
