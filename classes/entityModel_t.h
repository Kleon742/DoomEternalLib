struct entityModel_t
{
    idSpawnId spawnID; // Offset: 0x0

    idEntityPtr_ThreadSafe < idEntity > ent; // Offset: 0x8

    // represents our confidence in the model created from percepts
    aiAwareness_t currentAwareness; // Offset: 0x20

    // how sure we are of position
    aiPerceptClarity_t clarity_position; // Offset: 0x24

    // how sure we are of source
    aiPerceptClarity_t clarity_source; // Offset: 0x28

    idFlags flags; // Offset: 0x2C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastSeenTime; // Offset: 0x30

    // current best-guess of entity origin, created from percepts {{ units = m }}
    idVec3 currentOrigin; // Offset: 0x38

    // last seen origin {{ units = m }}
    idVec3 visibleOrigin; // Offset: 0x44

    // list of sensory percepts we've gotten from this entity
    idCircularBuffer_Scaled < aiSensoryPercept_t > percepts; // Offset: 0x50

    // damages we have done to this entity
    idCircularBuffer_Scaled < trackedDamageDone_t > damage_given; // Offset: 0x70

}; // Size: 0x90
