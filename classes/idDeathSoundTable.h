struct idDeathSoundTable
{
    struct deathSound_t
    {
        // The default sound to use when a death sound is not defined for a particular category
        idSoundEvent* defaultSound; // Offset: 0x0

        // Sound to use when the player is killed by sludge
        idSoundEvent* sludgeSound; // Offset: 0x8

        // Sound to use when the player is killed by a generic kill volume
        idSoundEvent* killVolumeSound; // Offset: 0x10

        // Sound to use when the player is killed by lava
        idSoundEvent* lavaSound; // Offset: 0x18

    }; // Size: 0x20

    // TODO -- These can be further expanded for mode-specific purposes Sounds to use when other death sounds are not defined
    idDeathSoundTable::deathSound_t defaultSounds; // Offset: 0x0

}; // Size: 0x20
