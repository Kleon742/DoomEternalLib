struct idEntityModifier : idClass
{
    // how far from buffer this will apply to targets
    float radius; // Offset: 0x10

    // this buff will not apply to these monster types
    aiMonsterType_t ignoreMonsterTypes; // Offset: 0x18

    // how long this buff lasts on targets
    idRange < float > durationInSeconds; // Offset: 0x20

    // fx condition to start/stop on entity with buff
    fxCondition_t fxCondition; // Offset: 0x28

    // if true, will check to see if the source of the buff is still alive, and if not, will remove the buff
    bool checkSourceAlive; // Offset: 0x2C

}; // Size: 0x30
