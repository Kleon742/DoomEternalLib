struct idCacodemonCombat_TrapEnemy : idAIState
{
    enum trapStage_t : int
    {
        TRAP_STAGE_NONE = 0,
        TRAP_STAGE_SHOOTING = 1,
        TRAP_STAGE_TURN = 2,
        TRAP_STAGE_TURN_AND_REEL_IN = 3,
        TRAP_STAGE_REEL_IN = 4,
        TRAP_STAGE_ATTACK = 5,
        TRAP_STAGE_ABORT = 6
    };

    struct turnInfo_t
    {
        // player turn speed (degrees/s)
        float speed; // Offset: 0x0

        // player pitch speed (degrees/s)
        float pitchSpeed; // Offset: 0x4

        // turn angle to allow reel in
        idTypesafeNumber < float , DegreesUnique_t > angleToAllowReelIn; // Offset: 0x8

        // player turn duration
        idTypesafeTime < float , secondUnique_t , 1 > duration; // Offset: 0xC

        // player pitch change duration
        idTypesafeTime < float , secondUnique_t , 1 > pitchChangeDuration; // Offset: 0x10

        // how long the player's been turning for
        idTypesafeTime < float , secondUnique_t , 1 > life; // Offset: 0x14

        // facing of the enemy at the start of the turn
        idVec3 startForward; // Offset: 0x18

        // final facing of the enemy
        idVec3 endForward; // Offset: 0x24

        // start facing (flattened) of the enemy
        idVec3 flattenedStartForward; // Offset: 0x30

        // final facing (flattened) of the enemy
        idVec3 flattenedEndForward; // Offset: 0x3C

        // rotation to use
        idQuat rotation; // Offset: 0x48

        // cosine of the turn angle that allows reeling in
        float cosToAllowReelIn; // Offset: 0x58

        // pitch at start of rotation
        float startPitch; // Offset: 0x5C

        // pitch at end of rotation
        float endPitch; // Offset: 0x60

    }; // Size: 0x64

    // clip query
    idHavokQueryId clipQuery; // Offset: 0x130

    // loop sound shader to play at the start of the attack
    idSoundEvent* loopStartSoundShader; // Offset: 0x138

    // sound shader to play at the end of the attack
    idSoundEvent* attackEndSoundShader; // Offset: 0x140

    // ribbon that will represent the cacodemon's tongue for now
    idRibbon2 ribbon; // Offset: 0x148

    // ribbon decl
    idDeclRibbon2* ribbonDecl; // Offset: 0x260

    // name of the tongue joint
    idAtomicString tongueJointName; // Offset: 0x268

    // memory key that holds the destination for the snare
    idAtomicString snareDestinationKey; // Offset: 0x270

    // idle destination node
    idAnimWebPath idleNode; // Offset: 0x278

    // attack via node
    idAnimWebPath attackNode; // Offset: 0x2A8

    // enemy location {{ units = m }}
    idVec3 currentEnemyLocation; // Offset: 0x2D8

    // enemy location in the previous frame {{ units = m }}
    idVec3 previousEnemyLocation; // Offset: 0x2E4

    // the snare will we shot towards this location {{ units = m }}
    idVec3 snareTargetDestination; // Offset: 0x2F0

    // target offset {{ units = m }}
    idVec3 targetOffset; // Offset: 0x2FC

    // how long we allow the player to be stuck for before we abort the attack
    idTypesafeTime < float , secondUnique_t , 1 > maxStuckTime; // Offset: 0x308

    // last stuck timestamp
    idTypesafeTime < float , secondUnique_t , 1 > lastStuckTimestamp; // Offset: 0x30C

    // timestamp
    idTypesafeTime < float , secondUnique_t , 1 > timestamp; // Offset: 0x310

    // last stuck timestamp
    idTypesafeTime < float , secondUnique_t , 1 > shootingDuration; // Offset: 0x314

    // how fast the enemy will be attracted towards the cacodemon {{ units = m / s }}
    float attractionMaxSpeed; // Offset: 0x318

    // attack distance {{ units = m }}
    float attackDistance; // Offset: 0x31C

    // enemy will be grabbed if within this radius from the tongue {{ units = m }}
    float grabRadius; // Offset: 0x320

    // information about the rotation of the player's camera
    idCacodemonCombat_TrapEnemy::turnInfo_t turnInfo; // Offset: 0x324

    // distance to enemy when the attack was triggered {{ units = m }}
    float debugInitialDistanceToEnemy; // Offset: 0x388

    // height difference to enemy when the attack was triggered {{ units = m }}
    float debugInitialHeightDiffToEnemy; // Offset: 0x38C

    // vertical impulse to be applied to the enemy if he breaks the attack
    float brokenVerticalImpulseSpeed; // Offset: 0x390

    // we won't push the player back at a speed greater than this
    float maxBrokenImpulseSpeed; // Offset: 0x394

    // maximum distance (tongue length) {{ units = m }}
    float maxSnareDistance; // Offset: 0x398

    // index of the tongue joint
    idIndex < short , invalidJointIndex_t , - 1 > tongueJointIndex; // Offset: 0x39C

    // current stage
    idCacodemonCombat_TrapEnemy::trapStage_t stage; // Offset: 0x3A0

    // initial area index
    int initialEnemyAASAreaIndex; // Offset: 0x3A4

    // whether the enemy was stuck in the previous frame
    bool enemyWasStuck; // Offset: 0x3A8

    // true if reel in VFX has been started, false otherwise
    bool reelFXStarted; // Offset: 0x3A9

}; // Size: 0x3B0
