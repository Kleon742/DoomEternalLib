enum lexerFlags_t : int
{
    LEXFL_NOERRORS = 1,
    LEXFL_NOWARNINGS = 2,
    LEXFL_NOFATALERRORS = 4,
    LEXFL_VCSTYLEREPORTS = 8,
    LEXFL_NOSTRINGCONCAT = 16,
    LEXFL_NOSTRINGESCAPECHARS = 32,
    LEXFL_NODOLLARPRECOMPILE = 64,
    LEXFL_NOPOUNDPRECOMPILE = 128,
    LEXFL_NOBASEINCLUDES = 256,
    LEXFL_NOGLOBALDEFINES = 512,
    LEXFL_ALLOWPATHNAMES = 1024,
    LEXFL_ALLOWNUMBERNAMES = 2048,
    LEXFL_ALLOWIPADDRESSES = 4096,
    LEXFL_ALLOWFLOATEXCEPTIONS = 8192,
    LEXFL_ALLOWMULTICHARLITERALS = 16384,
    LEXFL_ALLOWBACKSLASHSTRINGCONCAT = 32768,
    LEXFL_ONLYSTRINGS = 65536,
    LEXFL_NOEMITSTRINGESCAPECHARS = 131072,
    LEXFL_ALLOWRAWSTRINGBLOCKS = 262144,
    LEXFL_THROWFATAL = 524288,
    LEXFL_NOSTRINGS = 1048576,
    LEXFL_ALLOWWILDCARD = 2097152,
    LEXFL_REPORT_MULTIPLE_ERRORS = 4194304,
    LEXFL_SKIPNUMBERS = 8388608,
    LEXFL_NOINCLUDES = 16777216
};
