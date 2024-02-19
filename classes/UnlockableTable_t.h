struct UnlockableTable_t
{
    // Decl to track.
    idDeclUnlockable* decl; // Offset: 0x0

    // Whether or not it's already been unlocked.
    bool unlocked; // Offset: 0x8

    // Whether or not the rules will update
    bool active; // Offset: 0x9

    // All the rules this unlockable is tracking.
    idList < UnlockableRuleTable_t , TAG_IDLIST , false > rules; // Offset: 0x10

}; // Size: 0x28
