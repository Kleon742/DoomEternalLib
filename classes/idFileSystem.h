struct idFileSystem
{
    enum fileListSortType_t : int
    {
        FL_SORT_NONE = 0,
        FL_SORT_ALPHABETICAL = 1,
        FL_SORT_ALPHABETICAL_NONE_PATH = 2,
        FL_SORT_SHORT_TO_LONG = 3,
        FL_SORT_LONG_TO_SHORT = 4,
        FL_SORT_NUM_TYPES = 5
    };

    typedef idStrStatic < 1024 > osPath_t;

}; // Size: 0x8
