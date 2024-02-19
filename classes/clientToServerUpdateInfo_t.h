struct clientToServerUpdateInfo_t
{
    // world position {{ units = m }}
    idVec3 origin; // Offset: 0x0

    // player's speed {{ units = m / s }}
    float speed; // Offset: 0xC

    // player's movement direction
    short movementDirection[3]; // Offset: 0x10

    // player's speed on XY-plane {{ units = m / s }}
    float modelSpeed; // Offset: 0x18

    // {{ units = radians / s }}
    float modelTurnSpeed; // Offset: 0x1C

    // view angles
    short angles[3]; // Offset: 0x20

    idUserCmd userCmd; // Offset: 0x28

    bool physicsHasGroundContacts; // Offset: 0xC0

    bool isSprinting; // Offset: 0xC1

    bool isFullyZoomedIn; // Offset: 0xC2

    bool isWeaponFiring; // Offset: 0xC3

    bool isWeaponCharged; // Offset: 0xC4

    bool ammoClipsAreFull; // Offset: 0xC5

    bool isSyncInstigator; // Offset: 0xC6

    bool isDashing; // Offset: 0xC7

    bool wantsToTeleport; // Offset: 0xC8

    bool wantsToGroundSlam; // Offset: 0xC9

    bool isBerserkCharging; // Offset: 0xCA

    bool demonCanSeeSlayer; // Offset: 0xCB

    short ledgeGrabbingState; // Offset: 0xCC

    unsigned char physicsHasJumpedCount; // Offset: 0xCE

    unsigned char physicsHasDoubleJumpedCount; // Offset: 0xCF

    idVec3 monkeybarAnimPos; // Offset: 0xD0

    // Used for uniquely IDing ledge grabs. TODO: Could be done in reliable if we move ledge grab that way.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > monkeybarUniqueTimeStamp; // Offset: 0xE0

    idVec3 dashedDirection; // Offset: 0xE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > dashedUniqueTimeStamp; // Offset: 0xF8

    // interpolated server time this was applied on
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverGameTime; // Offset: 0x100

    // spawnId for entity we were in control of when this was written out. could be idPlayer or idDemonPlayer right now. helps us avoid reading the wrong data into player when it's from the controlledEntity
    idSpawnId controlledEntitySpawnId; // Offset: 0x108

    // number of times we've dodged teleported as a demon imp. Temp.
    unsigned short teleportCount; // Offset: 0x10C

    // number of times we've fired the primary fire
    unsigned short fireCountPrimary; // Offset: 0x10E

    // number of times we've fired the secondary fire
    unsigned short fireCountSecondary; // Offset: 0x110

    // ammo count for the weapon. ***NOTE!!! we serialize only 1 ammo count per weapon, but we store two (1 for each fire mode) in the weapon!***
    unsigned short ammoCount; // Offset: 0x112

    // Last element of serveroverride buffer we've processed for our local player
    unsigned short processedServerOverrideIndex; // Offset: 0x114

    // charge percent for the fire count
    float weaponChargePercentForFire; // Offset: 0x118

    // NOTE: if how the fireAngles and firePos are sent over the network changes then idWeapon::NetQuantizeFirePos and idWeapon::NetQuantizeFireAngle will need to be updated. pos of projectile spawning( need for plasma gun type of weapons since exact spawn pos/ang is determined by hand state )
    float firePos[3]; // Offset: 0x11C

    // angles of projectile spawning (needed for plasma gun type of weapons since exact spawn pos/ang is determined by hand state )
    short fireAngles[2]; // Offset: 0x128

    // a seed for use in this fire event deterministic effects (spread, etc)... note if
    short fireSeed; // Offset: 0x12C

    // slot weapon is in
    unsigned char equipSlot; // Offset: 0x12E

    // Only used by playable demons, where the model angle can be different from the view angle.
    short demonModelAngles[3]; // Offset: 0x130

    // Only used by playable demons, the revenant's heat value TODO: FIND A BETTER WAY
    float demonGenericValue; // Offset: 0x138

    // The position of the ledge grab. TODO: Perhaps all of this should be done in a reliable so we don't bloat this struct. {{ units = m }}
    idVec3 ledgeGrabPos; // Offset: 0x13C

    // Used for uniquely IDing ledge grabs. TODO: Could be done in reliable if we move ledge grab that way.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > ledgeGrabUniqueTimestamp; // Offset: 0x148

    int weaponBytesClassId; // Offset: 0x150

    // additional spread of weapon used for recoil
    float addSpread; // Offset: 0x154

    // not really an array, cast to a weapon specific struct serializing weapon specific data to the server.
    unsigned char weaponBytes[28]; // Offset: 0x158

    // stores the offset from the pusher where we are currently located {{ units = m }}
    idVec3 pusherOffset; // Offset: 0x174

    // the spawn id of the entity pushing us
    idSpawnId pusherSpawnId; // Offset: 0x180

    // the spawn id of possession target
    idSpawnId possessionTargetSpawnId; // Offset: 0x184

    // client authoritative last input time ( used for tracking idle state in MP ) - "simulated" so that we can pause it while not tracking.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > simulatedLastInputTime; // Offset: 0x188

    // player index of the player we are watching/spectating, so we can get the full HUD state.
    unsigned char followTargetId; // Offset: 0x190

    // target of the attack (may be NULL for weapons that use a trace)
    idSpawnId target; // Offset: 0x194

    // joint index to use for target
    short targetJointIndex; // Offset: 0x198

    // number of blood punch charges
    float bloodPunchCharges; // Offset: 0x19C

}; // Size: 0x1A0
