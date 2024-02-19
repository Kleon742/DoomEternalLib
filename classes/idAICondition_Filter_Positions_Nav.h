struct idAICondition_Filter_Positions_Nav : idAICondition
{
    // blah
    idColor debugColor_input; // Offset: 0x18

    // blah
    idColor debugColor_output; // Offset: 0x28

    // look for nav within this distance
    idVec3 searchRadius; // Offset: 0x38

    // if points are outside nav but near, push them onto nav
    bool pushPoints; // Offset: 0x44

    // check navmesh
    bool includeMesh; // Offset: 0x45

    // check dynamic obstacles
    bool includeObstacles; // Offset: 0x46

}; // Size: 0x48
