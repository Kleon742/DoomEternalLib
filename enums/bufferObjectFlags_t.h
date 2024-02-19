enum bufferObjectFlags_t : unsigned char
{
    NONE = 0,
    DO_NOT_POOL = 1,
    TRANSFER_SRC = 2,
    TRANSFER_DST = 4,
    TRANSFER_QUEUE = 8,
    ASYNC_COMPUTE = 16,
    SPARSE = 32,
    CPU_SHADOW = 64
};
