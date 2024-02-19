struct contactImpulse_t
{
    // Type of contact
    contactImpulseType_t type; // Offset: 0x0

    // Body creating contact
    int selfId; // Offset: 0x4

    // Body receiving contact
    int bodyId; // Offset: 0x8

    // Physics receiving contact
    int physId; // Offset: 0xC

    // Contact normal, from B to A in world space.
    idVec3 normal; // Offset: 0x10

    // If object B is a triangle or quad, this is plane 0 (needed for welding).
    idVec3 weldNormal; // Offset: 0x1C

    // A value between [0, 1] describing how much friction force has been applied relative to the theoretical friction force for infinite friction ( 0 indicating bodies are sliding against each other and 1 that they didn't)
    float frictionFactor; // Offset: 0x28

    // Number of contacts
    int numContacts; // Offset: 0x2C

    // The impulses applied to each contact point
    float impulses[4]; // Offset: 0x30

    // Contact information from each point
    contactInfo_t contacts[4]; // Offset: 0x40

}; // Size: 0x170
