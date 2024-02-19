struct idDeclAIComponent_Parasite : idDeclAIComponent
{
    struct weaknessInfo_t
    {
        // damage types this parasite is weak against
        idDeclAIDamageDeclCollection* damageDecls; // Offset: 0x0

        // if one shot is false, the incoming damage from this type will be scaled by this amount
        float scale; // Offset: 0x8

    }; // Size: 0x10

    // damage types this parasite is weak against
    idList < idDeclAIComponent_Parasite::weaknessInfo_t , TAG_IDLIST , false > weaknessInfo; // Offset: 0x98

    // if true, this parasite is invulnerable unless he is hit by a damage type listed in the weaknesses list
    bool vulnerableOnlyToWeaknesses; // Offset: 0xB0

    // priority list of host types groups. AIs in the first group will be chosen first, then the second, and so on
    idList < aiMonsterType_t , TAG_IDLIST , false > hostAITypes; // Offset: 0xB8

    // if true, this parasite buffs it's host
    bool buffHost; // Offset: 0xD0

    // if true, this parasite instantly snaps to a valid host on spawn
    bool snapToHostOnSpawn; // Offset: 0xD1

    // sound played when parasite becomes vulnerable
    idSoundEvent* vulnerableSound; // Offset: 0xD8

    // ribbon for beam
    idDeclRibbon2* beamRibbon; // Offset: 0xE0

    // number of beam segments to apply along the spline (more == smoother)"
    int beamNumSegments; // Offset: 0xE8

    // will arc at this angle relative to the spirits forward vector
    float beamArcAngle; // Offset: 0xEC

    // If true, will completely despawn. If false, will hide until another valid host spawns.
    bool despawnIfNoValidHost; // Offset: 0xF0

    // if true enables idDeclPlayerProps::playerDamageMitigation_t::spiritMicrowaveMitigationScale, and ignores that if false
    bool enableMicrowaveDamageMitigation; // Offset: 0xF1

}; // Size: 0xF8
