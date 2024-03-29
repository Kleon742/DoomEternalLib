enum annosoftError_t : int
{
    ANNOSOFT_ERROR_SUCCESS = 0,
    ANNOSOFT_ERROR_CMDLINE_SYNC = 1000,
    ANNOSOFT_ERROR_NO_PHONEME_FILE = 1001,
    ANNOSOFT_ERROR_PHONEME_GEN_FAILED = 1002,
    ANNOSOFT_ERROR_INTERNAL = 5000,
    ANNOSOFT_ERROR_NO_TEXT = 5001,
    ANNOSOFT_ERROR_NO_SAMPLE_NAME = 5002,
    ANNOSOFT_ERROR_WWISE_EVENT_PATH_FAILED = 5003,
    ANNOSOFT_ERROR_INTERMEDIATE_PATH_FAILED = 5004,
    ANNOSOFT_ERROR_WAV_NOT_FOUND = 5005,
    ANNOSOFT_ERROR_WRITING_TEXT = 5006,
    ANNOSOFT_ERROR_REGENED_AS_TEXTLESS = 5007
};
