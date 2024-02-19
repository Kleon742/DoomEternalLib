struct idViolenceHistoryFrameData_t
{
    // intframeFlags; The Situation around the deaths this frame. The Deaths that happened this frame.
    idList < idCompiledDamageData , TAG_IDLIST , false > deathEntries; // Offset: 0x0

    // The Hits that happened this frame.
    idList < idCompiledDamageData , TAG_IDLIST , false > hitEntries; // Offset: 0x18

    // What weapon the player was using.
    idDeclWeapon* playerWeapon; // Offset: 0x30

}; // Size: 0x38
