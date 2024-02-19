struct idDeclAIComponent_Prototypes : idDeclAIComponent
{
    enum curseArmorDisableFlags_t : unsigned char
    {
        DISABLE_NONE = 0,
        DISABLE_WEAPON_TARGETING = 1,
        DISABLE_GIB_AND_PASSTHROUGH = 2,
        DISABLE_ICY_FREEZE = 4,
        DISABLE_SYNC_KILLS = 8,
        DISABLE_BFG_ARC_STUN = 16
    };

    struct healthBasedEmissiveRenderParm_t
    {
        // emissive color at full health
        idColor maxHealthEmissiveColor; // Offset: 0x0

        // emissive color at zero health
        idColor zeroHealthEmissiveColor; // Offset: 0x10

        // emissive scale at full health
        float maxHealthEmissiveScale; // Offset: 0x20

        // emissive scale at zero health
        float zeroHealthEmissiveScale; // Offset: 0x24

        // what health ratio is counted as Zero health
        float zeroHealthRatio; // Offset: 0x28

        // it changes emissive color and scale based on health if set to true
        bool enabled; // Offset: 0x2C

    }; // Size: 0x30

    struct aimJointToTargetParm_t
    {
        // joint name to rotate towards the target
        idJointName jointName; // Offset: 0x0

        // specifies what part of target to aim at
        aimPoint_t targetAimPoint; // Offset: 0x30

        // if true predicts target location based on senses, otherwise uses exact location
        bool predictTarget; // Offset: 0x34

        // it aims specified joint to target if set to true
        bool enabled; // Offset: 0x35

    }; // Size: 0x38

    struct prowlerCurseArmorInfo_t
    {
        // decl for buffs to apply when armor is active
        idTypeInfoObjectPtr < idEntityModifier > armorBuffModifiers; // Offset: 0x0

        // options to disable certain AI features when curse is active
        idDeclAIComponent_Prototypes::curseArmorDisableFlags_t armorDisableFlags; // Offset: 0x10

        // (CURRENTLY UNUSED) transcode to send to behavior FSM when curse is applied
        aiTransCode_t curseAppliedTranscode; // Offset: 0x14

        // temp memory key to add on applying curse, to signal that AI wants a retreat move
        idAtomicString retreatMemoryKey; // Offset: 0x18

    }; // Size: 0x20

    // plasma mine will never slow below this {{ units = m / s }}
    float plasmaMineMinSpeed; // Offset: 0x98

    // plasma mine will decelerate once it is this close to target {{ units = m }}
    float plasmaMineDecelDistance; // Offset: 0x9C

    // one-shot sound to play repeatedly as mine gets closer to target
    idSoundEvent* plasmaPingSound; // Offset: 0xA0

    // range of intervals ( min, max )
    idRange < float > plasmaPingInterval_seconds; // Offset: 0xA8

    // projectile ent decl must be listed here for shot to be considered a plasma mine
    idList < const idDeclEntityDef * , TAG_IDLIST , false > plasmaMineDecls; // Offset: 0xB0

    // defines the orbiters for this AI
    idList < aiOrbiterDefinition_t , TAG_IDLIST , false > orbiterDefinitions; // Offset: 0xC8

    // entities to spawn for binding to orbiters
    idList < const idDeclEntityDef * , TAG_IDLIST , false > orbiterEntityDefs; // Offset: 0xE0

    // entities to refer to for packaged build system, used for Pain Elemental spawned Lost Soul projectiles
    idDeclEntityDef* fakeEntityDef; // Offset: 0xF8

    // anim web node
    idAnimWebPath_Atomic animWebNode; // Offset: 0x100

    // entity def
    idDeclEntityDef* entityDef; // Offset: 0x140

    // it changes emissive color and scale based on health if enabled
    idDeclAIComponent_Prototypes::healthBasedEmissiveRenderParm_t healthBasedEmissiveRenderParm; // Offset: 0x148

    // it aims specified joint to target if enabled
    idDeclAIComponent_Prototypes::aimJointToTargetParm_t aimJointToTargetParm; // Offset: 0x178

    // any info related to armored behavior when prowler curse is active
    idDeclAIComponent_Prototypes::prowlerCurseArmorInfo_t curseArmorInfo; // Offset: 0x1B0

}; // Size: 0x1D0
