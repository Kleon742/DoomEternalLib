struct environmentalHazardFeedback_t
{
    // warning sound has already been marked to fade
    bool warningSoundFaded; // Offset: 0x0

    // damage sound has already been marked to fade
    bool damageSoundFaded; // Offset: 0x1

    // Warning scale for HUD meters
    float warningScale; // Offset: 0x4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > warningIntervalMin; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > warningIntervalMax; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageIntervalMin; // Offset: 0x18

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageIntervalMax; // Offset: 0x20

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastWarningTickTime; // Offset: 0x28

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastDamageTickTime; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > damageTimeLentgh; // Offset: 0x38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > intervalDecay; // Offset: 0x40

    // damage decl to use.
    idDeclDamage* damageDecl; // Offset: 0x48

    // the scale to scale the damage by
    float damageScale; // Offset: 0x50

    // the entity to send back feedback to
    idManagedClassPtr < idEntity > damageFeedbackEnt; // Offset: 0x58

    // Warning sound handle
    idSoundEvent* warningSound; // Offset: 0x78

    // Damage sound handle
    idSoundEvent* damageSound; // Offset: 0x80

}; // Size: 0x88
