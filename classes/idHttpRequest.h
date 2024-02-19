struct idHttpRequest
{
    enum method_t : int
    {
        METHOD_DELETE = 0,
        METHOD_GET = 1,
        METHOD_HEAD = 2,
        METHOD_PATCH = 3,
        METHOD_POST = 4,
        METHOD_PUT = 5,
        METHOD_MAX = 6
    };

    idHttpRequest::method_t method; // Offset: 0x0

    idStr referrer; // Offset: 0x8

    idHttpUri uri; // Offset: 0x38

    idHttpHeaders headers; // Offset: 0x100

    idHttpBody body; // Offset: 0x1C8

    // A list of inclusive ranges of HTTP status codes that are expected for this request
    idHeapArray < idPair < int , int > , TAG_HEAP_ARRAY > expectedStatusCodes; // Offset: 0x1F8

}; // Size: 0x210
