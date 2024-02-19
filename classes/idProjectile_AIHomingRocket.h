struct idProjectile_AIHomingRocket : idProjectile_Rocket
{
    seekState_t previousSeekState; // Offset: 0x3038

    idVec3 startingTargetDirection; // Offset: 0x303C

}; // Size: 0x3048
