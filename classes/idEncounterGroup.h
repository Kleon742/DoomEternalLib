struct idEncounterGroup
{
    struct searchPoint_t
    {
        int hintNodeIndex; // Offset: 0x0

        // {{ units = m }}
        float searchDist; // Offset: 0x4

        bool visited; // Offset: 0x8

    }; // Size: 0xC

    struct idGoodWillSettings
    {
        // turns off good will when player gets between group members
        bool surroundTrigger; // Offset: 0x0

        // turning off good will enables perfect aim for this group
        bool perfectAim; // Offset: 0x0

        // turning off good will enables infinite ammo for this group
        bool infiniteAmmo; // Offset: 0x0

        // turning off good will enables all group members to fire from cover at once
        bool allFireFromCover; // Offset: 0x0

        // turning off good will allows AI to hold trigger for maximum time
        bool maxHoldTrigger; // Offset: 0x0

        // turning off good will multiplies damage dealt by this group by this amount
        float damageScale; // Offset: 0x4

    }; // Size: 0x8

    struct target_t
    {
        // the entity that is a targeT
        idManagedClassPtr < idEntity > target; // Offset: 0x0

        // last frame when a group member had this entity as a target
        int frame; // Offset: 0x20

    }; // Size: 0x28

    typedef idList < idManagedClassPtr < idEntity > > memberList_t;

    typedef idList < idEncounterGroupRelation > groupRelationList_t;

    typedef idList < idEncounterGroup::searchPoint_t > searchPointList_t;

    typedef idList < idManagedClassPtr < idAISearchHintGroup > > searchHintGroupList_t;

    typedef idList < idManagedClassPtr < idAIHintGroup > > hintGroupList_t;

    // the name of this group
    idStr groupName; // Offset: 0x0

    // groups are defined when a group manager entity adds them, we track this to prevent bugs
    bool alreadyDefined; // Offset: 0x30

    // child encounter groups of this encounter group
    idList < idEncounterGroup * , TAG_IDLIST , false > childGroups; // Offset: 0x38

    // names of child encounter groups
    idList < idStr , TAG_IDLIST , false > childGroupNames; // Offset: 0x50

    // state of AI in this group when they spawn
    idEncounterState spawnState; // Offset: 0x68

    // state AI will transition to when alerted to an enemy by their own group
    idEncounterState ownGroupAlertState; // Offset: 0x90

    // state AI will transition to when alerted to an enemy by another group
    idEncounterState otherGroupAlertState; // Offset: 0xB8

    // if false, the group is disabled and will not react to any stimulus
    bool enabled; // Offset: 0xE0

    // the leader of the group
    idManagedClassPtr < idEntity > leader; // Offset: 0xE8

    // max number of AI shooting at once
    int maxSimultaneousFirers; // Offset: 0x108

    // no raging when only this many members left in group
    int noRageMemberCount; // Offset: 0x10C

    // number of units to leave behind when rushing
    int nonGroupRushUnits; // Offset: 0x110

    // seconds of not seeing enemy before group rushing last known position
    idTypesafeTime < float , secondUnique_t , 1 > groupRushTime; // Offset: 0x114

    // seconds of not seeing enemy before throwing a grenade at last known position
    idTypesafeTime < float , secondUnique_t , 1 > minGrenadeRethrowTime; // Offset: 0x118

    // expression to evaluate for triggering other entities
    idList < idEncounterGroupExpr , TAG_IDLIST , false > triggers; // Offset: 0x120

    // __edit groupRelationList_tgroupRelationships; relationships between this group and other groups maximum number of AIs that have been in this group
    int maxMembers; // Offset: 0x138

    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > members; // Offset: 0x140

    // number of current living members
    int numLivingMembers; // Offset: 0x158

    // number of dead group members (can't rely on member list since they get removed)
    int numDeadMembers; // Offset: 0x15C

    // decaying count of members killed in heavy fashion
    float recentHeavilyKilledMembers; // Offset: 0x160

    // decaying count of members killed recently
    float recentlyKilledMembers; // Offset: 0x164

    // number of members killed by heavy weapons
    float recentlyKilledHeavies; // Offset: 0x168

    // highest alert cycle out of RELAXED, SEARCH, COMBAT that any group member has had
    alertCycle_t highestMemberAlertCycle; // Offset: 0x16C

    // if any group member has discovered a dead body
    bool anyMemberHasSeenDeadBody; // Offset: 0x170

    // if the group should wait to ambush the enemy
    bool shouldAmbush; // Offset: 0x171

    // group should rush player (due to stalling)
    bool shouldGroupRush; // Offset: 0x172

    // good will towards player, will limit firing in various ways
    bool groupGoodWill; // Offset: 0x173

    // group good will settings
    idEncounterGroup::idGoodWillSettings goodWillSettings; // Offset: 0x174

    // next time to update group member roles
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextGroupMemberRoleUpdateTime; // Offset: 0x180

    // earliest time group can throw another grenade
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextGrenadeTime; // Offset: 0x188

    // handle of this group
    idHandle < short , invalidEncounterGroup_t , INVALID_ENCOUNTER_GROUP > handle; // Offset: 0x190

    // once a group is active, enabled flag has no effect
    bool active; // Offset: 0x192

    // list of search hint nodes for group while searching
    idList < idEncounterGroup::searchPoint_t , TAG_IDLIST , false > searchPointList; // Offset: 0x198

    // current combat stage index
    int curCombatStage; // Offset: 0x1B0

    // pending combat stage index
    int pendingCombatStage; // Offset: 0x1B4

    // time to switch to pending combat stage
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pendingCombatStageTime; // Offset: 0x1B8

    // last time combat stage changed
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > stageChangeTime; // Offset: 0x1C0

    // combat stages for this group
    idList < idCombatStage , TAG_IDLIST , false > combatStages; // Offset: 0x1C8

    // initial combat stage to enter once group is alerted
    int initialCombatStage; // Offset: 0x1E0

    // search hint groups for this group to search
    idList < idManagedClassPtr < idAISearchHintGroup > , TAG_IDLIST , false > searchHintGroups; // Offset: 0x1E8

    // time (in seconds) between normal role updates for this group
    idTypesafeTime < float , secondUnique_t , 1 > updateRoleInterval; // Offset: 0x200

    // when a member of the group is killed, wait this long ( in seconds ) before updating roles
    idTypesafeTime < float , secondUnique_t , 1 > deathRoleUpdateDelay; // Offset: 0x204

    // when a charging member of the group is killed, wait this long ( in seconds ) before updating roles
    idTypesafeTime < float , secondUnique_t , 1 > chargerDeathRoleUpdateDelay; // Offset: 0x208

    // list of all targets for this group
    idStaticList < idEncounterGroup::target_t , 32 , false , TAG_IDLIST > targetList; // Offset: 0x210

}; // Size: 0x728
