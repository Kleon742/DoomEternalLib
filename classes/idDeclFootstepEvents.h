struct idDeclFootstepEvents : idDeclTypeInfo
{
    // AI event to send out for landing
    idDeclAiEvent* landEventDecl; // Offset: 0x88

    // AI event to send out for sneaking
    idDeclAiEvent* sneakEventDecl; // Offset: 0x90

    // AI event to send out for walking
    idDeclAiEvent* walkEventDecl; // Offset: 0x98

    // AI event to send out for running
    idDeclAiEvent* runEventDecl; // Offset: 0xA0

    // AI event to send out for sprinting
    idDeclAiEvent* sprintEventDecl; // Offset: 0xA8

}; // Size: 0xB0
