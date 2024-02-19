struct idLogicNodeDamageListener : idDamageCompiler_Listener
{
    enum logicIds_t : int
    {
        INPUT_EVENT_ACTIVATE = 0,
        INPUT_ENTITY = 1,
        OUTPUT_DAMAGE_DONE = 2,
        OUTPUT_HEALTH_LEFT = 3,
        OUTPUT_DAMAGE_TOTAL = 4,
        OUTPUT_FLOW_ON_DAMAGE = 5,
        INPUT_DISABLE_AFTER_ONE_HIT = 6,
        INPUT_TIMED_DAMAGE_REQUIREMENT_AMOUNT = 7,
        INPUT_TIMED_DAMAGE_REQUIREMENT_DURATION = 8,
        INPUT_EVENT_DEACTIVATE = 9,
        OUTPUT_FOUND_DAMAGE_DECL_0 = 10,
        OUTPUT_FOUND_DAMAGE_DECL_1 = 11,
        OUTPUT_FOUND_DAMAGE_DECL_2 = 12,
        OUTPUT_FOUND_DAMAGE_DECL_3 = 13,
        OUTPUT_FOUND_DAMAGE_DECL_4 = 14,
        INPUT_ALLOW_ONE_HIT_PER_FRAME = 15
    };

    struct windowDamageDurationData_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > firstDamageTime; // Offset: 0x0

        idTypesafeTime < int , millisecondUnique_t , 1000 > duration; // Offset: 0x8

        float requiredTotalDamage; // Offset: 0xC

        float totalDamage; // Offset: 0x10

        float lastDamageAmount; // Offset: 0x14

        bool enabled; // Offset: 0x18

    }; // Size: 0x20

    logicNodeReference_t node; // Offset: 0x8

    float damageTotal; // Offset: 0x10

    idLogicEntityPtr selectedEntity; // Offset: 0x18

    idDeclDamage* damageDecl; // Offset: 0x40

    idList < const idDeclDamage * , TAG_IDLIST , false > additionalDamageDecls; // Offset: 0x48

    idList < const idDeclDamage * , TAG_IDLIST , false > findDamageDecls; // Offset: 0x60

    bool frozenRequired; // Offset: 0x78

    bool onFireRequired; // Offset: 0x79

    idLogicNodeDamageListener::windowDamageDurationData_t windowDamageData; // Offset: 0x80

    bool disableAfterFirstHit; // Offset: 0xA0

    bool hasNotifiedAnyDamage; // Offset: 0xA1

    int lastGameFrame; // Offset: 0xA4

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastHitTime; // Offset: 0xA8

    bool onlyOneHitPerFrame; // Offset: 0xB0

    bool isActive; // Offset: 0xB1

}; // Size: 0xB8
