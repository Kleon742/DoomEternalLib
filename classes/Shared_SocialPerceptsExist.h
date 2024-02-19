struct Shared_SocialPerceptsExist : idAIStateTransition
{
    // look for percepts from entities in this FOV
    idTypesafeNumber < float , DegreesUnique_t > fov; // Offset: 0xF8

    // look for any percepts of this type
    socialPerceptType_t perceptTypes; // Offset: 0xFC

    // look for any percepts within this time in the past
    idTypesafeTime < float , secondUnique_t , 1 > secondsInPast; // Offset: 0x100

    // min/max range of instances to look for ( per entity )
    idRange < int > numPercepts; // Offset: 0x104

}; // Size: 0x110
