struct idShared_FaceEnemy : idAIState
{
    // nocomment
    aiFireMode_t fireMode; // Offset: 0x130

    // whether to use the actual enemy position (true) or the known position (false)
    bool useActualEnemy; // Offset: 0x134

    // how far ahead to predict enemy position
    float secondsInFuture; // Offset: 0x138

    // move flags
    moveFlags_t moveFlags; // Offset: 0x140

}; // Size: 0x148
