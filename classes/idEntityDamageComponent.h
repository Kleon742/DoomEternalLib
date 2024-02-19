struct idEntityDamageComponent
{
    struct locationDamageInfo_t
    {
        float bodyDamage; // Offset: 0x0

        float armorDamage; // Offset: 0x4

        float limbDamage; // Offset: 0x8

        float softTargetDamage; // Offset: 0xC

        bool hitWeakPoint; // Offset: 0x10

        bool hitMouth; // Offset: 0x11

        bool armorPoppedOff; // Offset: 0x12

        bool headShot; // Offset: 0x13

    }; // Size: 0x14

    struct idBodyArmorData
    {
        // if this entity has a body armor on spawn
        bool hasBodyArmorOnSpawn; // Offset: 0x0

        // hit test group on body armor
        idAtomicString hittestGroupName; // Offset: 0x8

        // hit points on body armor
        float hitPoints; // Offset: 0x10

        // reduce this much HP from current health when armor pops
        float popOffHP; // Offset: 0x14

        // Armor respawn interval counted from armor respawn warning time
        float armorRespawnTime; // Offset: 0x18

        // Armor respawn warning time.
        float armorRespawnWarningTime; // Offset: 0x1C

        // Armored baron mace respawn time
        float maceRespawnTime; // Offset: 0x20

        // All body armor hit test groups
        idList < idAtomicString , TAG_IDLIST , false > bodyArmorHittestGroups; // Offset: 0x28

        // All body hit test groups.
        idList < idAtomicString , TAG_IDLIST , false > bodyHittestGroups; // Offset: 0x40

        // Ignore FX conditions while on Armor
        idList < fxCondition_t , TAG_IDLIST , false > ignoreFXConditions; // Offset: 0x58

        // time after armor pops damages are suppressed
        float suppressDamageTimeInSecOnArmorPops; // Offset: 0x70

        // Ignore further damages when armor just pops out last frame
        idList < idDeclDamage * , TAG_IDLIST , false > ignoreDamagesOnArmorPops; // Offset: 0x78

        // instant kill damages when armor is active, bypass armor damages
        idList < const idDeclDamage * , TAG_IDLIST , false > armorInstantKillDamages; // Offset: 0x90

    }; // Size: 0xA8

    // EntityDamage Decl
    idDeclEntityDamage* entityDamage; // Offset: 0x0

    // entity damage graph decl
    idDeclEntityDamageGraph* graph; // Offset: 0x8

    idList < idDamageGroupData , TAG_IDLIST , false > entityDamageData; // Offset: 0x10

    idManagedClassPtr < idAnimatedEntity > animatedEntity; // Offset: 0x28

    // body armor
    idEntityDamageComponent::idBodyArmorData bodyArmor; // Offset: 0x48

    // hacky stuff
    idList < const hitTestNameMapping_t * , TAG_IDLIST , false > hitTestGroupMappings; // Offset: 0xF0

    idList < const idDamageGroup * , TAG_IDLIST , false > damageGroups; // Offset: 0x108

    bool containsWeakPoint; // Offset: 0x120

}; // Size: 0x128
