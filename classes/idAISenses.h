struct idAISenses
{
    enum entityModelFlags_t : int
    {
        EM_NONE = 0,
        EM_NEWLY_AWARE = 1
    };

    struct overrideRelation_t
    {
        idEntityPtr_ThreadSafe < idEntity > ent; // Offset: 0x0

        idAtomicString factionName; // Offset: 0x18

        socialRelation_t relation; // Offset: 0x20

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > expireTime; // Offset: 0x30

    }; // Size: 0x38

    struct relationAndData_t
    {
        socialRelation_t relation; // Offset: 0x0

        idEntityPtr_ThreadSafe < idEntity > ent; // Offset: 0x10

    }; // Size: 0x28

    struct fillRelationListParms_t
    {
        float maxDistance; // Offset: 0x0

        bool useDist2DCheck; // Offset: 0x4

        socialRespect_t minRespect; // Offset: 0x8

        socialRespect_t maxRespect; // Offset: 0xC

        socialEmotion_t minEmotion; // Offset: 0x10

        socialEmotion_t maxEmotion; // Offset: 0x14

    }; // Size: 0x18

    struct consolidationJobParms_t
    {
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > perceptTimeout; // Offset: 0x0

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > currentTime; // Offset: 0x8

    }; // Size: 0x10

    typedef idList < idEntityPtr_ThreadSafe < idEntity > > overrideAwarenessEntsList_t;

    idSysMutex socialInterestsMutex; // Offset: 0x8

    idAI2* owner; // Offset: 0x30

    idDeclAIGlobalSettings* settings; // Offset: 0x38

    int factionTreeNodeIndex; // Offset: 0x40

    idAtomicString factionName; // Offset: 0x48

    idStaticList < idAISenses::relationAndData_t , 36 , false , TAG_IDLIST > relations_sortedByEmotion; // Offset: 0x50

    // idBlockList< socialInterest_t, 4, MAX_ACTIVE_COMBAT >m_socialInterests; idXList< socialInterest_t >m_socialInterests;
    idAIListRef < socialInterest_t > socialInterests; // Offset: 0x608

    idStaticList < idAISenses::overrideRelation_t , 32 , false , TAG_IDLIST > overrideRelations; // Offset: 0x610

    bool forceUpdateSlayerInterest; // Offset: 0xD28

    idAISenses::consolidationJobParms_t consolidationJobParms; // Offset: 0xD30

    idAIScaledList < entityModel_t > entityModels; // Offset: 0xD40

    idSysMutex entityModelMutex; // Offset: 0xD50

    idStaticList < int , 32 , false , TAG_IDLIST > newlyAwareModelIndices; // Offset: 0xD78

    int lastUsedEntityModelIndex; // Offset: 0xE10

    idList < idEntityPtr_ThreadSafe < idEntity > , TAG_IDLIST , false > overrideAwarenessEnts; // Offset: 0xE18

}; // Size: 0xE30
