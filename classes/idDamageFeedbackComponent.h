struct idDamageFeedbackComponent
{
    enum simpleDamageDirectionFlag_t : int
    {
        SIMPLE_DAMAGE_DIR_LEFT = 1,
        SIMPLE_DAMAGE_DIR_RIGHT = 2,
        SIMPLE_DAMAGE_DIR_FRONT = 3
    };

    enum screenCrackIntensityLevel_t : int
    {
        SCREEN_CRACK_INTENSITY_NONE = 0,
        SCREEN_CRACK_INTENSITY_LIGHT = 1,
        SCREEN_CRACK_INTENSITY_MEDIUM = 2,
        SCREEN_CRACK_INTENSITY_HEAVY = 3
    };

    struct critDamageInfo_t
    {
        // The ID of the entity that caused the damage
        int damageSourceID; // Offset: 0x0

        // The number of times the damage source has inflicted damage since we began tracking it
        int hitCount; // Offset: 0x4

        // The total amount of damage that has been caused
        float damage; // Offset: 0x8

        // The time at which this damage will be considered expired
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > expirationTime; // Offset: 0x10

        // The last time damage was taken from the damage source
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTime; // Offset: 0x18

        // The damage decl that caused the damage
        idDeclDamage* damageDecl; // Offset: 0x20

    }; // Size: 0x28

    struct pickUpFeedbackBufferItem_t
    {
        idSoundEvent* pickupSound; // Offset: 0x0

    }; // Size: 0x8

    struct damageFeedbackBufferItem_t
    {
        // how much damage has been done
        float damage; // Offset: 0x0

        // what the final damageScale was when damage was applied
        float damageScale; // Offset: 0x4

        // the source of the damage (might be the attacker, might be his projectile).
        idManagedClassPtr < idEntity > sourceOfDamage; // Offset: 0x8

        // need this flag to prevent prediction code and server code from trigger certain events ( like knockback ) when getting damage by client authoritative sources
        bool selfDamage; // Offset: 0x28

        // the impact point in local space {{ units = m }}
        idVec3 impactPoint; // Offset: 0x2C

        // the direction of the impact
        idVec3 impactDir; // Offset: 0x38

        // the direction of the impact {{ units = kg * m / s }}
        idVec3 impactKick; // Offset: 0x44

        // time when the player can start controlling movement again
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > impactOverrideTimer; // Offset: 0x50

        // the damage decl that was done
        idDeclDamage* damageDecl; // Offset: 0x58

        // damageFlags for where you took damage
        damageScalarDamageFlags_t damageFlags; // Offset: 0x60

        // armor before taking damage
        float armorBefore; // Offset: 0x64

        // armor after taking damage
        float armorAfter; // Offset: 0x68

        // time stamp of being added to the buffer (not serialized, used for PVP optimizations)
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > addedTimeStamp; // Offset: 0x70

        // whether the client needs to reprocess this entry ( PVP updated existing entry to save bandwidth )
        bool reprocess; // Offset: 0x78

        // whether this entry has been processed
        bool processed; // Offset: 0x79

    }; // Size: 0x80

    struct viewDamageSourceInfo_t
    {
        idManagedClassPtr < idEntity > sourceOfDamage; // Offset: 0x0

        float damageDone; // Offset: 0x20

        float spikeDamage; // Offset: 0x24

        // Specifically used when process by the client - who doesn't know who the damage source is (it may not be serializable) {{ units = m }}
        idVec3 damageSourceOrigin; // Offset: 0x28

        idInstantNetEvent < 15 > damageJustDealt; // Offset: 0x34

        idDeclDamage* damageDecl; // Offset: 0x40

        bool shouldPlayPredictedSound; // Offset: 0x48

        bool selfDamage; // Offset: 0x49

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageServerTime; // Offset: 0x50

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > threatIndicatorTime; // Offset: 0x58

        int hitCount; // Offset: 0x60

    }; // Size: 0x68

    struct damageDealtFeedbackItem_t
    {
        idManagedClassPtr < idEntity > victim; // Offset: 0x0

        damageScalarDamageFlags_t damageFlags; // Offset: 0x20

        idDeclDamage* damageDecl; // Offset: 0x28

        bool wasDead; // Offset: 0x30

    }; // Size: 0x38

    // Information concerning critical damage stats
    idArray < idDamageFeedbackComponent::critDamageInfo_t , 3 > critDamageInfo; // Offset: 0x8

    // the adapter for player we're associated with
    idEntityAdapter* entityAdapter; // Offset: 0x80

    // buffer for damage taken feedback
    idArray < idDamageFeedbackComponent::damageFeedbackBufferItem_t , 10 > damageFeedback; // Offset: 0x88

    // buffer position
    int damageFeedbackBufferPos; // Offset: 0x588

    // serialized buffer count so we know how much to playback
    int serializeDamageFeedbackCount; // Offset: 0x58C

    // the buffer pos the last time serialize was called, allows us to aggregate damage together better in PVP
    int lastDamageFeedbackBufferPosAtSerialize; // Offset: 0x590

    // last time serialize occured, allows us to aggregate damage together better in PVP
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSerializationTime; // Offset: 0x598

    // last time AddDamageTaken was called
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTakenTime; // Offset: 0x5A0

    // The current screen-crack intensity level
    idDamageFeedbackComponent::screenCrackIntensityLevel_t screenCrackIntensityLevel; // Offset: 0x5A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > overheatExpirationTime; // Offset: 0x5B0

    // buffer for damage taken sent to the view
    idArray < idDamageFeedbackComponent::viewDamageSourceInfo_t , 3 > viewDamageSources; // Offset: 0x5B8

    // the next time the heart beat will play when low health
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextBeatTime; // Offset: 0x6F0

    // whether to lub or dub the heartbeat
    bool heartBeatLub; // Offset: 0x6F8

    // buffer for damage dealt
    idArray < idDamageFeedbackComponent::damageDealtFeedbackItem_t , 4 > damageDealtBuffer; // Offset: 0x700

    // serialized buffer index
    int damageDealtBufferIndex; // Offset: 0x7E0

    // local buffer index
    int lastDamageDealtBufferIndex; // Offset: 0x7E4

    // buffer for pickups
    idArray < idDamageFeedbackComponent::pickUpFeedbackBufferItem_t , 8 > pickUpBuffer; // Offset: 0x7E8

    // serialized buffer index
    int pickUpBufferIndex; // Offset: 0x828

    // local buffer index
    int lastPickUpBufferIndex; // Offset: 0x82C

    // player teleport failed sound
    idNetEvent < 15 > teleportFailed; // Offset: 0x830

    // player teleport failed sound
    idNetEvent < 15 > teleportTimedOut; // Offset: 0x848

    // player teleport destroyed sound
    idNetEvent < 15 > teleporterDestroyed; // Offset: 0x860

    // player's explosion missed
    idNetEvent < 15 > explosionMissed; // Offset: 0x878

    // player slicer destroyed
    idNetEvent < 15 > slicerDestroyed; // Offset: 0x890

    // player threat sensor got destroyed
    idNetEvent < 15 > threatSensorDestroyed; // Offset: 0x8A8

    // player threat sensor expired or redeployed
    idNetEvent < 15 > threatSensorExpired; // Offset: 0x8C0

    // player got healed by a siphon grenade
    idNetEvent < 15 > healBySiphon; // Offset: 0x8D8

    // player got damaged by a siphon grenade
    idNetEvent < 15 > damageBySiphon; // Offset: 0x8F0

    // player is current drone target
    idNetEvent < 15 > droneTarget; // Offset: 0x908

    // player's drone is seeking a target
    idNetEvent < 15 > droneSeeking; // Offset: 0x920

    // player's drone attacked the target
    idNetEvent < 15 > droneAttackedTarget; // Offset: 0x938

    // player's turret destroyed or timed out
    idNetEvent < 15 > turretDestroyed; // Offset: 0x950

    // player's turret attacked a target
    idNetEvent < 15 > turretAttacked; // Offset: 0x968

    bool isShowingLowHealthWarning; // Offset: 0x980

    // records whether sound for entering 'low health' was played or not
    bool playedLowHealthSound; // Offset: 0x981

    // records whether sound for recovering from 'low health' was played or not
    bool playedLowHealthRecoverySound; // Offset: 0x982

    // records time when sound was last played so that we can avoid playing it again too soon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastLowHealthSoundTime; // Offset: 0x988

    // records time when sound was last played so that we can avoid playing it again too soon
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastLowHealthRecoverySoundTime; // Offset: 0x990

    int curHealthScreenFXSlot; // Offset: 0x998

    fxCondition_t curHealthScreenFXCondition; // Offset: 0x99C

    // track feedback sounds and don't play more than one per frame
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > headshotSoundTime; // Offset: 0x9A0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > feedbackSoundTime; // Offset: 0x9A8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageToArmorSoundTime; // Offset: 0x9B0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > meleeDamageSoundTime; // Offset: 0x9B8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > headshotDamageSoundTime; // Offset: 0x9C0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageSoundTime; // Offset: 0x9C8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > critDamageSoundTime; // Offset: 0x9D0

}; // Size: 0x9D8
