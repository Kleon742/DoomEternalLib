struct idDeclImpactEffect : idDeclTypeInfo
{
    struct projectileImpactEffect_t
    {
        // material decl to use for decals
        idList < const idMaterial2 * , TAG_IDLIST , false > decalMaterial; // Offset: 0x0

        // how large the impact decal is {{ units = m }}
        float decalSize; // Offset: 0x18

        // how long in MS the decal stays around
        idTypesafeTime < int , millisecondUnique_t , 1000 > decalLifetime; // Offset: 0x1C

        // how long in MS the decal should fade in
        idTypesafeTime < int , millisecondUnique_t , 1000 > decalFadeInTime; // Offset: 0x20

        // how long in MS the decal should fade out
        idTypesafeTime < int , millisecondUnique_t , 1000 > decalFadeOutTime; // Offset: 0x24

        // how long the emissive tint is applied to the decal for
        idTypesafeTime < int , millisecondUnique_t , 1000 > decalEmissiveLifetime; // Offset: 0x28

        // used by the projectDecal function. {{ units = m }}
        float decalDepth; // Offset: 0x2C

        // if 0.0 random angle, otherwise the angle the decal is spawned
        float decalAngle; // Offset: 0x30

        // decal diffuse tint xyz diffuse w threshold blending
        idColor decalDiffuseTint; // Offset: 0x34

        // decal emmissive tint xyz emmissive colour w emmissive power
        idColor decalEmmissiveTint; // Offset: 0x44

        // decal specularity tint color xyz
        idColor decalSpecularTint; // Offset: 0x54

        // decal opacity for each channel x albedo y spec z smooth w normal
        idVec4 decalOpacityPerChannel; // Offset: 0x64

        // particle systems played
        idList < const idDeclParticle * , TAG_IDLIST , false > particleImpact; // Offset: 0x78

        // particle system color tint
        idColor particleColorTint; // Offset: 0x90

        // sound to play
        idSoundEvent* sndImpact; // Offset: 0xA0

        // sound to play when dashing during impact
        idSoundEvent* sndDashImpact; // Offset: 0xA8

        // sound to play for my own impacts (NULL uses sndImpact)
        idSoundEvent* sndImpact_local; // Offset: 0xB0

        // minimum interval between sounds (ms)
        idTypesafeTime < int , millisecondUnique_t , 1000 > soundInterval; // Offset: 0xB8

        // decal should persist until forceably removed
        bool decalIsPersistent; // Offset: 0xBC

        // decal should skip reading color from the albedo texture and instead take it from the tint
        bool decalSkipsAlbedoReads; // Offset: 0xBD

        // use the smoke system to play the impact particle
        bool useSmokeSystem; // Offset: 0xBE

        // is a bloody effect
        bool isBloody; // Offset: 0xBF

        // if true, will always use the first decal material if local view player is friendly and the second if enemy
        bool teamBased; // Offset: 0xC0

        // rumble to play for most occurrences
        idDeclRumble* rumbleDecl; // Offset: 0xC8

        // rumble to play for local players. will use rumbleDecl_friendly if not set
        idDeclRumble* rumbleDecl_local; // Offset: 0xD0

        // screen shake decl to play
        idDeclAdvancedViewShake* viewShakeDecl; // Offset: 0xD8

        // destructible to activate.
        idDeclDestructible* destructible; // Offset: 0xE0

        // start fading at this distance {{ units = m }}
        float viewShakeStartDistance; // Offset: 0xE8

        // only players views within this distance will be effected (distance of -1 means always in range). Additionally, any effects which require distance fading will be fully faded at this distance {{ units = m }}
        float viewShakeDistance; // Offset: 0xEC

        // FX Decl to bind at the location that you impacted.
        idDeclFX* boundFX; // Offset: 0xF0

        // How long bound FX stays around for.
        idTypesafeTime < int , millisecondUnique_t , 1000 > removeBoundFXAfter; // Offset: 0xF8

        // If Z component is non-zero, the bound FX scale based on height of AI using given Z value as the reference. Clamps to X and Y given values.
        idVec3 boundFXScaleSizeAndClamp; // Offset: 0xFC

        // creates idTrigger_DynamicHurt dynamic hurt trigger with effects
        dynamicHurtEffect_t hurtEffect; // Offset: 0x108

    }; // Size: 0x130

    struct metalImpactEffects_t
    {
        // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
        idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

        // effect played against a grate material
        idDeclImpactEffect::projectileImpactEffect_t grate; // Offset: 0x130

        // effect played against a pipe material
        idDeclImpactEffect::projectileImpactEffect_t pipe; // Offset: 0x260

        // effect played against a hollow material
        idDeclImpactEffect::projectileImpactEffect_t hollow; // Offset: 0x390

    }; // Size: 0x4C0

    struct rockImpactEffects_t
    {
        // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
        idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

        // effect played against a concrete material
        idDeclImpactEffect::projectileImpactEffect_t concrete; // Offset: 0x130

        // effect played against an asphalt material
        idDeclImpactEffect::projectileImpactEffect_t asphalt; // Offset: 0x260

        // effect played against a marble material
        idDeclImpactEffect::projectileImpactEffect_t marble; // Offset: 0x390

    }; // Size: 0x4C0

    struct waterImpactEffects_t
    {
        // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
        idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

        // effect played against a sludge material
        idDeclImpactEffect::projectileImpactEffect_t sludge; // Offset: 0x130

        // effect played against a blood material
        idDeclImpactEffect::projectileImpactEffect_t blood; // Offset: 0x260

        // effect played against a lava material
        idDeclImpactEffect::projectileImpactEffect_t lava; // Offset: 0x390

    }; // Size: 0x4C0

    struct aiImpactEffects_t
    {
        struct skinEffects_t
        {
            // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
            idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

            // effect played against a flesh skin material
            idDeclImpactEffect::projectileImpactEffect_t flesh; // Offset: 0x130

            // effect played against a metal skin material
            idDeclImpactEffect::projectileImpactEffect_t metal; // Offset: 0x260

            // effect played against a thickhide skin material
            idDeclImpactEffect::projectileImpactEffect_t thickHide; // Offset: 0x390

            // effect played against a stone imp's stone skin material
            idDeclImpactEffect::projectileImpactEffect_t impStone; // Offset: 0x4C0

        }; // Size: 0x5F0

        struct armorEffects_t
        {
            // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
            idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

            // effect played against a metal armor material
            idDeclImpactEffect::projectileImpactEffect_t metal; // Offset: 0x130

            // effect played against a reinforced hide armor material
            idDeclImpactEffect::projectileImpactEffect_t reinforcedHide; // Offset: 0x260

        }; // Size: 0x390

        struct damagedEffects_t
        {
            // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
            idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

            // effect played against a damaged flesh material
            idDeclImpactEffect::projectileImpactEffect_t flesh; // Offset: 0x130

            // effect played against a damaged metal material
            idDeclImpactEffect::projectileImpactEffect_t metal; // Offset: 0x260

        }; // Size: 0x390

        struct nullEffects_t
        {
            // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
            idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

            // effect played against an ethereal shield material
            idDeclImpactEffect::projectileImpactEffect_t etherealShield; // Offset: 0x130

            // effect played against a sci-fi shield material
            idDeclImpactEffect::projectileImpactEffect_t sciFiShield; // Offset: 0x260

            // effect played against a gladiator material
            idDeclImpactEffect::projectileImpactEffect_t gladiatorShield; // Offset: 0x390

            // effect played against a maykr shield material
            idDeclImpactEffect::projectileImpactEffect_t maykrShield; // Offset: 0x4C0

            // effect played against a maykr invulnerable material
            idDeclImpactEffect::projectileImpactEffect_t maykrInvulnerable; // Offset: 0x5F0

            // effect played against a doom hunter material
            idDeclImpactEffect::projectileImpactEffect_t doomHunterShield; // Offset: 0x720

            // effect played against a chaingunner shield material
            idDeclImpactEffect::projectileImpactEffect_t chaingunnerShield; // Offset: 0x850

            // effect played against a icon shield material
            idDeclImpactEffect::projectileImpactEffect_t iconShield; // Offset: 0x980

            // effect played against a icon armor material
            idDeclImpactEffect::projectileImpactEffect_t iconArmor; // Offset: 0xAB0

            // effect played against a icon flesh material
            idDeclImpactEffect::projectileImpactEffect_t iconFlesh; // Offset: 0xBE0

            // effect played against a carcass shield, falls back to sci-fi shield if empty
            idDeclImpactEffect::projectileImpactEffect_t carcassShield; // Offset: 0xD10

            // effect played against a carcass shield, falls back to sci-fi shield if empty
            idDeclImpactEffect::projectileImpactEffect_t soldierShield; // Offset: 0xE40

            // effect played against a carcass shield, falls back to sci-fi shield if empty
            idDeclImpactEffect::projectileImpactEffect_t marauderShield; // Offset: 0xF70

            // effect played against a baron's armor
            idDeclImpactEffect::projectileImpactEffect_t baronArmor; // Offset: 0x10A0

            // effect played against a cursed prowler's armor when its curse is active
            idDeclImpactEffect::projectileImpactEffect_t prowlerCurseArmor; // Offset: 0x11D0

        }; // Size: 0x1300

        // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
        idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x0

        // effect played against a frozen AI
        idDeclImpactEffect::projectileImpactEffect_t frozen; // Offset: 0x130

        // skin
        idDeclImpactEffect::aiImpactEffects_t::skinEffects_t skin; // Offset: 0x260

        // armor
        idDeclImpactEffect::aiImpactEffects_t::armorEffects_t armor; // Offset: 0x850

        // damaged
        idDeclImpactEffect::aiImpactEffects_t::damagedEffects_t damaged; // Offset: 0xBE0

        // null
        idDeclImpactEffect::aiImpactEffects_t::nullEffects_t null; // Offset: 0xF70

    }; // Size: 0x2270

    // default effect. Used if chosen effect does not have one of soundImpact, particle, impact material, or soundimpact_local
    idDeclImpactEffect::projectileImpactEffect_t defaultEffect; // Offset: 0x88

    // metal
    idDeclImpactEffect::metalImpactEffects_t metal; // Offset: 0x1B8

    // rock
    idDeclImpactEffect::rockImpactEffects_t rock; // Offset: 0x678

    // water
    idDeclImpactEffect::waterImpactEffects_t water; // Offset: 0xB38

    // effect played against a dirt material
    idDeclImpactEffect::projectileImpactEffect_t dirt; // Offset: 0xFF8

    // effect played against a flesh material
    idDeclImpactEffect::projectileImpactEffect_t flesh; // Offset: 0x1128

    // effect played against a bone material
    idDeclImpactEffect::projectileImpactEffect_t bone; // Offset: 0x1258

    // effect played against a wood material
    idDeclImpactEffect::projectileImpactEffect_t wood; // Offset: 0x1388

    // effect played against a glass material
    idDeclImpactEffect::projectileImpactEffect_t glass; // Offset: 0x14B8

    // effect played against a plastice material
    idDeclImpactEffect::projectileImpactEffect_t plastic; // Offset: 0x15E8

    // effect played against a forceField material
    idDeclImpactEffect::projectileImpactEffect_t forceField; // Offset: 0x1718

    // Anything that is on fire.
    idDeclImpactEffect::projectileImpactEffect_t flaming; // Offset: 0x1848

    // effect played again a hollow material
    idDeclImpactEffect::projectileImpactEffect_t hollow_rock; // Offset: 0x1978

    // effect played against red sand
    idDeclImpactEffect::projectileImpactEffect_t red_sand; // Offset: 0x1AA8

    // effect played against snow
    idDeclImpactEffect::projectileImpactEffect_t snow; // Offset: 0x1BD8

    // material for makyr
    idDeclImpactEffect::projectileImpactEffect_t makyr; // Offset: 0x1D08

    // effect for unifying impact effects when players damage each other in MP.
    idDeclImpactEffect::projectileImpactEffect_t player; // Offset: 0x1E38

    // ai
    idDeclImpactEffect::aiImpactEffects_t ai; // Offset: 0x1F68

    idList < unsigned int , TAG_FX , false > materialLocks; // Offset: 0x41D8

}; // Size: 0x41F0
