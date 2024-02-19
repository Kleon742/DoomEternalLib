// idSpring < idVec3 >
template <typename T>
struct idSpring
{
    // start position of spring (the fixed end)
    T p0; // Offset: 0x0

    // end position of spring(the movable end)
    T p1; // Offset: 0xC

    // current velocity of spring
    T vel; // Offset: 0x18

    // maximum speed, or 0 to ignore
    float maxSpeed; // Offset: 0x24

    // min value for p1
    T pMin; // Offset: 0x28

    // clamp the lower limit or not
    bool hasPMin; // Offset: 0x34

    // max value for p1
    T pMax; // Offset: 0x38

    // clamp the upper limit or not
    bool hasPMax; // Offset: 0x44

    // spring constant
    float k; // Offset: 0x48

    // damping constant
    float c; // Offset: 0x4C

    // mass at the end of spring
    float m; // Offset: 0x50

    // rest length of spring
    float restLength; // Offset: 0x54

}; // Size: 0x58
