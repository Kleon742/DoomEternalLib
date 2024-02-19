struct socialPercept_t
{
    // idVec3ownerOrigin; {{ units = m }}
    idVec3 perceptOrigin; // Offset: 0x0

    // {{ units = m }}
    idRange < float > distance; // Offset: 0xC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timestamp; // Offset: 0x18

    idAtomicString ownerFactionName; // Offset: 0x20

    float value; // Offset: 0x28

    // total number of members at node when percept was added ( faction vs vaction )
    int numMembers; // Offset: 0x2C

    // for aggregation
    int numPercepts; // Offset: 0x30

    socialPerceptType_t type; // Offset: 0x34

    // whether other ai was visible at time of percept
    bool visible; // Offset: 0x38

}; // Size: 0x40
