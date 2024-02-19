struct aiOrbiterDefinition_t
{
    // normal of attractor plane, typically something like 90 yaw + various pitch increments
    idAngles localSpaceAttractorNormal; // Offset: 0x0

    // desired speed of orbiter {{ units = m / s }}
    float speed; // Offset: 0xC

    // desired radius of orbiter {{ units = m }}
    float radius; // Offset: 0x10

    // add a floor repulsor this above character origin {{ units = m }}
    float floorRepulsorOffset; // Offset: 0x14

    // blah {{ units = m / s }}
    float attractorRate; // Offset: 0x18

    // blah {{ units = m / s }}
    float repulsorRate; // Offset: 0x1C

    // blah {{ units = m / s }}
    float repulsorDist; // Offset: 0x20

}; // Size: 0x24
