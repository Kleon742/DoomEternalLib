struct idAIDamageState_StateAction_Pain : idAIDamageState_StateAction
{
    // reaction that triggers from this entry
    painType_t reaction; // Offset: 0x18

    // optional tags to pass to animation system
    idList < idAtomicString , TAG_IDLIST , false > tags; // Offset: 0x20

    // health fraction to set ( minimum ) on recovery ( won't do anything if health is already above this fraction )
    float onRecovery_healthFraction; // Offset: 0x38

    // ask the gore system to pop these wound types when this pain is played
    woundType_t requestedWoundType; // Offset: 0x3C

    // an optional string to send to the aiPainGraph to match specific animations or pain states
    idAtomicString optionalPainString; // Offset: 0x40

    // an optional gore name
    idAtomicString optionalGoreName; // Offset: 0x48

    // if true (and optionalPainString is empty), just remove painString entry from temp memory entirely
    bool clearPainString; // Offset: 0x50

    // List of flags to test in the pain graph
    painAnimTestFlags_t painGraphTestFlags; // Offset: 0x54

}; // Size: 0x58
