struct idTrajectory_Parabolic : idTrajectory
{
    struct parabolicParms_t : idTrajectory::idTrajectory::parms_t
    {
        // calculated launch angle
        float angle; // Offset: 0xC

        // maximum height of the trajectory {{ units = m }}
        float maxHeight; // Offset: 0x10

        // speed in horizontal plane {{ units = m / s }}
        float horizSpeed; // Offset: 0x14

        // speed in vertical plane {{ units = m / s }}
        float vertSpeed; // Offset: 0x18

        // 3D velocity needed to hit target {{ units = m / s }}
        idVec3 velocity; // Offset: 0x1C

    }; // Size: 0x28

    struct parabolicResults_t : idTrajectory::idTrajectory::results_t
    {
        // the total distance traveled {{ units = m * m }}
        float distanceTraveled; // Offset: 0x84

        // number of simulation steps before impact
        int impactSteps; // Offset: 0x88

        // number of steps for a full simulation
        int numSteps; // Offset: 0x8C

    }; // Size: 0x90

    typedef idList < idHavokQueryId , TAG_AI_MISC > queryList_t;

    // starting point of trajectory {{ units = m }}
    idVec3 start; // Offset: 0x10

    // ideal destination of trajectory {{ units = m }}
    idVec3 dest; // Offset: 0x1C

    // gravity used to calculate trajectory {{ units = m / ( s * s ) }}
    float gravity; // Offset: 0x28

    // the maximum number of steps a trajectory test can be composed of
    int maxQueries; // Offset: 0x2C

    // depending on how we solve the trajectory, we may have more than one solution to choose from
    int numTrajectories; // Offset: 0x30

    // parameters for each trajectory
    idTrajectory_Parabolic::parabolicParms_t parms[2]; // Offset: 0x34

    // pending collision queryLists for each trajectory (deferred queryLists only)
    idList < idHavokQueryId , TAG_AI_MISC , false > queryLists[2]; // Offset: 0x88

    // results of a Test() simulation run for each trajectory
    idTrajectory_Parabolic::parabolicResults_t results[2]; // Offset: 0xB8

}; // Size: 0x1D8
