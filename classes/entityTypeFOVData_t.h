struct entityTypeFOVData_t
{
    // which type of entity do these FOV values apply to? e.x. idTarget_SmartAIProxy, idAI2, idPlayer, etc.
    idTypeInfoPtr < idEntity > entityClass; // Offset: 0x0

    // FOV of lock-on area (for initial acquisition) for this entity type only
    float lockFOV; // Offset: 0x8

    // FOV to unlock target (or -1 to default to lockFOV) for this entity type only
    float unlockFOV; // Offset: 0xC

    // FOV to use while acquiring a lock-on target (or -1 to default to lockFOV) for this entity type only
    float acquiringFOV; // Offset: 0x10

}; // Size: 0x18
