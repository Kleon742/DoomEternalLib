struct idAIPerception
{
    enum idOnOffAuto_t : int
    {
        ONOFFAUTO_OFF = 0,
        ONOFFAUTO_ON = 1,
        ONOFFAUTO_AUTO = 2
    };

    // max radius at which AI can perceive other actors {{ units = m }}
    float actorPerceptionRadius; // Offset: 0x0

    // max radius at which AI can perceive obstacles {{ units = m }}
    float obstaclePerceptionRadius; // Offset: 0x4

    // max radius at which data an existing sensed actor will be updated actively ( -1 = infinite ) {{ units = m }}
    float actorRefreshRadius; // Offset: 0x8

    // max radius .... for close FOV {{ units = m }}
    float closePerceptionRadius; // Offset: 0xC

    // field of view in degrees
    idTypesafeNumber < float , DegreesUnique_t > fieldOfView; // Offset: 0x10

    // field of view for an existing sensed actor
    idTypesafeNumber < float , DegreesUnique_t > fieldOfView_focused; // Offset: 0x14

    // field of view when actors are really close
    idTypesafeNumber < float , DegreesUnique_t > fieldOfView_close; // Offset: 0x18

    // time required to sight a fully exposed enemy
    float exposedSightTime; // Offset: 0x1C

    // base amount of stimulus to add for a sound event (this amount is scaled based on sound intensity, volume and distance)
    float hearingStimulus; // Offset: 0x20

    // max radius at which AI will perceive any events {{ units = m }}
    float eventPerceptionRadius; // Offset: 0x24

    // ai events that this ai will ignore ( I.E. all footsteps )
    aiEventClass_t eventsToIgnore; // Offset: 0x28

    // if true, AI will skip all worldstate updates for non-enemies
    bool senseUpdatesOnNonEnemies; // Offset: 0x2C

}; // Size: 0x30
