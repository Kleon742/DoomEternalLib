struct idVolume_PlayerEnvOverride : idVolume
{
    // time in milliseconds to fade in
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeInTime; // Offset: 0xC20

    // time in milliseconds to fade out
    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutTime; // Offset: 0xC24

    // the env to apply
    idDeclEnv* declEnv; // Offset: 0xC28

    // clear env overrides from the entities currently being touched on deactivation
    bool clearEnvOnDeactivate; // Offset: 0xC30

    // activator must be facing this target, if NULL will apply the env automatically
    idManagedClassPtr < idInfo_Trigger_Facing_Target > facingTarget; // Offset: 0xC38

    // Allows multiple facing targets to be set. Can be used with or without "facingTarget". The activator must be facing at least one of these targets.
    idList < idManagedClassPtr < idInfo_Trigger_Facing_Target > , TAG_IDLIST , false > additionalFacingTargets; // Offset: 0xC58

}; // Size: 0xC70
