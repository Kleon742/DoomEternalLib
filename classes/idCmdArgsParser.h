struct idCmdArgsParser
{
    enum argType_t : int
    {
        UNKNOWN = 0,
        BOOLEAN = 1,
        INTEGER = 2,
        FLOAT = 3,
        STRING = 4
    };

    enum parseResult_t : int
    {
        SUCCESS = 0,
        UNKNOWN_ARG = 1,
        ARG_TYPE_MISMATCH = 2,
        MISSING_REQUIRED_ARG = 3,
        REDUNDANT_ARG_PARSED = 4,
        EMPTY_ARGS = 5,
        HELP_INFO_SHOWN = 6
    };

    struct idArgInfo
    {
        // The name of the argument.
        idStr argName; // Offset: 0x0

        // A description of the argument that will be shown in the help info.
        idStr argDescription; // Offset: 0x30

        // The string value of the argument.
        idStr argValue; // Offset: 0x60

        // Whether or not the argument is required when parsed.
        bool isRequired; // Offset: 0x90

        // Whether or not the argument is valid (has been parsed and matched the correct type).
        bool isValid; // Offset: 0x91

        // The expected value type for the argument.
        idCmdArgsParser::argType_t argType; // Offset: 0x94

        // The hash for the description string.
        int argDescriptionHash; // Offset: 0x98

    }; // Size: 0xA0

    // A list of the registered args that should be checked for when parsing.
    idList < idCmdArgsParser::idArgInfo , TAG_IDLIST , false > argsToParse; // Offset: 0x0

    // The description of the command that the args are for.
    idStr commandDescription; // Offset: 0x18

}; // Size: 0x48
