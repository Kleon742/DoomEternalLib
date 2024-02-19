struct hitTestNameMapping_t
{
    // name of hit test group to reference everything else by
    idAtomicString hitTestGroupName; // Offset: 0x0

    // if empty, inherits hitTestGroupName
    idAtomicString damageGroupName; // Offset: 0x8

    // if empty, inherits hitTestGroupName
    idAtomicString painGroupName; // Offset: 0x10

    // if empty, inherits hitTestGroupName
    idAtomicString twitchGroupName; // Offset: 0x18

    // if empty, inherits hitTestGroupName
    idAtomicString deathGroupName; // Offset: 0x20

    // if empty, there is no damaged version of this hit test group
    idAtomicString damagedHitTestGroupName; // Offset: 0x28

    // if true, this hit test group should be ON initially
    bool enableOnSpawn; // Offset: 0x30

}; // Size: 0x38
