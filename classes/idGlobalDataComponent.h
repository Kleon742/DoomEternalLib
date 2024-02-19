struct idGlobalDataComponent : idGameDeclTypeInfo
{
    struct viewGlobals_t
    {
        // Icon for the threat of nearby grenades
        idMaterial2* threatIconGrenadeMaterial; // Offset: 0x0

        // Icon for threats?
        idStaticModel* threatIconModel; // Offset: 0x8

        // Model for threat indicators?
        idStaticModel* attackerThreatIndicatorModel; // Offset: 0x10

        // On screen indicator for grenades
        idStaticModel* grenadeThreatIndicatorOnscreenModel; // Offset: 0x18

        // Off screen indicator for grenades
        idStaticModel* grenadeThreatIndicatorOffscreenModel; // Offset: 0x20

        // Indicator for demons
        idStaticModel* demonThreatIndicatorModel; // Offset: 0x28

        // Material for white
        idMaterial2* whiteMaterial; // Offset: 0x30

        // Material for red
        idMaterial2* redMaterial; // Offset: 0x38

        // Material for green
        idMaterial2* greenMaterial; // Offset: 0x40

        // Material for blue
        idMaterial2* blueMaterial; // Offset: 0x48

    }; // Size: 0x50

    // check each of these for validity in the Spawn  call and throw an error upon failure destructible manager global entity.
    idDeclEntityDef* destructibleManager; // Offset: 0x90

    // Fallback for demon card deck
    idDeclDemonCardDeck* defaultDemonCardDeck; // Offset: 0x98

    // idWeaponEntity for code to spawn
    idDeclEntityDef* defaultWeaponEnt; // Offset: 0xA0

    // fatal fall damage
    idDeclDamage* damageFatalFall; // Offset: 0xA8

    // hard fall damage
    idDeclDamage* damageHardFall; // Offset: 0xB0

    // soft fall damage
    idDeclDamage* damageSoftFall; // Offset: 0xB8

    // suicide damage
    idDeclDamage* damageSuicide; // Offset: 0xC0

    // change team damage
    idDeclDamage* damageChangeTeam; // Offset: 0xC8

    // crank damage
    idDeclDamage* damageCrank; // Offset: 0xD0

    // crush damage
    idDeclDamage* damageCrush; // Offset: 0xD8

    // mover crush damage
    idDeclDamage* damageMoverCrush; // Offset: 0xE0

    // gib damage
    idDeclDamage* damageGib; // Offset: 0xE8

    // telefrag damage
    idDeclDamage* damageTelefrag; // Offset: 0xF0

    // one point damage
    idDeclDamage* damageOne; // Offset: 0xF8

    // incapacitated damage
    idDeclDamage* damageIncapacitated; // Offset: 0x100

    // chainsaw sync kill -- used for TEMP FALLBACK for chainsaw syncs that haven't been created yet
    idDeclDamage* damageChainsawSyncKill; // Offset: 0x108

    // explode AI event decl
    idDeclAiEvent* explodeAIEventDecl; // Offset: 0x110

    // collide AI event decl
    idDeclAiEvent* collideAIEventDecl; // Offset: 0x118

    // mouse cursor
    idMaterial2* mouseCursor; // Offset: 0x120

    // monospace font
    idFont* monospaceFont; // Offset: 0x128

    // projectile trajectory ribbon
    idDeclRibbon2* projectiletrajectory; // Offset: 0x130

    // inheritance info for all aiMonsterType_t values
    idDeclAIMonsterTypeInheritance* aiMonsterTypeInheritance; // Offset: 0x138

    // a sound to play when loading a map (audio wants this to trigger a wwise event to reset the sound bus)
    idSoundEvent* sndMapLoad; // Offset: 0x140

    // crucible
    idDeclStatusEffect* statusEffectCrucible; // Offset: 0x148

    // Globals for player view
    idGlobalDataComponent::viewGlobals_t viewGlobals; // Offset: 0x150

}; // Size: 0x1A0
