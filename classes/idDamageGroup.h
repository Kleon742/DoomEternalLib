struct idDamageGroup
{
    // name of damage group -- should correspond to a joint group in the declMD6
    idAtomicString groupName; // Offset: 0x0

    // how much armor this location starts with
    float locationArmor; // Offset: 0x8

    // starting health of damage group, as a fraction of total owning entity health
    float maxHealthFraction; // Offset: 0xC

    // list of specific damage scalar values which correspond to a particular decl damage. Specify NULL damage decl for default.
    idList < damageGroupScalarInfo_t , TAG_IDLIST , false > damageGroupScalarInfo; // Offset: 0x10

    // entity to spawn when armor reaches zero
    idDeclEntityDef* spawnEntity; // Offset: 0x28

    // particle added armor reaches zero.
    idDeclParticle* spawnParticle; // Offset: 0x30

    // particle for when armor is hit
    idDeclParticle* armorHitParticle; // Offset: 0x38

    // sound to play when armor reaches zero
    idSoundEvent* spawnSound; // Offset: 0x40

    // list of meshes to hide when armor level reaches zero
    idList < idAtomicString , TAG_IDLIST , false > hideMeshes; // Offset: 0x48

    // if true random chance to hide mesh is enabled
    bool enableRandomChanceHideMesh; // Offset: 0x60

    // chance in hiding list of meshes ( 0 to 1 ) enabled if enableRandomChanceHideMesh is true
    float hideMeshChance; // Offset: 0x64

    // the tag the hurt effects will play from.
    idAtomicString tagName; // Offset: 0x68

    // the fx condition that will play the right particles
    fxCondition_t fxCondition; // Offset: 0x70

    // FX condition to call for non-radial locational damage
    fxCondition_t directDamageFXCondition; // Offset: 0x74

    // Disable armor forcefully when armor pops
    bool armorPopOffForceDisableArmor; // Offset: 0x78

    // start fx condition when armor pop off
    fxCondition_t armorPopOffStartFXCondition; // Offset: 0x7C

    // stop fx condition when armor pop off
    fxCondition_t armorPopOffStopFXCondition; // Offset: 0x80

    // list of hittest groups which are enabled on armor pops off
    idList < idAtomicString , TAG_IDLIST , false > armorPopOffEnableHitTestGroups; // Offset: 0x88

    // list of hittest groups which are disabled on armor pops off
    idList < idAtomicString , TAG_IDLIST , false > armorPopOffDisableHitTestGroups; // Offset: 0xA0

    // Set all these blackboard values on armor pops
    idList < idAtomicString , TAG_IDLIST , false > armorPopOffSetBlackBoardValues; // Offset: 0xB8

    // FX conditions to be triggered when reaching the HP on armor. ( Must be in descending order )
    idList < armorHPFXConditions_t , TAG_IDLIST , false > armorHPFXConditions; // Offset: 0xD0

    // override body damage with armor damage on idDamageFeedbackInfo
    bool armorOverrideBodyDamage; // Offset: 0xE8

    // Ignore explosive armor damage multiplier
    bool ignoreExplosiveArmorDamageMultiplier; // Offset: 0xE9

    // true if damage to this part affects overall health
    bool affectsOverallHealth; // Offset: 0xEA

    // list of gore levels for this damage group
    idList < damageGroupGoreLevelInfo_t , TAG_IDLIST , false > goreLevelInfo; // Offset: 0xF0

    // 'soft targets' are special vulnerable areas that cause special things to happen when hit
    bool weakPoint; // Offset: 0x108

    // if damaged by one of these damages, process damage as if weakPoint==false (NOTE: overrides weakPoint flag in damageGroupScalarInfo list!)
    idList < const idDeclDamage * , TAG_IDLIST , false > ignoreWeakPointDamages; // Offset: 0x110

    // mouth is a special vulnerable area that when hit with a projectile can cause the AI to gulp it down
    bool mouth; // Offset: 0x128

    // Weak spot that is toggled off and on through animation controls or another event.
    bool scriptedWeakSpot; // Offset: 0x129

    // Contents when a joint group is hidden or invulnerable.
    contentsFlags_t contentsWhenHidden; // Offset: 0x12C

    // Contents when a joint group is restored from hidden or invulnerable.
    contentsFlags_t contentsWhenRestored; // Offset: 0x130

    // if true then a projectile that uses 'damageAndPassThrough' with impaling/stuckOnActor abilities can impale this damage group and carry it away
    bool damageAndPassThroughStickAndCarry; // Offset: 0x134

    // if true then a projectile that uses 'damageAndPassThrough' with impaling/stuckOnActor abilities can impale this damage group and stop its flight
    bool damageAndPassThroughStickAndStop; // Offset: 0x135

    // list of damage groups which are child to this damage group
    idList < idAtomicString , TAG_IDLIST , false > children; // Offset: 0x138

    // parent damage group
    idAtomicString parent; // Offset: 0x150

    // allow bullet penetration into the same entity
    bool allowSecondPenetration; // Offset: 0x158

}; // Size: 0x160
