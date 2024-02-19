struct idDeclScoringItem_ViolenceEvent : idDeclScoringItem
{
    // ai type for this event to count for
    violenceEvents_t violenceEvent; // Offset: 0xD0

    // decl for advanced violence events
    idDeclViolenceEvent* violenceDecl; // Offset: 0xD8

}; // Size: 0xE0
