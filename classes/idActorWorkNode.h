struct idActorWorkNode : idBloatedEntity
{
    // idle anim webnode to use for autonomous work
    idAnimWebPath_Atomic defaultIdle; // Offset: 0xB88

    // min/max time in seconds an actor should use this node
    idRange < float > duration; // Offset: 0xBC8

    // min/max interval in seconds of use
    idRange < float > interval; // Offset: 0xBD0

    // next time someone can use this node
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextUseTime; // Offset: 0xBD8

}; // Size: 0xBE0
