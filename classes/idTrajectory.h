struct idTrajectory : idClass
{
    struct parms_t
    {
        // time of flight
        float time; // Offset: 0x0

        // initial speed {{ units = m / s }}
        float speed; // Offset: 0x4

        // gravity {{ units = m / ( s * s ) }}
        float gravity; // Offset: 0x8

    }; // Size: 0xC

    struct results_t
    {
        // trace result for the first impact
        trace_t impactResult; // Offset: 0x0

        // true if the trajectory impacted a solid
        bool impacted; // Offset: 0x80

    }; // Size: 0x84

}; // Size: 0x10
