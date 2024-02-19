struct idVolume_Siphon : idVolume_DamageOverTime
{
    // time over which to scale up the volume to max value
    idTypesafeTime < int , millisecondUnique_t , 1000 > scaleTimeMS; // Offset: 0xD18

    // max scale amount for the volume
    float scaleAmount; // Offset: 0xD1C

    // initial radius damage ticks in {{ units = m }}
    float initialDamageRadius; // Offset: 0xD20

    // healing multiplier
    float healingMultiplier; // Offset: 0xD24

    // initial scale value
    float initialScale; // Offset: 0xD28

    // if heals teammates
    bool healsTeammates; // Offset: 0xD2C

    // does siphon allow armor healing
    bool allowArmorHeal; // Offset: 0xD2D

    // i entered an enemy siphon, start the loop
    idSoundEvent* sndMPStartEnterSiphonLoop; // Offset: 0xD30

    // stop the siphon loop
    idSoundEvent* sndMPStopEnterSiphonLoop; // Offset: 0xD38

    // i'm inside the siphon, modify all sounds
    idSoundEvent* sndMPStartSiphonDistortion; // Offset: 0xD40

    // left the siphon, stop the distortion
    idSoundEvent* sndMPStopSiphonDistortion; // Offset: 0xD48

    // amount damaged entity will be pulled towards center of siphon {{ units = m / s }}
    float damagePullVelocity; // Offset: 0xD50

    // time scaling started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > scaleStartTime; // Offset: 0xD58

    // time to stop scaling
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > scaleEndTime; // Offset: 0xD60

    // {{ units = m }}
    float curDamageRadius; // Offset: 0xD68

    int damageAmountThisFrame; // Offset: 0xD6C

    int healAmountThisFrame; // Offset: 0xD70

    idManagedClassPtr < idEntity > siphonGrenade; // Offset: 0xD78

    idSoundEvent* loopingAudioHandle; // Offset: 0xD98

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entitiesInDamageRange; // Offset: 0xDA0

    bool pullDamageEntitiesToCenter; // Offset: 0xDB8

}; // Size: 0xDC0
