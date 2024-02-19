struct idDeclAIComponent_Shield : idDeclAIComponent
{
    struct floatColorTuple_t
    {
        // color
        idColor color; // Offset: 0x0

        // value
        float value; // Offset: 0x10

    }; // Size: 0x14

    struct animAndString_t
    {
        // animweb path to deflect anim
        idAnimWebPath_Atomic webNode; // Offset: 0x0

        // this key should match the tag name on the md6def
        idAtomicString key; // Offset: 0x40

    }; // Size: 0x48

    struct deflectAnimSet_t
    {
        // name of set
        idAtomicString name; // Offset: 0x0

        // anim web states that AI can use to deflect shots
        idList < idDeclAIComponent_Shield::animAndString_t , TAG_IDLIST , false > deflectAnims; // Offset: 0x8

    }; // Size: 0x20

    struct shieldDefinition_t
    {
        // name of this definition
        idAtomicString name; // Offset: 0x0

        // entitydef that represents arm shield
        idDeclEntityDef* shieldDecl; // Offset: 0x8

        // sound to play when shield energizes
        idSoundEvent* shieldOnSound; // Offset: 0x10

        // sound to play when shield is damaged
        idSoundEvent* shieldDamageSound; // Offset: 0x18

        // sound to play when shield fails
        idSoundEvent* shieldFailSound; // Offset: 0x20

        // sound to play when shield explodes
        idSoundEvent* shieldExplodeSound; // Offset: 0x28

        // explosion damage dealt when shield explodes
        idDeclDamage* shieldExplodeDamage; // Offset: 0x30

        // unless being actively charged, shield only lasts this long
        idTypesafeTime < float , secondUnique_t , 1 > shieldDurationInSeconds; // Offset: 0x38

        // the fx decl
        idDeclFX* shieldFxDecl; // Offset: 0x40

        // a delay for hiding a shield in milliseconds
        idTypesafeTime < int , millisecondUnique_t , 1000 > shieldHideDelayMS; // Offset: 0x48

        // name of a timer to set when the shield gets broken
        idAtomicString brokenTimerName; // Offset: 0x50

        // a delay for using a shield after it's been broken in seconds
        idTypesafeTime < float , secondUnique_t , 1 > brokenTimeoutInSeconds; // Offset: 0x58

        // lookup table of color/damage pairs
        idList < idDeclAIComponent_Shield::floatColorTuple_t , TAG_IDLIST , false > shieldColorTable; // Offset: 0x60

        // prefetch these materials
        idList < const idMaterial2 * , TAG_IDLIST , false > prefetchMaterials; // Offset: 0x78

        // if > 0, shield is a manually placeable shield ( carcass ) that can go up to this close to me
        float unboundShieldOffset_self; // Offset: 0x90

        // ribbon for shield tracer fx
        idDeclRibbon2* shieldTracer; // Offset: 0x98

        // spline definition
        splineDefinition_t shieldTracerSpline; // Offset: 0xA0

        // a delay for hiding a shield in seconds
        idTypesafeTime < float , secondUnique_t , 1 > tracerDurationInSeconds; // Offset: 0xC0

        // shield will be bound to this tag
        idAtomicString bindTagName; // Offset: 0xC8

        // scale model and collision by this much
        float shieldModelScale; // Offset: 0xD0

        // start these fx conditions when shield is shown
        idList < fxCondition_t , TAG_IDLIST , false > fxConditions_StartOnShow; // Offset: 0xD8

        // stop these fx conditions when shield is hidden
        idList < fxCondition_t , TAG_IDLIST , false > fxConditions_StopOnHide; // Offset: 0xF0

        // fx entity to spawn when shield explodes, at location/orientation of shield
        idDeclEntityDef* explodeFXEntity; // Offset: 0x108

        // false if this shield is invulnerable
        bool takesDamage; // Offset: 0x110

        // if true, this shield will incur health damage done to other non-damageable shields
        bool isDamageMaster; // Offset: 0x111

        // true if this shield should be kept active but non-colliding
        bool neverHide; // Offset: 0x112

        // if true, add shield entity to nav world as a dynamic obstacle
        bool addAsNavObstacle; // Offset: 0x113

        // (optional) use additional anim web subweb prefix when this shield is enabled (e.g., "rifle_combat" vs "rifle_shield_combat")
        idAtomicString additionalSubwebPrefix; // Offset: 0x118

        // scale shield using this joint on AI
        idAtomicString scaleJointName; // Offset: 0x120

        // scale when shield is enabled
        float scale_enabled; // Offset: 0x128

        // scale when shield is disabled
        float scale_disabled; // Offset: 0x12C

        // lerp between on/off scale over this many seconds
        idTypesafeTime < float , secondUnique_t , 1 > scaleLerpDuration; // Offset: 0x130

    }; // Size: 0x138

    struct damageBlockOverrideInfo_t
    {
        // decls for the override
        idDeclAIDamageDeclCollection* damageDecls; // Offset: 0x0

        // block angle
        int blockHalfAngleDegrees; // Offset: 0x8

        // check type
        attackBlockCheckType_t blockType; // Offset: 0xC

        // if true, will calculate whether or not to block based on the attackers position instead of the center of the damage sphere
        bool useAttackerPosition; // Offset: 0x10

    }; // Size: 0x18

    // anim web states that AI can use to deflect shots
    idList < idDeclAIComponent_Shield::animAndString_t , TAG_IDLIST , false > deflectAnims; // Offset: 0x98

    // anim web states that AI can use to deflect shots
    idList < idDeclAIComponent_Shield::deflectAnimSet_t , TAG_IDLIST , false > deflectAnimSets; // Offset: 0xB0

    // optional list of projectiles to ignore when tracking projectiles to deflect
    idList < const idDeclProjectile * , TAG_IDLIST , false > ignoreProjectilesForDeflect; // Offset: 0xC8

    // FSM transcode that will be triggered when the shield is blown
    aiTransCode_t blownFSMTranscode; // Offset: 0xE0

    // pain type to use when shield is blown
    painType_t blownPainType; // Offset: 0xE4

    // list of shields this guy has
    idList < idDeclAIComponent_Shield::shieldDefinition_t , TAG_IDLIST , false > shieldDefinitions; // Offset: 0xE8

    // if > 0, shield is a manually placeable shield ( carcass ) that can go up to this close to me
    float unboundShieldOffset_self; // Offset: 0x100

    // deflected projectiles should go back to full collision after this distance
    float deflectPassthroughDist; // Offset: 0x104

    // damage block override info
    idList < idDeclAIComponent_Shield::damageBlockOverrideInfo_t , TAG_IDLIST , false > damageBlockOverrides; // Offset: 0x108

}; // Size: 0x120
