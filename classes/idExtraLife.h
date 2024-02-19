struct idExtraLife : idInventoryItem
{
    enum playerDeathSoundState_e : int
    {
        SOUND_STATE_ALIVE = 0,
        SOUND_STATE_DEATH = 1
    };

    float regenerationTimeLeft; // Offset: 0x110

    float invulnerabilityTimeLeft; // Offset: 0x114

    float enemyIgnoreTimeLeft; // Offset: 0x118

    float fadeTimeLeft; // Offset: 0x11C

    int oldHUDFlags; // Offset: 0x120

    bool isOwnerSpawning; // Offset: 0x124

    // Sound state tracking
    idExtraLife::playerDeathSoundState_e currentSoundState; // Offset: 0x128

    idSoundWwiseID playerDeathStateGroup; // Offset: 0x12C

    idSoundWwiseID playerDeath_deathState; // Offset: 0x130

    idSoundWwiseID playerDeath_aliveState; // Offset: 0x134

}; // Size: 0x138
