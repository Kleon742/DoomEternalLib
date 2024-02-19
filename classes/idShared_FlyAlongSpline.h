struct idShared_FlyAlongSpline : idAIState
{
    // requested walk state
    walkState_t walkState; // Offset: 0x130

    // arrival radius
    float arrivalRadius; // Offset: 0x134

    // arrival height
    float arrivalHeight; // Offset: 0x138

    // additional move flags
    moveFlags_t moveFlags; // Offset: 0x140

    // maximum allowable stuck time
    idTypesafeTime < float , secondUnique_t , 1 > maxStuckTime; // Offset: 0x148

    // last stuck time
    idTypesafeTime < float , secondUnique_t , 1 > lastStuckTimestamp; // Offset: 0x14C

    // previous location {{ units = m }}
    idVec3 previousLocation; // Offset: 0x150

    // whether the AI was stuck in the previous frame
    bool wasStuck; // Offset: 0x15C

}; // Size: 0x160
