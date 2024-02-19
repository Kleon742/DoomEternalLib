struct idDeclWeapon_ChainsawData : idDeclWeapon_Data
{
    // time to rev the engine from 0% to 100%
    milliToGameTime_t engineRevUpTimeMS; // Offset: 0x90

    // time to rev the engine from 100% to 0%
    milliToGameTime_t engineRevDownTimeMS; // Offset: 0xA0

    // additive anim for rotating chain
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveChainAnim; // Offset: 0xB0

    // additive anim for fuel gauge
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > additiveFuelGaugeAnim; // Offset: 0xB2

    // additive jitter anim to play on hands during cutting
    idAtomicHandleT < aliasRefType_t > additiveHandsJitterAnim; // Offset: 0xB8

    // used when wwise is handling sounds
    idSoundEvent* sound_RTPC_engine_rpm; // Offset: 0xC0

    // the parameter for the sound
    idSoundRTPC* sound_RTPC_engine_rpm_param; // Offset: 0xC8

    // used when wwise is handling sounds
    idSoundEvent* sound_RTPC_chain_rpm; // Offset: 0xD0

    // the parameter for the sound
    idSoundRTPC* sound_RTPC_chain_rpm_param; // Offset: 0xD8

    // sounds to trigger at engine rpm while increasing revs
    idList < chainsawAtRpmSound_t , TAG_IDLIST , false > increasingAtRpmSounds; // Offset: 0xE0

    // sounds to trigger at engine rpm while decreasing revs
    idList < chainsawAtRpmSound_t , TAG_IDLIST , false > decreasingAtRpmSounds; // Offset: 0xF8

    // burst of revs on start
    idSoundEvent* sound_start_without_pull; // Offset: 0x110

    // engine stop sound
    idSoundEvent* sound_engine_stop; // Offset: 0x118

    // sound to play when the throttle is released while running
    idSoundEvent* sound_throttle_released; // Offset: 0x120

    // sound to play when a sync starts (mutes the RTPC sound, etc.)
    idSoundEvent* sound_sync_start; // Offset: 0x128

    // sound to play when a sync ends (mutes the RTPC sound, etc.)
    idSoundEvent* sound_sync_end; // Offset: 0x130

    // sound to play when more fuel is needed to use chainsaw
    idSoundEvent* sound_insufficient_fuel; // Offset: 0x138

    // sound to play when chainsaw has no fuel
    idSoundEvent* sound_no_fuel; // Offset: 0x140

    // sound to play when target is out of range
    idSoundEvent* sound_target_out_of_range; // Offset: 0x148

    // sound to play when a target exists in range, but isn't valid
    idSoundEvent* sound_invalid_target; // Offset: 0x150

    // sound to play when no target exists
    idSoundEvent* sound_no_target; // Offset: 0x158

    // stopped
    idChainsawBehavior_t behavior_STOP; // Offset: 0x160

    // start
    idChainsawBehavior_t behavior_START; // Offset: 0x218

    // idling
    idChainsawBehavior_t behavior_IDLE; // Offset: 0x2D0

    // full throttle, not cutting
    idChainsawBehavior_t behavior_REV; // Offset: 0x388

    // full throttle, surging above normal max revs
    idChainsawBehavior_t behavior_REV_SURGE; // Offset: 0x440

    // full throttle, with cutting load
    idChainsawBehavior_t behavior_REV_CUT; // Offset: 0x4F8

    // full throttle, with cutting load and surging above normal max revs
    idChainsawBehavior_t behavior_REV_CUT_SURGE; // Offset: 0x5B0

    // paused, no functionality, not editable
    idChainsawBehavior_t behavior_PAUSE; // Offset: 0x668

    // what he said
    bool secondaryPullsCordWhileRunning; // Offset: 0x720

    // allows the player to take damage, get knocked back, etc on a failed stab
    idDeclDamage* stabFailDamage; // Offset: 0x728

    // list of entity defs and corresponding glory kill ammo costs
    idDeclEntityDefFloatList* gloryKillAmmoCost; // Offset: 0x730

    // def for fx entity that will be placed at the cut location and used to play gore particles
    idDeclEntityDef* goreFXEntityDef; // Offset: 0x738

    // target that's out of range
    idDeclHighlight* feedback_highlightHandle; // Offset: 0x740

}; // Size: 0x748
