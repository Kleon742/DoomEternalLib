struct idSWFScriptObject
{
    enum swfNamedVarFlags_t : int
    {
        SWF_VAR_FLAG_NONE = 0,
        SWF_VAR_FLAG_READONLY = 2,
        SWF_VAR_FLAG_DONTENUM = 4,
        SWF_VAR_FLAG_DONTDELETE = 8
    };

    struct swfNamedVar_t
    {
        int hashNext; // Offset: 0x0

        int flags; // Offset: 0x4

        idAtomicString name; // Offset: 0x8

        idSWFScriptNativeVariable* native; // Offset: 0x10

        idSWFScriptVar value; // Offset: 0x18

    }; // Size: 0x28

    swfReferenceCounter_t* refCounter; // Offset: 0x8

    // After looking into this a lot, almost 72% of our objects have never added a single variable to the list by the time they are destructed. 28% add exactly 2 elements. The remaining < 1% add some other number. Just loading into an MP match we have 60,000 of these active at peak, and on a PS4, sizeof( swfNamedVar_t ) is 48 bytes, so each static element of this array adds 2.7 megabytes to our total memory. Even setting it at 2 elements is adding 5.4 megabytes, but it is eliminating a decent number of allocations.
    idGrowableList < idSWFScriptObject::swfNamedVar_t , 2 , TAG_SWF > variables; // Offset: 0x10

    int variablesHash[16]; // Offset: 0x78

    idSWFScriptObject* prototype; // Offset: 0xB8

}; // Size: 0xC0
