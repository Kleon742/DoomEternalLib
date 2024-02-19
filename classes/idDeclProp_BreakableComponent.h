struct idDeclProp_BreakableComponent : idDeclProp_DamageComponent
{
    // how much damage the prop will take before it gibs
    float health; // Offset: 0xD0

    // if true, prop only breaks when receiving melee damage
    bool onlyMeleeDamage; // Offset: 0xD4

    // entity to replace this one with when prop is gibbed
    idDeclEntityDef* replacement; // Offset: 0xD8

    // parts are entities that are always spawned when prop is gibbed. the replacement recieves no initial velocity.
    idList < const idDeclEntityDef * , TAG_IDLIST , false > parts; // Offset: 0xE0

    // splinters are entities that are randomly spawned when prop is gibbed
    idList < const idDeclEntityDef * , TAG_IDLIST , false > splinters; // Offset: 0xF8

    // the minimum # of splinters to spawn when gibbed
    int minSplinters; // Offset: 0x110

    // the maximum # of splinters to spawn when gibbed
    int maxSplinters; // Offset: 0x114

    // Become projectile on sprint melee damage;
    idDeclEntityDef* sprintMeleeProjectile; // Offset: 0x118

    // sound to play when object breaks
    idSoundEvent* sound_break; // Offset: 0x120

    // delay bounce sounds this long ( in seconds ) after broken
    float delaySoundAfterBreak; // Offset: 0x128

    // sound to make when smoking.
    idSoundEvent* smokeSound; // Offset: 0x130

    // if set item will start smoking when damaged
    idDeclParticle* smokeParticle; // Offset: 0x138

    // Fixed time to smoke for ( MS ) ( -1 == ignore smokeTime )
    idTypesafeTime < int , millisecondUnique_t , 1000 > smokeTime; // Offset: 0x140

    // If greater than smokeTime then this defines the upper limit of a random range (MS)
    idTypesafeTime < int , millisecondUnique_t , 1000 > smokeTimeMax; // Offset: 0x144

    // will explode immediately if player or demon damages it
    bool canExplodeImmediately; // Offset: 0x148

    // if true this will break if activated from a trigger
    bool breakFromTrigger; // Offset: 0x149

    // if true this breakable explodes
    bool explodes; // Offset: 0x14A

    // a projectile to use for the explosion if desired
    idDeclEntityDef* explosionProjectile; // Offset: 0x150

    // AI event to send for explosion
    idDeclAiEvent* explosionEventDecl; // Offset: 0x158

    // damage decl to use for explosion
    idDeclDamage* explodeDamage; // Offset: 0x160

    // if true then prop will go through its smoking / damaged stage before breaking even if health reaches 0
    bool requireSmokeBeforeBreak; // Offset: 0x168

    // breakable entity
    idDeclEntityDef* breakable; // Offset: 0x170

    // use destructible.
    idDeclDestructible* destructible; // Offset: 0x178

    // entity will be spawned when this breakable breaks and gets respawned.
    idDeclEntityDef* entityToSpawnOnRespawn; // Offset: 0x180

    // another entity will be spawned when this breakable breaks.
    idDeclEntityDef* entityToSpawnOnBreak2; // Offset: 0x188

    // spawn position offset {{ units = m }}
    idVec3 entityToSpawnOnBreak2SpawnOffset; // Offset: 0x190

    // types of ammo that can damage this breakable
    idList < const idDeclDamage * , TAG_IDLIST , false > ammoDamage; // Offset: 0x1A0

    // time (in secs) to fade out, if 0 will not fade out
    float fadeTime; // Offset: 0x1B8

    // what stat to increase on damage/break;
    gameStat_t breakStat; // Offset: 0x1BC

    // can ai melee damage this?
    bool aiMeleeDamageable; // Offset: 0x1C0

    // if fadeTime is greater than zero, hide instead of fade on break
    bool hideNotFadeOnBreak; // Offset: 0x1C1

    // if >0, start a countdown timer when AI or player is within this range {{ units = m }}
    float mineActivationRadius; // Offset: 0x1C4

    // how long timer will tick before exploding
    float mineTimerMS; // Offset: 0x1C8

    // prop2 attachment anim to start when breakable is touched (index into idProp2.attachments.animWebPathList)
    prop2AttachmentAnim_t activateAnim_OnActivation; // Offset: 0x1CC

    // sound to play when activated
    idSoundEvent* activationSound; // Offset: 0x1D8

    // breaks on activate
    bool breaksOnActivate; // Offset: 0x1E0

}; // Size: 0x1E8
