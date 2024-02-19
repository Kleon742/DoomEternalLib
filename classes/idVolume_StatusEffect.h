struct idVolume_StatusEffect : idVolume
{
    struct statusEffectOverride_t
    {
        // override status effect decl
        idDeclStatusEffect* statusEffectDecl; // Offset: 0x0

        // monster type this override applies to
        aiMonsterType_t monsterType; // Offset: 0x8

    }; // Size: 0x10

    // status effect to apply
    idDeclStatusEffect* statusEffectDecl; // Offset: 0xC20

    // override status effects
    idList < idVolume_StatusEffect::statusEffectOverride_t , TAG_IDLIST , false > statusEffectOverrides; // Offset: 0xC28

    // does this apply to players?
    bool appliesToPlayers; // Offset: 0xC40

    // does this apply to demon players?
    bool appliesToDemonPlayers; // Offset: 0xC41

    // does this apply to AI?
    bool appliesToAI; // Offset: 0xC42

    // continue to apply after leaving volume?
    bool persist; // Offset: 0xC43

    // time spent in volume multiplied by this factor gives time applied after leaving
    float persistFactor; // Offset: 0xC44

    // ignore persist period if it would be less than this duration (in ms)
    idTypesafeTime < int , millisecondUnique_t , 1000 > minPersistMS; // Offset: 0xC48

    // Will send client game msgs for touch / untouch events
    bool isMancubusSmokeVolume; // Offset: 0xC4C

    // pvp highlight for slayer if this is a mancubus smoke volume
    idDeclHighlight* mancSmokeHighlightDecl; // Offset: 0xC50

    // looping sound
    idSoundEvent* loopSound; // Offset: 0xC58

    // used to protect against touch events after remove
    bool pendingRemove; // Offset: 0xC60

    // The entity that caused this volume to spawn (can be NULL)
    idManagedClassPtr < idEntity > sourceEntity; // Offset: 0xC68

}; // Size: 0xC88
