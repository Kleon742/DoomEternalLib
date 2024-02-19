struct idDeclDestructiblePieceInfo : idDeclTypeInfo
{
    enum destructiblePieceBreakBehavior_t : int
    {
        BREAK_WITH_DAMAGE = 0,
        BREAK_AWAY_FROM_CENTER = 1,
        ZERO_OUT = 2
    };

    struct pieceInfo_t
    {
        // health
        float health; // Offset: 0x0

        // ignores per-piece health and uses overall health
        bool useOverallHealthInstead; // Offset: 0x4

        // behavior
        idDeclDestructiblePieceInfo::destructiblePieceBreakBehavior_t behavior; // Offset: 0x8

        // the delay in secs between when the piece reaches 0 health and when it actually breaks
        float breakDelay; // Offset: 0xC

        // density {{ units = kg / ( m * m * m ) }}
        float density; // Offset: 0x10

        // particle to play
        idDeclParticle* particleSystem; // Offset: 0x18

        // particleAxis
        idMat3 particleAxis; // Offset: 0x20

        // sound to play when broken
        idSoundEvent* soundToPlayWhenBroken; // Offset: 0x48

    }; // Size: 0x50

    // list of destructible piece info
    idList < idDeclDestructiblePieceInfo::pieceInfo_t , TAG_IDLIST , false > destructiblePieceInfo; // Offset: 0x88

    // quick list of pieces that cannot be broken
    idList < int , TAG_IDLIST , false > unbreakablePieceList; // Offset: 0xA0

}; // Size: 0xB8
