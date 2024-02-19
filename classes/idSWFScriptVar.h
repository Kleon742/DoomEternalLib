struct idSWFScriptVar
{
    enum swfScriptVarType : int
    {
        SWF_VAR_UNDEF = 0,
        SWF_VAR_STRINGID = 1,
        SWF_VAR_STRING = 2,
        SWF_VAR_ATOMIC_STRING = 3,
        SWF_VAR_DOUBLE = 4,
        SWF_VAR_INTEGER = 5,
        SWF_VAR_NULL = 6,
        SWF_VAR_BOOL = 7,
        SWF_VAR_OBJECT = 8
    };

    struct swfScriptVarValue_t
    {
        double d; // Offset: 0x0

        long long i; // Offset: 0x0

        bool b; // Offset: 0x0

        idSWFScriptObject* object; // Offset: 0x0

        idStrRefCounted* string; // Offset: 0x0

        char* atomicString; // Offset: 0x0

    }; // Size: 0x8

    idSWFScriptVar::swfScriptVarType type; // Offset: 0x0

    idSWFScriptVar::swfScriptVarValue_t value; // Offset: 0x8

}; // Size: 0x10
