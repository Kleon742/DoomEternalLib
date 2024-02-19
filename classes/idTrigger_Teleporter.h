struct idTrigger_Teleporter : idTrigger
{
    struct sounds_t
    {
        // teleporter used
        idSoundEvent* activated; // Offset: 0x0

        // hmm.. do we need this?
        idSoundEvent* deactivated; // Offset: 0x8

        // cooldown period starts
        idSoundEvent* cooldownStart; // Offset: 0x10

        // cooldown period ends
        idSoundEvent* cooldownEnd; // Offset: 0x18

    }; // Size: 0x20

    // {{ units = m }}
    idVec3 fxPosition; // Offset: 0xC90

    idMat3 fxAxis; // Offset: 0xC9C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverNextTriggerTimeGT; // Offset: 0xCC0

    idManagedClassPtr < idEntity > lastClientActivator; // Offset: 0xCC8

    // A link to the other teleporter. Designers use many setups, so this will allow another
    idManagedClassPtr < idTrigger_Teleporter > otherTeleporter; // Offset: 0xCE8

    // The pad will attempt to apply a velocity such that the player lands on this point.
    idManagedClassPtr < idInfo_TeleportDestination > destination; // Offset: 0xD08

    // If true will use player's last valid AAS position to choose from the destination list
    bool chooseAASDestination; // Offset: 0xD28

    // if chooseAASDestination is true will select a destination from this list
    idList < idManagedClassPtr < idInfo_TeleportDestination > , TAG_IDLIST , false > AASdestinationList; // Offset: 0xD30

    // Will play condition FX_TELEPORT_ENTER and FX_TELEPORT_EXIT when a player goes through.
    idDeclFX* teleportFX; // Offset: 0xD48

    // If true, player exits teleporter with same speed as he entered. If false, exits with exitSpeed.
    bool conservePlayerSpeed; // Offset: 0xD50

    // Speed applied to player upon exiting the teleporter, in units per second. {{ units = m / s }}
    float exitSpeed; // Offset: 0xD54

    // Optional telefrag damage on exit
    idDeclDamage* telefragDamageDecl; // Offset: 0xD58

    // FX extra condition to send along with fx_teleport_enter and fx_teleport_exit
    fxExtraCondition_t fxExtraCondition; // Offset: 0xD60

    // sounds used by the teleporter
    idTrigger_Teleporter::sounds_t sounds; // Offset: 0xD68

    // adjusts position of fx to bottom of clip model
    bool fxPositionAtBottomOfClipModel; // Offset: 0xD88

    // allow the streaming to automatically prefetch through this teleporter
    bool streamingPrefetch; // Offset: 0xD89

    bool inCustomJob; // Offset: 0xD8A

    int dormancyToDest; // Offset: 0xD8C

    // entity to use for orienting FX (overrides fxOrientation vector)
    idManagedClassPtr < idEntity > fxOrientationEntity; // Offset: 0xD90

    // delay after entering to do the actual teleport
    idTypesafeTime < int , millisecondUnique_t , 1000 > delayUntilTeleport; // Offset: 0xDB0

    // Allow the teleporter to lock controls for a short period of time after entering
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeTriggered; // Offset: 0xDB8

    // if non-zero upon entering the local player's controls will be disabled for this time
    idTypesafeTime < int , millisecondUnique_t , 1000 > durationToLockControlsOnEnter; // Offset: 0xDC0

    bool hasDisabledPlayerControlInputs; // Offset: 0xDC4

}; // Size: 0xDC8
