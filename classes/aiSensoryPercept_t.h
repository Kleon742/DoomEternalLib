struct aiSensoryPercept_t
{
    idEntity* ent; // Offset: 0x0

    // clarity of position
    aiPerceptClarity_t clarity_position; // Offset: 0x8

    // clarity of source
    aiPerceptClarity_t clarity_source; // Offset: 0xC

    // {{ units = m }}
    idVec3 origin; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x20

    aiSensoryPerceptType_t type; // Offset: 0x28

}; // Size: 0x30
