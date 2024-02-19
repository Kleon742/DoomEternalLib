struct idViolenceHistoryFrameData
{
    // The Deaths that happened this frame.
    idList < idCompiledDamageData , TAG_IDLIST , false > deathEntries; // Offset: 0x0

    // The wounds that happened this frame.
    idList < idCompiledDamageData , TAG_IDLIST , false > woundEnabledEntries; // Offset: 0x18

    // The Hits that happened this frame.
    idList < idCompiledDamageData , TAG_IDLIST , false > hitEntries; // Offset: 0x30

    // All the active Perks on the local Player.
    idList < const idDecl * , TAG_IDLIST , false > activePerks; // Offset: 0x48

    // What weapon the player was using.
    idDeclWeapon* playerWeapon; // Offset: 0x60

    // what was going on this frame.
    int frameFlags; // Offset: 0x68

    // What game Mode this is coming from.
    compiledDamage_Mode_t gameMode; // Offset: 0x6C

}; // Size: 0x70
