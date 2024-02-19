struct idTrigger_StatDrivenEvent : idTrigger
{
    // type of stat driven event to fire off
    statDrivenEvent_t statEventType; // Offset: 0xC90

    // hint decl if we want to force a specific hint ( set statEventType to invalid ), or default to one if no match is found
    idDeclHint* hintDecl; // Offset: 0xC98

    // options for the hint to show
    idDeclHintCollection* hintCollection; // Offset: 0xCA0

    // option to use stats instead of the hintCollection
    bool useStats; // Offset: 0xCA8

    // The amount of time between subsequent fires if not 'fireonce'
    float hintRefireDelaySec; // Offset: 0xCAC

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeSinceLastFire; // Offset: 0xCB0

}; // Size: 0xCB8
