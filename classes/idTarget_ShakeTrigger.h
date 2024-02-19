struct idTarget_ShakeTrigger : idBloatedEntity
{
    // Time ( in seconds ) to wait between activations
    float delay; // Offset: 0xB88

    // Time ( in seconds ) to randomize each trigger event, 0.5 is probably max
    float diversity; // Offset: 0xB8C

    // amount of shake required to trigger, 0.001 is a good starting point
    float shake; // Offset: 0xB90

    // time to activate this target's targets
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activateTime; // Offset: 0xB98

}; // Size: 0xBA0
