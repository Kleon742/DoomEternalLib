struct idDeclBotSkill : idDeclTypeInfo
{
    struct senseSkillSettings_t
    {
        // how much stimulus to apply for each frame we can see the target.
        float visibleStimulusPerFrame; // Offset: 0x0

        // how much stimulus to apply for each frame we can hear the target.
        float audibleStimulusPerFrame; // Offset: 0x4

        // how fast the visible stimulus should decay
        float visibleStimulusDecayPerFrame; // Offset: 0x8

        // how fast the audible stimulus should decay
        float audibleStimulusDecayPerFrame; // Offset: 0xC

    }; // Size: 0x10

    struct aimSkillSettings_t
    {
        // if bots current angle is within this tolerance of its ideal, it snaps to the ideal.
        float angleDiffSnap; // Offset: 0x0

        // max angle acceleration allowed per second.
        float maxAcceleration; // Offset: 0x4

        // the "stiffness" of the spring representing the bots ability to track targets. The larger the value, the "tighter" the spring and the fast they track.
        float springStiffness; // Offset: 0x8

        // affects the quickness of the crosshair movement, and any resulting oscilliations.
        float damping; // Offset: 0xC

        // time the aimpoint should be offset from the targets true origin ( i.e. if the target is moving: a negative time lags, a positive time leads ).
        float offsetTimeInSeconds; // Offset: 0x10

    }; // Size: 0x14

    struct syncMeleeSkillSettings_t
    {
        // how long the bot would have needed to see the enemy before it can sync melee that enemy ( in milliseconds ).
        idTypesafeTime < int , millisecondUnique_t , 1000 > minTimeAwareOfEnemyBeforeCanSyncMeleeMS; // Offset: 0x0

    }; // Size: 0x4

    // the bots aim skill settings. 0 = EASY. 1 = NORMAL. 2 = HARD. 3 = INSANE
    idArray < idDeclBotSkill::aimSkillSettings_t , 4 > aimSkillSettings; // Offset: 0x88

    // the bots sense skill settings. 0 = EASY. 1 = NORMAL. 2 = HARD. 3 = INSANE
    idArray < idDeclBotSkill::senseSkillSettings_t , 4 > senseSkillSettings; // Offset: 0xD8

    // the bots sync melee skill settings. 0 = EASY. 1 = NORMAL. 2 = HARD. 3 = INSANE
    idArray < idDeclBotSkill::syncMeleeSkillSettings_t , 4 > syncMeleeSkillSettings; // Offset: 0x118

}; // Size: 0x128
