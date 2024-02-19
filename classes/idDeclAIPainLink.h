struct idDeclAIPainLink : idTypeInfoGraphLink
{
    // rejection reason required to take this link
    aiPainRejectReason_t rejectReason; // Offset: 0x40

    // debug flags
    aiGraphDebugFlags_t debugFlags; // Offset: 0x44

    // whether this chain can be taken
    bool enabled; // Offset: 0x0

}; // Size: 0x50
