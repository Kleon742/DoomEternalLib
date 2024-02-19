struct idTrigger_Hurt : idTrigger
{
    // damage type
    idDeclDamage* damageDecl; // Offset: 0xC90

    // true = push from center, false = push opposite to activator velocity or push towards a target if targetting an info
    bool pushFromCenter; // Offset: 0xC98

    // true = generates weapon stats for doing damage, false = doesn't.
    bool trackWeaponStatsOnDamage; // Offset: 0xC99

    // if true this trigger will disable dash on entry
    bool disableDash; // Offset: 0xC9A

    // Remove the damage box after X amount of MS.
    idTypesafeTime < int , millisecondUnique_t , 1000 > removeAfterMS; // Offset: 0xC9C

    // Fx to Play at the trigger's center.
    idDeclFX* fxDecl; // Offset: 0xCA0

    // Entity that is the cause of this trigger, passed into damage function
    idManagedClassPtr < idEntity > sourceEnt; // Offset: 0xCA8

    // This the multiplier for expanding the volume to detect proximity (warning meter for env hazards)
    float volumeExpansionScale; // Offset: 0xCC8

    // don't let the rad meter absorb damage from this specific entity
    bool ignoreRadMeterDamageMitigation; // Offset: 0xCCC

    // damage point manager to create for this damage
    idDeclEntityDef* envDamagePointManagerDef; // Offset: 0xCD0

    // damage point to create for this damage
    idDeclEntityDef* envDamagePointDef; // Offset: 0xCD8

    idManagedClassPtr < idEntity > envDamagePointManager; // Offset: 0xCE0

    idManagedClassPtr < idEntity > envDamagePoint; // Offset: 0xD00

    idManagedClassPtr < idEntity > lastActivator; // Offset: 0xD20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastTimeTouched; // Offset: 0xD40

}; // Size: 0xD48
