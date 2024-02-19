struct Shared_AnimQueries : idAIStateTransition
{
    // raise priority to get query through system faster in a crowd
    animQueryPriority_t queryPriority; // Offset: 0xF8

    // tests to run on the query
    animQueryTestTypes_t testTypes; // Offset: 0xFC

    // options for how tests are run
    animQueryTestOptions_t testOptions; // Offset: 0x100

    // key to use instead of transition name ( optional )
    idAtomicString queryName; // Offset: 0x108

}; // Size: 0x110
