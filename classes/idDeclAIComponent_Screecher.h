struct idDeclAIComponent_Screecher : idDeclAIComponent
{
    struct damageScale_t
    {
        // damages to match ( logical OR )
        idDeclAIDamageDeclCollection* declCollection; // Offset: 0x0

        // how much to scale this damage
        float scale; // Offset: 0x8

    }; // Size: 0x10

    // scale incoming damage by this much, when decls are matched
    idList < idDeclAIComponent_Screecher::damageScale_t , TAG_IDLIST , false > damageScales; // Offset: 0x98

    // pain types that are disabled
    painTypeBitFlags_t disabledPainTypes; // Offset: 0xB0

    // the wound to activate for the FBG
    idDeclGoreWound* deathFBGWound; // Offset: 0xB8

    // if less than 0, will use the radius defined in the buff decl. Otherwise will override all buffs with this radius.
    float overrideBuffRadius; // Offset: 0xC0

    // the screecher will be invulnerable for this length of time after spawning
    idTypesafeTime < int , millisecondUnique_t , 1000 > postSpawnInvulnerabilityDurationMS; // Offset: 0xC4

    // if the screecher is hit with one of these, then he will not buff anybody when he dies
    idList < idDeclDamage * , TAG_IDLIST , false > noBuffsOnDeathDamageDecls; // Offset: 0xC8

    // if the screecher is hit with one of these, then he will immediately buff other AI when he dies. This is intended for damage that will bypass his buff animation.
    idList < idDeclDamage * , TAG_IDLIST , false > immediateBuffsOnDeathDamageDecls; // Offset: 0xE0

}; // Size: 0xF8
