struct idBotTrajectoryManager
{
    bool locked; // Offset: 0x0

    int grenadePositionCounter; // Offset: 0x4

    botTrajectoryTargetType_t trajectoryTargetType; // Offset: 0x8

    idDeclThrowable* throwableDecl; // Offset: 0x10

    idBot* owner; // Offset: 0x18

    idTrajectory_Parabolic* bestTrajectoryResult; // Offset: 0x20

    // grenade trajectory prediction and testing.
    idArray < idBotTrajectory_Parabolic , 4 > trajectories; // Offset: 0x28

}; // Size: 0x788
