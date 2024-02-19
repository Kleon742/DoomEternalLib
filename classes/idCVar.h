struct idCVar
{
    struct cvarCallback_t
    {
        idCallback* callback; // Offset: 0x0

        idCVar::cvarCallback_t* next; // Offset: 0x8

    }; // Size: 0x10

    struct cvarData_t
    {
        // Current value
        char* valueString; // Offset: 0x0

        // atoi( valueString )
        int valueInteger; // Offset: 0x8

        // atof( valueString )
        float valueFloat; // Offset: 0xC

        // Current value
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > valueGameTime; // Offset: 0x10

        idTypesafeTime < float , secondUnique_t , 1 > valueSeconds; // Offset: 0x18

        idTypesafeTime < int , millisecondUnique_t , 1000 > valueMilliseconds; // Offset: 0x1C

        idTypestrictTimeSpan < long long , idCompileTimeRatio < 1 , 1000000 > > valueMicroseconds; // Offset: 0x20

        // Static data, never changed
        char* name; // Offset: 0x28

        char* resetString; // Offset: 0x30

        char* description; // Offset: 0x38

        // CVAR_? flags
        int flags; // Offset: 0x40

        // minimum value
        float valueMin; // Offset: 0x44

        // maximum value
        float valueMax; // Offset: 0x48

        // valid value strings
        char** valueStrings; // Offset: 0x50

        // Rarely changes value auto-completion function
        void (*valueCompletion)(idAutoComplete & autoComplete); // Offset: 0x58

        // Linked list of callbacks to call when this cvar changes
        idCVar::cvarCallback_t* onChange; // Offset: 0x60

    }; // Size: 0x68

    // This can't be removed because some reflections still exist because some libs are loaded twice. ( idlib, engineshared. )
    idCVar::cvarData_t* data; // Offset: 0x0

    idCVar::cvarData_t dataStorage; // Offset: 0x8

    // only needs access to 'next'
    idCVar* next; // Offset: 0x70

}; // Size: 0x78
