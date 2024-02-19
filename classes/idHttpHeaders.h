struct idHttpHeaders
{
    enum contentType_t : int
    {
        CONTENT_TYPE_UNSPECIFIED = 0,
        CONTENT_TYPE_OTHER = 1,
        CONTENT_TYPE_TEXT_PLAIN = 2,
        CONTENT_TYPE_TEXT_HTML = 3,
        CONTENT_TYPE_APPLICATION_JSON = 4,
        CONTENT_TYPE_APPLICATION_X_AG_JSON = 5,
        CONTENT_TYPE_APPLICATION_OCTET_STREAM = 6,
        CONTENT_TYPE_APPLICATION_X_WWW_FORM_URLENCODED = 7,
        CONTENT_TYPE_IMAGE_PNG = 8,
        CONTENT_TYPE_APPLICATION_SDP = 9
    };

    enum transferEncoding_t : int
    {
        TRANSFER_ENCODING_CHUNKED = 0,
        TRANSFER_ENCODING_COMPRESS = 1,
        TRANSFER_ENCODING_DEFLATE = 2,
        TRANSFER_ENCODING_GZIP = 3,
        TRANSFER_ENCODING_IDENTITY = 4,
        TRANSFER_ENCODING_UNKNOWN = 5
    };

    typedef idStrBuffer < 100 > formatBuffer_t;

    idList < idPair < idStr , idStr > , TAG_IDLIST , false > headers; // Offset: 0x0

    idList < idStr , TAG_IDLIST , false > accepted; // Offset: 0x18

    idList < idStr , TAG_IDLIST , false > secWebSocketProtocols; // Offset: 0x30

    idStr eTag; // Offset: 0x48

    idStr contentLocation; // Offset: 0x78

    long long contentLength; // Offset: 0xA8

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > retryAfter; // Offset: 0xB0

    idHttpHeaders::contentType_t contentType; // Offset: 0xB8

    idHttpHeaders::transferEncoding_t transferEncoding; // Offset: 0xBC

    bool keepAlive; // Offset: 0xC0

}; // Size: 0xC8
