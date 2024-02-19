struct idCombatStage
{
    enum combatStage_t : int
    {
        COMBAT_STAGE_RETREAT = 0,
        COMBAT_STAGE_FALLBACK = 1,
        COMBAT_STAGE_DEFAULT = 2,
        COMBAT_STAGE_ADVANCE = 3,
        COMBAT_STAGE_NO_GOODWILL = 4,
        COMBAT_STAGE_MAX = 5
    };

    // name of this combat stage for triggering purposes
    idStr name; // Offset: 0x0

    // type of stage (defend, fallback, advance)
    idCombatStage::combatStage_t stageType; // Offset: 0x30

    // hint group for this combat stage
    idManagedClassPtr < idAIHintGroup > hintGroup; // Offset: 0x38

    // priority of roles dynamically filled by members in this group
    idList < encounterGroupRole_t , TAG_IDLIST , false > rolePriorityList; // Offset: 0x58

    // expression to evaluate for triggering other entities for this stage ONLY
    idList < idEncounterGroupExpr , TAG_IDLIST , false > stageTriggers; // Offset: 0x70

    // group expressions to automatically advance to next combat stage when assault node breached
    idList < idEncounterGroupExpr , TAG_IDLIST , false > assaultBreachRules; // Offset: 0x88

    // fake eenemy to defend against if no living enemies are known.
    idManagedClassPtr < idTarget_FakeEnemy > fakeEnemy; // Offset: 0xA0

    // allow relaxed VO
    bool useRelaxedChatterVO; // Offset: 0x0

    // allow search VO
    bool useSearchChatterVO; // Offset: 0x0

    // allow tuant VO
    bool useTauntChatterVO; // Offset: 0x0

    // true if staging VO should be spoken
    bool useRoleChangeVO; // Offset: 0x0

    // members do not leave combat state even when there is no enemy
    bool stayInCombat; // Offset: 0x0

    // members can use formation cover (behind regime shield units)
    bool useFormationCover; // Offset: 0x0

    // defense node indices
    idList < int , TAG_IDLIST , false > defenseNodes; // Offset: 0xC8

    // assault node indices
    idList < int , TAG_IDLIST , false > assaultNodes; // Offset: 0xE0

    // flank node indices
    idList < int , TAG_IDLIST , false > flankNodes; // Offset: 0xF8

    // flank path activators
    idList < int , TAG_IDLIST , false > flankTargetNodes; // Offset: 0x110

    // points along a flank path
    idList < int , TAG_IDLIST , false > flankPathNodes; // Offset: 0x128

    // grenade node indices
    idList < int , TAG_IDLIST , false > grenadeNodes; // Offset: 0x140

    // recharge node indices
    idList < int , TAG_IDLIST , false > rechargeNodes; // Offset: 0x158

    // places to suppress fire
    idList < int , TAG_IDLIST , false > suppressionFireNodes; // Offset: 0x170

}; // Size: 0x188
