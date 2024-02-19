struct idDeclStagedTimer : idGameDeclTypeInfo
{
    // How should each timer stage behave?
    idList < timerStage_t , TAG_IDLIST , false > timerStages; // Offset: 0x90

    // The scoring item that clears the multiplier. Used to turn off the multiplier bonus when finished or otherwise needed. (Ask if better way to do this?)
    idDeclScoringItem* clearMultiplier; // Offset: 0xA8

    // Sound to play at timer start
    idSoundEvent* timerStartSound; // Offset: 0xB0

    // Sound to play at timer end
    idSoundEvent* timerEndSound; // Offset: 0xB8

    // Sound to play at 5s left
    idSoundEvent* timer5sLeftSound; // Offset: 0xC0

    // Sound to play at 4s left
    idSoundEvent* timer4sLeftSound; // Offset: 0xC8

    // Sound to play at 3s left
    idSoundEvent* timer3sLeftSound; // Offset: 0xD0

    // Sound to play at 2s left
    idSoundEvent* timer2sLeftSound; // Offset: 0xD8

    // Sound to play at 1s left
    idSoundEvent* timer1sLeftSound; // Offset: 0xE0

    // Sound to play when timer stage changes (values drop)
    idSoundEvent* timerStageChangeSound; // Offset: 0xE8

    // Sound to play when the player finishes the timed challenge early, a successful completion
    idSoundEvent* timerCompletedSound; // Offset: 0xF0

    // since coins aren't really managed in a system (like bounty demons), the staged timer is in charge of detecting when to play SFX for certain coin related events Sound to play if a non-gold coin is picked up
    idSoundEvent* coinPickedUpSound; // Offset: 0xF8

    // Sound to play if a gold coin is picked up
    idSoundEvent* goldCoinPickedUpSound; // Offset: 0x100

    // Sound to play if all coins are picked up (but at least one was not gold)
    idSoundEvent* allCoinsPickedUpSound; // Offset: 0x108

    // Sound to play if all coins were picked up while gold
    idSoundEvent* allGoldCoinsPickedUpSound; // Offset: 0x110

    // FX conditions for challenge entities for timer-related VFX FX condition to start on challenge entities for gold stage when timer starts ( ai, coins, etc. )
    fxCondition_t goldStageFXStart_StartCondition; // Offset: 0x118

    // FX condition to stop on challenge entities for gold stage when timer starts ( ai, coins, etc. )
    fxCondition_t goldStageFXStart_StopCondition; // Offset: 0x11C

    // FX condition to start once gold stage is over for challenge entities ( ai, coins, etc. )
    fxCondition_t goldStageFXStop_StartCondition; // Offset: 0x120

    // FX condition to stop once gold stage is over for challenge entities ( ai, coins, etc. )
    fxCondition_t goldStageFXStop_StopCondition; // Offset: 0x124

    // FX condition to start on challenge entities for silver stage when timer starts ( ai, coins, etc. )
    fxCondition_t silverStageFXStart_StartCondition; // Offset: 0x128

    // FX condition to stop on challenge entities for silver stage when timer starts ( ai, coins, etc. )
    fxCondition_t silverStageFXStart_StopCondition; // Offset: 0x12C

    // FX condition to start once silver stage is over for challenge entities ( ai, coins, etc. )
    fxCondition_t silverStageFXStop_StartCondition; // Offset: 0x130

    // FX condition to stop once silver stage is over for challenge entities ( ai, coins, etc. )
    fxCondition_t silverStageFXStop_StopCondition; // Offset: 0x134

    // FX condition to start on challenge entities for bronze stage when timer starts ( ai, coins, etc. )
    fxCondition_t bronzeStageFXStart_StartCondition; // Offset: 0x138

    // FX condition to stop on challenge entities for bronze stage when timer starts ( ai, coins, etc. )
    fxCondition_t bronzeStageFXStart_StopCondition; // Offset: 0x13C

    // FX condition to start once bronze stage is over for challenge entities ( ai, coins, etc. )
    fxCondition_t bronzeStageFXStop_StartCondition; // Offset: 0x140

    // FX condition to stop once bronze stage is over for challenge entities ( ai, coins, etc. )
    fxCondition_t bronzeStageFXStop_StopCondition; // Offset: 0x144

}; // Size: 0x148
