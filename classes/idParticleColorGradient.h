struct idParticleColorGradient
{
    struct gradientControlPoint_t
    {
        // color
        idColor color; // Offset: 0x0

        // time
        float time; // Offset: 0x10

    }; // Size: 0x14

    // initial color
    idColor initialColor; // Offset: 0x0

    // following colors
    idList < idParticleColorGradient::gradientControlPoint_t , TAG_IDLIST , false > gradient; // Offset: 0x10

    // Function of
    particleFunctionOf_t functionOf; // Offset: 0x28

}; // Size: 0x30
