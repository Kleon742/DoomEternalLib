struct aiSocialResponse_t
{
    // the kind of percepts that will provoke this response
    socialPerceptType_t perceptType; // Offset: 0x0

    // how long in past we will check for those percepts
    idTypesafeTime < float , secondUnique_t , 1 > triggerWindow; // Offset: 0x4

    // number of times this percept must occur inside trigger window
    int numRequired; // Offset: 0x8

    // total value that must be accumulated inside trigger window ( contextual )
    float valueRequired; // Offset: 0xC

    // min and max distance this response is valid within {{ units = m }}
    idRange < float > range; // Offset: 0x10

    // min and max size of the group I'm in, by faction, to trigger this response ( faction vs faction only )
    idRange < int > myGroupSize; // Offset: 0x18

    // min and max size of the target faction to trigger this response ( faction vs faction only )
    idRange < int > otherGroupSize; // Offset: 0x20

    // the relation that is provoked
    socialRelation_t response; // Offset: 0x28

    // used to turn on/off entire sets of responses
    int depthCategory; // Offset: 0x34

}; // Size: 0x38
