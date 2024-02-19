struct idHttpResponse
{
    enum TransportError_t : int
    {
        TRANSPORT_OK = 0,
        TRANSPORT_CANCELLED = 1,
        TRANSPORT_TIMEOUT = 2,
        TRANSPORT_RESOURCE_SETUP_FAILURE = 3,
        TRANSPORT_UNKNOWN_SETUP_FAILURE = 4,
        TRANSPORT_UNKNOWN_PUMP_FAILURE = 5,
        TRANSPORT_UNKNOWN = 6
    };

    idHttpResponse::TransportError_t transportError; // Offset: 0x0

    int statusCode; // Offset: 0x4

    idStr statusText; // Offset: 0x8

    idStr errorMessage; // Offset: 0x38

    idHttpHeaders headers; // Offset: 0x68

    idHttpBody body; // Offset: 0x130

    idHttpStats stats; // Offset: 0x160

    idHttpResponseContext* context; // Offset: 0x180

}; // Size: 0x188
