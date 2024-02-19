struct idVolume_RevivePlayer : idVolume
{
    enum coopReviveVolumeState_t : int
    {
        COOP_REVIVE_VOLUME_IDLE = 0,
        COOP_REVIVE_VOLUME_REVIVING = 1,
        COOP_REVIVE_VOLUME_COMPLETE = 2,
        COOP_REVIVE_VOLUME_INVALID = 3,
        COOP_REVIVE_VOLUME_MAX = 4
    };

    idManagedClassPtr < idPlayer > incapPlayer; // Offset: 0xC20

    idManagedClassPtr < idPlayer > revivingPlayer; // Offset: 0xC40

    idVolume_RevivePlayer::coopReviveVolumeState_t currentState; // Offset: 0xC60

    // sound feedback for reviving
    idSoundEvent* reviveLoopFeedback; // Offset: 0xC68

    // sound for completing a revive
    idSoundEvent* reviveCompleteFeedback; // Offset: 0xC70

    idSoundEvent* reviveSoundHandle; // Offset: 0xC78

}; // Size: 0xC80
