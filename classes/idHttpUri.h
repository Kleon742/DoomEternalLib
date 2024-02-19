struct idHttpUri
{
    enum scheme_t : int
    {
        SCHEME_HTTP = 0,
        SCHEME_HTTPS = 1,
        SCHEME_WS = 2,
        SCHEME_WSS = 3,
        SCHEME_COUNT = 4
    };

    enum queryParamItemType_t : int
    {
        QUERY_PARAM_ITEM_INT = 0,
        QUERY_PARAM_ITEM_INT64 = 1,
        QUERY_PARAM_ITEM_FLOAT = 2,
        QUERY_PARAM_ITEM_DOUBLE = 3,
        QUERY_PARAM_ITEM_BOOL = 4,
        QUERY_PARAM_ITEM_CHAR_PTR = 5,
        QUERY_PARAM_ITEM_STR = 6
    };

    enum queryParamValueType_t : int
    {
        QUERY_PARAM_VALUE_ITEM = 0,
        QUERY_PARAM_VALUE_ITEMS = 1,
        QUERY_PARAM_VALUE_ITEM_LIST = 2
    };

    idHttpUri::scheme_t protocol; // Offset: 0x0

    int port; // Offset: 0x4

    idStr username; // Offset: 0x8

    idStr password; // Offset: 0x38

    idStr host; // Offset: 0x68

    idStr objectName; // Offset: 0x98

}; // Size: 0xC8
