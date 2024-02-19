struct monsterTypeAndNum_t
{
    // the monster types to look for
    aiMonsterType_t monsterType; // Offset: 0x0

    // the summon types to look for
    aiSummonType_t summonType; // Offset: 0x8

    // desired modifiers
    aiModifier_t modifiers; // Offset: 0xC

    // only this many can be active
    idRange < int > allowedActive; // Offset: 0x10

    // within this distance to target
    idRange < float > allowedDistance_target; // Offset: 0x18

    // within this distance to me
    idRange < float > allowedDistance_me; // Offset: 0x20

}; // Size: 0x28
