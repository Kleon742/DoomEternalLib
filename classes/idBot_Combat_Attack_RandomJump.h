struct idBot_Combat_Attack_RandomJump : idBotState
{
    bool hasJumped; // Offset: 0x130

    bool isMoving; // Offset: 0x131

    botRelativeMoveDirection_t jumpDir; // Offset: 0x134

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > behaviorFinishedTimer; // Offset: 0x138

}; // Size: 0x140
