struct projectileLaunchData_t
{
    idEntity* attacker; // Offset: 0x0

    idVec3 start; // Offset: 0x8

    idQuat fireAxis; // Offset: 0x14

    idProjectileTarget target; // Offset: 0x28

    float initialSpeed; // Offset: 0x60

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x68

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > launchTimeOverride; // Offset: 0x70

}; // Size: 0x78
