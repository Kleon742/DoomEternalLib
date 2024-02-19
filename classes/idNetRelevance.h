struct idNetRelevance
{
    enum netRelevanceFlags_t : unsigned int
    {
        NET_RELEVANCE_FLAG_ZERO = 0,
        NET_RELEVANCE_FLAG_REQUIRES_IS_RELEVANT_FUNCTION = 1,
        NET_RELEVANCE_FLAG_REQUIRES_BECOMES_RELEVANT_FUNCTION = 2,
        NET_RELEVANCE_FLAG_ALWAYS_RELEVANT = 4,
        NET_RELEVANCE_FLAG_NEVER_RELEVANT = 8,
        NET_RELEVANCE_FLAG_CUSTOM_DISTANCE_COEFFICIENT = 16,
        NET_RELEVANCE_FLAG_BITS_HAVE_CHANGED = 32
    };

    struct nonRelevantObject_t
    {
        unsigned long long frameLastChecked; // Offset: 0x0

        idManagedClassPtr < idEntity > nonNetRelevantObject; // Offset: 0x8

    }; // Size: 0x28

    struct peerNonRelevantObjects_t
    {
        int peerIndex; // Offset: 0x0

        idList < idNetRelevance::nonRelevantObject_t , TAG_IDLIST , false > nonNetRelevantObjects; // Offset: 0x8

    }; // Size: 0x20

    struct attachmentRelevantObject_t
    {
        idEntity* attachedEntity; // Offset: 0x0

        idPlayer* playerClientPtr; // Offset: 0x8

    }; // Size: 0x10

}; // Size: 0x0
