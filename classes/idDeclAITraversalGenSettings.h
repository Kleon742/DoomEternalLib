struct idDeclAITraversalGenSettings : idGameDeclTypeInfo
{
    // options for what to include in tests and checks
    aiTraversalGenFlags_t flags; // Offset: 0x90

    // knobs for tweaking what is generated
    aiTraversalGenKnobs_t knobs; // Offset: 0x94

    // type of entities to place generated traversals in
    aiTraversalGenEntityType_t entityType; // Offset: 0xC4

}; // Size: 0xC8
