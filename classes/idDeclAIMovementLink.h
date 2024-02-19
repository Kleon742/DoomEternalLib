struct idDeclAIMovementLink : idTypeInfoGraphLink
{
    // whether this chain can be taken
    bool enabled; // Offset: 0x0

    // reason(s) to take this link
    idAIMovementRejectReason_t rejectReason; // Offset: 0x44

}; // Size: 0x48
