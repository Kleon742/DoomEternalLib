struct idLogicNodeModelHordeTelemetry : idLogicNodeModel
{
    // What type of round data we are reporting
    idLogicNodeHordeTelemetry::hordeRoundType_t roundType; // Offset: 0x10

    // Name of the telemetry type
    idStr name; // Offset: 0x18

}; // Size: 0x48
