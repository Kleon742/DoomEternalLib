struct SDPSReaction_t
{
    // the total damage needed to trigger this reaction
    float totalDamageNeeded; // Offset: 0x0

    // the total damage as a health fraction needed to trigger this reaction
    float totalHealthFractionNeeded; // Offset: 0x4

    // how much to fill in the bucket on damage
    float stimulusScale; // Offset: 0x8

    // if AI is greater than this health fraction, reaction is invalid, unless there is a prerequisite state
    float prerequisiteHealthFraction; // Offset: 0xC

    // minimum amount of time that must pass before this pain reaction can happen again
    milliToGameTime_t minRetriggerTime; // Offset: 0x10

    // The maximum number of times this reaction is valid (-1 is infinite)
    int maxTimesUsable; // Offset: 0x20

    // must already be in this state for this reaction to happen
    painType_t prerequisiteState; // Offset: 0x24

    // reaction that triggers from this entry
    painType_t reaction; // Offset: 0x28

    // optional tags to pass to animation system
    idList < idAtomicString , TAG_IDLIST , false > tags; // Offset: 0x30

    // reaction occurs when greater than min percentage ( 0 - 1 value )
    float splashRadiusPercMin; // Offset: 0x48

    // reaction occurs when less than max percentage. ( 0 - 1 value )
    float splashRadiusPercMax; // Offset: 0x4C

    // health fraction to set ( minimum ) on recovery ( won't do anything if health is already above this fraction )
    float onRecovery_healthFraction; // Offset: 0x50

    // empty damage bucket when this reaction plays
    bool clearThisBucket; // Offset: 0x54

    // empty all damage buckets when this reaction plays
    bool clearAllBuckets; // Offset: 0x55

    // if true, makes it valid for armored body parts
    bool armored; // Offset: 0x56

}; // Size: 0x58
