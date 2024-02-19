struct idTrigger_TakeDamage : idTrigger_Damage
{
    // should actual attacker be passed to activated targets?
    bool passAttackerToActivatedTargets; // Offset: 0xCB0

    // restricts the damage to only those listed in the alternativeDamageDefs
    bool restrictToAltDamageDefs; // Offset: 0xCB1

    // must match one of the exact alt damage decls provided
    bool matchExactAltDamageDef; // Offset: 0xCB2

    // allow damage parms with zero max damage to activate
    bool allowZeroDamage; // Offset: 0xCB3

    // can this trigger activate the player's bloodpunch?
    bool canActivateBloodPunch; // Offset: 0xCB4

    // entity to damage
    idManagedClassPtr < idEntity > entityToDamage; // Offset: 0xCB8

    // additional damage types
    idList < const idDeclDamage * , TAG_IDLIST , false > alternativeDamageDefs; // Offset: 0xCD8

    // amount of last damage done
    float lastDamage; // Offset: 0xCF0

    float currentHealth; // Offset: 0xCF4

    // sound played trigger is activated
    idSoundEvent* soundActivated; // Offset: 0xCF8

    // sound played trigger is waiting
    idSoundEvent* soundWaiting; // Offset: 0xD00

    // sound played trigger is ready (can be activated again)
    idSoundEvent* soundReady; // Offset: 0xD08

    // fx - activated / ready
    idDeclFX* fxDecl; // Offset: 0xD10

    // type of weapon damage this applies to
    weaponDamageTypeBits_t weaponDamageType; // Offset: 0xD18

    // treat as solid geometry to the destroyer blade
    bool treatAsSolidGeoToDestroyerBladeProjectiles; // Offset: 0xD20

    // the eyeball inside the hellcube
    bool isHellCubeEye; // Offset: 0xD21

    bool triggerReadyNoSound; // Offset: 0xD22

}; // Size: 0xD28
