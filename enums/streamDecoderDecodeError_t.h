enum streamDecoderDecodeError_t : int
{
    SDE_OK = 0,
    SDE_END_OF_STREAM = 1,
    SDE_FAILURE = 2,
    SDE_OUTPUT_STALL = 3,
    SDE_INPUT_STALL = 4
};
