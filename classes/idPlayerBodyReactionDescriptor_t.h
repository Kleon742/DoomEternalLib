struct idPlayerBodyReactionDescriptor_t
{
    // name of a specific reaction
    idAtomicString name; // Offset: 0x0

    // type of reaction
    idPlayerBodyReactionType_t type; // Offset: 0x8

    // reaction intended for living players
    bool useAlive; // Offset: 0x0

    // reaction intended for dead players (allows a 'living' reaction to indicate that it can transition to a dead outcome)
    bool useDead; // Offset: 0x0

    // indicates that the reaction throws the player
    bool throwsPlayer; // Offset: 0x0

    // for use on the ground only and not while jumping or otherwise off the ground
    bool onGroundOnly; // Offset: 0x0

    // for use off the ground only and not on the ground
    bool offGroundOnly; // Offset: 0x0

    // can use when in water
    bool useInWater; // Offset: 0x0

    // cannot use when in water
    bool dontUseInWater; // Offset: 0x0

    // if true then the reaction expects to be moved by external physics
    bool needsPhysics; // Offset: 0x0

    // if true then when there is a choice this will always be chosen, overrides chanceToOccur so that reactions can be 'hidden' and only play when forced
    bool forceOnce; // Offset: 0x0

    // chance to occur when there is a choice with 0 to 1 with 0 = never and 1 = always and -1 = chance based on # of choices, overridden by forceOnce so that reactions can be 'hidden' and only play when forced
    float chanceToOccur; // Offset: 0x10

}; // Size: 0x18
