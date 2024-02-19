struct idDeclAIComponent_BloodAngel : idDeclAIComponent
{
    struct maykrShieldData_t
    {
        // if true, activate shield on spawn
        bool activeOnSpawn; // Offset: 0x0

        // if true, AI will not play twitch pains while shield is active
        bool suppressTwitchesWhileActive; // Offset: 0x1

        // if true, AI will be an invalid target for player lockon weapons (e.g. lockon rockets, meat hook, etc)
        bool disableLockOnWhileActive; // Offset: 0x2

        // if true, prevent BFG Arc from stunning character
        bool preventBFGArcDamageWhileActive; // Offset: 0x3

        // if true, allow BFG Arc damage to disable shield according to overrideDamageBehavior, but prevent further tendril damage from that projectile
        bool preventBFGArcDamageAfterDisable; // Offset: 0x4

        // default damage behavior to use (i.e. if there is no relevant damage mapping)
        maykrShieldDamageBehavior_t defaultDamageBehavior; // Offset: 0x8

        // list of special-case damage behaviors for maykr shield (overrides default)
        idList < maykrShieldDamageBehaviorMapping_t , TAG_IDLIST , false > overrideDamageBehaviors; // Offset: 0x18

    }; // Size: 0x30

    struct skillshotData_t
    {
        // trigger skill shot when one of these damage groups is hit
        idList < idAtomicString , TAG_IDLIST , false > skillShotDamageGroups; // Offset: 0x0

        // optional pain string to add to AI temp memory when skillshot is triggered
        idAtomicString optionalPainString; // Offset: 0x18

    }; // Size: 0x20

    struct cruciformData_t
    {
        // damage cylinder shape contents
        contentsFlags_t shapeContents; // Offset: 0x0

        // radius of damage cylinder
        float cylinderRadius; // Offset: 0x4

        // height of damage cylinder
        float cylinderHeight; // Offset: 0x8

    }; // Size: 0xC

    // all parameters for tuning behavior of maykr shield
    idDeclAIComponent_BloodAngel::maykrShieldData_t maykrShieldData; // Offset: 0x98

    // (NOTE: DEPRECATED DO NOT USE!! skillshot now handled in damage state graph) all parameters for tuning skillshot behavior (special behavior when AI is damaged while unshielded)
    idDeclAIComponent_BloodAngel::skillshotData_t skillshotData; // Offset: 0xC8

    // additional data to support cruciform attack projectile behaviors
    idDeclAIComponent_BloodAngel::cruciformData_t cruciformData; // Offset: 0xE8

    // name of joint associated with staff weapon
    idAtomicString staffJointName; // Offset: 0xF8

    // name of joint on left hand for staff to attach to
    idAtomicString leftStaffHandJointName; // Offset: 0x100

    // name of joint on right hand for staff to attach to
    idAtomicString rightStaffHandJointName; // Offset: 0x108

    // staff should attach to this hand unless specifically overidden. AI_HAND_COUNT implies no default
    aiHand_t defaultStaffHand; // Offset: 0x110

}; // Size: 0x118
