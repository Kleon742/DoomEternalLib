struct idSWFWidget_Grid : idSWFWidget
{
    enum scrollDirection_t : int
    {
        SCROLL_DIR_UP = 0,
        SCROLL_DIR_DOWN = 1,
        SCROLL_DIR_LEFT = 2,
        SCROLL_DIR_RIGHT = 3
    };

    enum pageMode_t : int
    {
        PAGE_NONE = 0,
        PAGE_LOCKED = 1,
        PAGE_HORIZONTAL = 2,
        PAGE_VERTICAL = 3
    };

    // absolute index into the catalog data of the selected item
    int catalogIndex; // Offset: 0x180

    // index offset for the starting row
    int rowOffset; // Offset: 0x184

    // number of visible rows
    int rows; // Offset: 0x188

    // number of visible columns
    int columns; // Offset: 0x18C

    // number of visible options (override, since this is usually auto-calculated)
    int numVisibleOptionsOverride; // Offset: 0x190

    // page mode, if not PAGE_NONE will scroll out of the visible items in pages instead of rows
    idSWFWidget_Grid::pageMode_t pageMode; // Offset: 0x194

    // if true, will not set the child widget sprite path in Update()
    bool childrenUseCustomSpritePath; // Offset: 0x198

    // disable scrolling
    bool disabledInput; // Offset: 0x199

    // If true, will focus on a grid button on mouse rollover
    bool selectOnRollover; // Offset: 0x19A

    // sound to play when changing pages
    swfSoundType_t pageSound; // Offset: 0x19C

    // the current catalog data with the filter applied
    idList < idMenu_GridData * , TAG_IDLIST , false > catalog; // Offset: 0x1A0

    // scrollbar widget
    idSWFWidget_ScrollBar* scrollBar; // Offset: 0x1B8

}; // Size: 0x1C0
