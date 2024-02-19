struct Shared_HasSplineToTarget : idAIStateTransition
{
    // splines we want to try, in order of priority
    idList < splineDefinition_t , TAG_IDLIST , false > splines; // Offset: 0xF8

    // how far ahead of target we should predict
    idTypesafeTime < float , secondUnique_t , 1 > secondsInFuture; // Offset: 0x110

    // spline tests on this granularity
    int subdivisions; // Offset: 0x114

    // do these tests on the splines to determine validity
    splineQueryTestFlags_t testFlags; // Offset: 0x118

}; // Size: 0x120
