struct idTarget_Melee : idTarget
{
    // should actual attacker be passed to activated targets?
    bool passAttackerToActivatedTargets; // Offset: 0x0

    // if true, demon players do not collide with this entity
    bool demonPlayersPassThrough; // Offset: 0x0

    // if true, removes this target entity when damaged.
    bool removeOnDamage; // Offset: 0x0

    // if true target will only damage once
    bool damageOnce; // Offset: 0x0

    // whether this has already been triggered
    bool damageGiven; // Offset: 0x0

    // the level of the melee weapon must be in order for it to trigger target, -1==none
    int meleeWeaponLevel; // Offset: 0xB8C

    // type of damage that can damage this entity
    idDamageParms::damageType_t takesDamageFromDamageTypes; // Offset: 0xB90

    // fx - activated / ready
    idDeclFX* fxDecl; // Offset: 0xB98

    // Targeting Decl ( defines specific aim assist / AR target points )
    idDeclTargeting* targetingDecl; // Offset: 0xBA0

    // Don't allow the trigger to be used for this amount of time after being triggered
    idTypesafeTime < int , millisecondUnique_t , 1000 > coolOffTimer; // Offset: 0xBA8

    // the next time we are allowed to trigger
    idTypesafeTime < int , millisecondUnique_t , 1000 > nextActiveTime; // Offset: 0xBAC

}; // Size: 0xBB0
