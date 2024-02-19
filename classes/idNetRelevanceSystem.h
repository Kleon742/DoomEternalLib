struct idNetRelevanceSystem : idClass
{
    idList < idNetRelevanceRule * , TAG_IDLIST , false > netRelevanceRules; // Offset: 0x10

    idList < idNetRelevance::peerNonRelevantObjects_t , TAG_IDLIST , false > peerNonNetRelevantObjects; // Offset: 0x28

    idList < idNetRelevance::attachmentRelevantObject_t , TAG_IDLIST , false > attachmentRelevantList; // Offset: 0x40

    unsigned long long frameLastChecked; // Offset: 0x58

    unsigned int netRelChangedBitFlagsChangedCachedPosition; // Offset: 0x60

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nonNetRelevantEvaluationRateMinGT; // Offset: 0x68

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeOfLastNonNetRelEvalutionGT; // Offset: 0x70

    bool isInitialized; // Offset: 0x78

}; // Size: 0x80
