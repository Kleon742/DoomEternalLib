struct idPlayerBodyReactionRestrictor_t
{
    enum restriction_t : int
    {
        RESTRICT_FALSE = 0,
        RESTRICT_TRUE = 1,
        RESTRICT_IGNORE = 2
    };

    // name of a specific reaction to block
    idAtomicString name; // Offset: 0x0

    // type of reaction to block
    idPlayerBodyReactionType_t type; // Offset: 0x8

    // test whether the reaction throws the player
    idPlayerBodyReactionRestrictor_t::restriction_t throwsPlayer; // Offset: 0xC

}; // Size: 0x10
