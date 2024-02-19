struct idTurret : idAnimatedEntity
{
    enum turretStates : int
    {
        TS_WARMUP = 0,
        TS_NORMAL = 1,
        TS_SEARCHING = 2,
        TS_WOBBLY = 3,
        TS_HAYWIRE = 4,
        TS_SILENCED = 5,
        TS_DISABLED = 6,
        TS_DYING = 7,
        TS_SUPPRESSING_FIRE = 8,
        TS_INACTIVE = 9
    };

    // articulated figure properties
    idAnimator_AF afProperties; // Offset: 0x1B48

    // radius damage on explosion if the particle is set
    idDeclDamage* explodeDamage; // Offset: 0x2010

    // if set item will start playing upon its destruction
    idDeclParticle* destroyedParticle; // Offset: 0x2018

    // if set item will start playing shortly before its removal
    idDeclParticle* explodeParticle; // Offset: 0x2020

    // if set item will play when haywire activates.
    idSoundEvent* soundHaywire; // Offset: 0x2028

    // if set item will play after finishing init
    idSoundEvent* soundDoneInit; // Offset: 0x2030

    // if set item will play when it begins dying.
    idSoundEvent* soundDying; // Offset: 0x2038

    // sound to play when the target changes
    idSoundEvent* soundTargetAquired; // Offset: 0x2040

    // sound to play when the object starts turning
    idSoundEvent* soundTurnstart; // Offset: 0x2048

    // density {{ units = kg / ( m * m * m ) }}
    float density; // Offset: 0x2050

    // health component
    idSimpleHealth health; // Offset: 0x2058

    // max detection range {{ units = m }}
    float maxRange; // Offset: 0x2188

    // max range where it will attempt to fire {{ units = m }}
    float maxFireRange; // Offset: 0x218C

    // max angle we can be within to fire
    float maxFireAngle; // Offset: 0x2190

    // max pitch we can be within to fire
    float maxFirePitch; // Offset: 0x2194

    // max angle we can turn from center
    float maxTurnAngle; // Offset: 0x2198

    // if > 0, we can tilt up/down
    float pitchSpeed; // Offset: 0x219C

    // if > 0, the rate at which the gear will rotate as the gun is fired
    float spinwheelSpeed; // Offset: 0x21A0

    // if > 0, we can rotate
    float turnSpeed; // Offset: 0x21A4

    // time it takes to spin up before firing (in ms)
    float windupTime; // Offset: 0x21A8

    // if defined, model that will get swapped out once broken.
    idRenderModel* destroyedModel; // Offset: 0x21B0

    // Joint name that rotates/yaws the turret head around
    idStr nameRotation; // Offset: 0x21B8

    // Joint name that pitches the turret head around
    idStr namePitch; // Offset: 0x21E8

    // Joint to rotate as we fire
    idStr nameSpinwheel; // Offset: 0x2218

    // fire what
    idWeapon weapon; // Offset: 0x2248

    // % chance the gun will rotate and fire after being knocked over but not killed
    int haywireOnKnockdownChance; // Offset: 0x5DE8

    // ms after death before we're removed from the world.
    idTypesafeTime < int , millisecondUnique_t , 1000 > dyingTime; // Offset: 0x5DEC

    // ms we will keep firing when we go haywire
    idTypesafeTime < int , millisecondUnique_t , 1000 > haywireTime; // Offset: 0x5DF0

    // ms required after spawn before we become operational
    idTypesafeTime < int , millisecondUnique_t , 1000 > initTime; // Offset: 0x5DF4

    // max projectiles to have flying at any time
    int maxProjectiles; // Offset: 0x5DF8

    // how long to stay disabled when our tile gets deactivated. 0=not regime,-1=forever,#=time in ms
    idTypesafeTime < int , millisecondUnique_t , 1000 > regimeGridTime; // Offset: 0x5DFC

    // faction this actor is a member of
    idAtomicString factionName; // Offset: 0x5E00

    // if true, obeys gravity, can be moved, moved
    bool isStatic; // Offset: 0x5E08

    // if true, won't be nudged when hit.
    bool noKnockback; // Offset: 0x5E09

    // whether or not we can be hit by the 3rd person crosshair
    bool targetable; // Offset: 0x5E0A

    // if true, object will use the facing of the base to determine max arc. If false, arc is only relative to current facing
    bool useStartFacing; // Offset: 0x5E0B

    // whether we will start disabled until we are activated.
    bool startOff; // Offset: 0x5E0C

    // true if this turret is hanging from the ceiling
    bool invertedTurret; // Offset: 0x5E0D

    // if true will track only on the player THIS IS ONLY FOR INSIDE TOWNS!
    bool trackOnlyPlayer; // Offset: 0x5E0E

    // if true emp will just put this turret into TS_SILENCED state
    bool EMPSilenced; // Offset: 0x5E0F

    // if the model has a sphere model
    bool hasSphereModel; // Offset: 0x5E10

    // will search based off of the last fire direction
    bool searchFromLastTarget; // Offset: 0x5E11

    // if the laser should show during normal state
    bool showLaserDuringAttack; // Offset: 0x5E12

    // how long in MS the turret will be silenced
    idTypesafeTime < int , millisecondUnique_t , 1000 > timeToBeSilenced; // Offset: 0x5E14

    // anim alias to play when dropping the turret
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > dropAnimAlias; // Offset: 0x5E18

    // anim alias to play when a target is acquired
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > acquiredTargetAnimAlias; // Offset: 0x5E1A

    // anim alias to play when a target is lost
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > lostTargetAnimAlias; // Offset: 0x5E1C

    // anim alias to play when the turret is disassembled
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > breakAnimAlias; // Offset: 0x5E1E

    // anim alias to play when the turret wants to shoot
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > shootAnimAlias; // Offset: 0x5E20

    // anim alias to play when the turret wants to shoot
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > SilencedAnimAlias; // Offset: 0x5E22

    // anim alias to play when the turret wants to shoot
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > SilencedIdleAnimAlias; // Offset: 0x5E24

    // anim alias to play when the turret wants to shoot
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > UnSilencedAnimAlias; // Offset: 0x5E26

    // ------------------------ silenced variables ------------------------
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > silencedIntoTime; // Offset: 0x5E28

    idMat3 silencedJointRot; // Offset: 0x5E30

    idMat3 silencedJointPitch; // Offset: 0x5E54

    // ------------------------ turret variables ------------------------
    idVec3 startForwardDir; // Offset: 0x5E78

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x5E84

    // {{ units = m }}
    idVec3 lastPos; // Offset: 0x5E90

    bool isFiring; // Offset: 0x5E9C

    // used for anim driven firing
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextShotTimer; // Offset: 0x5EA0

    // The entity that dropped this turret
    idEntity* turretOwner; // Offset: 0x5EA8

    // ------------------------ targeting variables ------------------------ world state used for enemy tracking and targeting
    idAIWorldState* worldState; // Offset: 0x5EB0

    // the current enemy of the turret gunner
    idManagedClassPtr < idEntity > enemy; // Offset: 0x5EB8

    // the last target we shot at
    idManagedClassPtr < idEntity > lastTarget; // Offset: 0x5ED8

    // the last target who shot us
    idManagedClassPtr < idEntity > attackedByTarget; // Offset: 0x5EF8

    // {{ units = m }}
    idVec3 goalPos; // Offset: 0x5F18

    // ------------------------ state variables ------------------------ how long the turret will search for a target before resetting ( in sec. )
    float searchTime; // Offset: 0x5F24

    // how fast the turret will search
    float searchSpeed; // Offset: 0x5F28

    // the turrets FOV infront of it, 0 = see's everything in range
    float turretFOV; // Offset: 0x5F2C

    // this is the turrets FOV at spawn store it so we can go to 0 and back again
    float startFOV; // Offset: 0x5F30

    // this will force the turret to return to center if it does not search from last target
    bool returnToCenter; // Offset: 0x5F34

    // the angle the turret will search from the start point
    float searchAngle; // Offset: 0x5F38

    // the direction we were facing when we started this search
    idVec3 startSearchDir; // Offset: 0x5F3C

    // when the turret started its search
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startSearchTime; // Offset: 0x5F48

    // how long the turret has been searching for.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeSearched; // Offset: 0x5F50

    // the direction to turn for our search
    int searchDirScale; // Offset: 0x5F58

    // the current search angle
    float currentSearchAngle; // Offset: 0x5F5C

    // the next time it can randomly fire in haywire state
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > randomFireTime; // Offset: 0x5F60

    // the time to stop thinking when in disabled state
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stopThinkTime; // Offset: 0x5F68

    // cosine of the max fire angle
    float cosMaxFireAngle; // Offset: 0x5F70

    // cosine of the max firing pitch
    float cosMaxFirePitch; // Offset: 0x5F74

    // how long the turrets will fire at a last known position ( in sec. )
    float suppresingFireTime; // Offset: 0x5F78

    // when we started to suppressing fire.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startSuppressingFire; // Offset: 0x5F80

    // how long we have been firing at last known
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeSuppressed; // Offset: 0x5F88

    // the best place to shoot while suppressing {{ units = m }}
    idVec3 suppressionFirePoint; // Offset: 0x5F90

    // true if we can go into the inactive state.
    bool canGoInactive; // Offset: 0x5F9C

    // if true has start info set
    bool setStartingInfo; // Offset: 0x5F9D

    bool randomFire; // Offset: 0x5F9E

    bool turning; // Offset: 0x5F9F

    // ------------------------ clip model ------------------------ is the clip model (below) currently enabled?
    bool isClipModelEnabled; // Offset: 0x5FA0

    idTouchComponent touchComponent; // Offset: 0x5FA8

    // ------------------------ animation variables ------------------------
    idIndex < short , invalidJointIndex_t , - 1 > jointRotation; // Offset: 0x6020

    short jointRotationYaw; // Offset: 0x6022

    short clientLastUpdateRotationYaw; // Offset: 0x6024

    short jointRotationPitch; // Offset: 0x6026

    short clientLastUpdateRotationPitch; // Offset: 0x6028

    idIndex < short , invalidJointIndex_t , - 1 > jointPitch; // Offset: 0x602A

    short jointPitchPitch; // Offset: 0x602C

    short clientLastUpdatejointPitch; // Offset: 0x602E

    idIndex < short , invalidJointIndex_t , - 1 > jointSpinwheel; // Offset: 0x6030

    // last yaw rotation to slerp from
    idQuat lastYawRot; // Offset: 0x6034

    // last pitch rotation to slerp from
    idQuat lastPitchRot; // Offset: 0x6044

    idAnimator_Channel channelAnimator; // Offset: 0x6058

    idAnimator_JointMod* jointModAnimator; // Offset: 0x6168

    idDeclInventory* inventoryDecl; // Offset: 0x6170

    // {{ units = m / s }}
    float interceptSpeed; // Offset: 0x6178

    idInventoryCollection inventoryCollection; // Offset: 0x6180

    idList < idManagedClassPtr < idProjectile > , TAG_IDLIST , false > activeProjectiles; // Offset: 0x66E8

    // physics object
    idHavokPhysics_RigidBody physicsObj; // Offset: 0x6700

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > spinTimer; // Offset: 0x6950

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stateTimer; // Offset: 0x6958

    idTurret::turretStates state; // Offset: 0x6960

}; // Size: 0x6968
