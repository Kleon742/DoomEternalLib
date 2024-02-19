struct idStructuredLogListener
{
    enum severity_t : int
    {
        ST_SEV_TRACE = 0,
        ST_SEV_DEBUG = 1,
        ST_SEV_INFO = 2,
        ST_SEV_NOTICE = 3,
        ST_SEV_WARNING = 4,
        ST_SEV_ERROR = 5,
        ST_SEV_CRITICAL = 6,
        ST_SEV_MAX = 7
    };

    enum tagMode_t : int
    {
        ST_TAG_WHITELIST = 0,
        ST_TAG_BLACKLIST = 1
    };

    typedef idStrStatic < 64 > tag_t;

    typedef idStrStatic < 64 > listenerName_t;

    typedef idStaticList < idStructuredLogListener::tag_t , 10 > printTagList_t;

    typedef idStaticList < idStructuredLogListener::tag_t , 16 > tagList_t;

    idStructuredLogListener* nextListener; // Offset: 0x8

    idStrStatic < 64 > listenerName; // Offset: 0x10

    idStructuredLogListener::severity_t minSeverity; // Offset: 0x80

    idStructuredLogListener::tagMode_t tagMode; // Offset: 0x84

    idStaticList < idStrStatic < 64 > , 16 , false , TAG_IDLIST > tagList; // Offset: 0x88

}; // Size: 0x7A0
