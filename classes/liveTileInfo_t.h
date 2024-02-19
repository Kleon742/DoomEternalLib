struct liveTileInfo_t
{
    idStr id; // Offset: 0x0

    idStr briefHeadline; // Offset: 0x30

    idStr briefLeader; // Offset: 0x60

    idStr briefImageId; // Offset: 0x90

    liveTileImageType_t briefImageType; // Offset: 0xC0

    idStr briefImageLocation; // Offset: 0xC8

    idStr articleHeadline; // Offset: 0xF8

    idStr articleBody; // Offset: 0x128

    liveTileArticleLayout_t articleLayout; // Offset: 0x158

    liveTileArticleBodyAlignment_t articleBodyAlignment; // Offset: 0x15C

    idStr articleImageId; // Offset: 0x160

    liveTileImageType_t articleImageType; // Offset: 0x190

    idStr articleImageLocation; // Offset: 0x198

    liveTileActionType_t articleActionType; // Offset: 0x1C8

    idStr articleActionLocation; // Offset: 0x1D0

    idStr articleUnitDescription; // Offset: 0x200

    idTypesafeTime < int , millisecondUnique_t , 1000 > articleInputDelay; // Offset: 0x230

    // 0 if not a community challenge live tile
    long long allPlayersAggregate; // Offset: 0x238

    // 0 if not a community challenge live tile
    long long allPlayersUpdates; // Offset: 0x240

    long long titlePlayersAggregate; // Offset: 0x248

    long long titlePlayersUpdates; // Offset: 0x250

    // empty if not a community challenge liveTile
    idVector < CommunityChallengeRewardData_t > rewards; // Offset: 0x258

    idStr paginatorImageLocation; // Offset: 0x270

    bool isCommunityChallenge; // Offset: 0x2A0

    bool isForced; // Offset: 0x2A1

    int viewLimit; // Offset: 0x2A4

    int priority; // Offset: 0x2A8

    // make close button say "NEXT" instead of "OK"
    bool useNextCloseText; // Offset: 0x2AC

}; // Size: 0x2B0
