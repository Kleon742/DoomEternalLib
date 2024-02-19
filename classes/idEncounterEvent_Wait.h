struct idEncounterEvent_Wait : idEncounterEvent
{
    // True if a condition has been adjusted internally to pass based on encounter conditions.
    bool adjustedToPass; // Offset: 0x90

    // This is only used for determining if an encounter is blocked by stuck AI. It will be reset if we exceed the testing threshold.
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x98

    bool aiDependant; // Offset: 0xA0

    // disabling highlight ai on encounter finish
    bool aiHighlightDisabled; // Offset: 0xA1

}; // Size: 0xA8
