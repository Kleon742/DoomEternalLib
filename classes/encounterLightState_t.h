struct encounterLightState_t
{
    idVec3 pos; // Offset: 0x0

    idColor color; // Offset: 0xC

    // Alpha value is the max alpha of the light's pulsing inner core.
    idColor pulseColor; // Offset: 0x1C

    float radius; // Offset: 0x2C

    float height; // Offset: 0x30

    float coreRadius; // Offset: 0x34

    float coreAlpha; // Offset: 0x38

    // (unit: sec)
    float pulsePeriod; // Offset: 0x3C

    // Random per-light phase offset, computed on initialization (unit: sec).
    float pulsePhaseOffset; // Offset: 0x40

    // Current phase (unit: sec)
    float pulsePhase; // Offset: 0x44

    float pulseSpeed; // Offset: 0x48

    unsigned char numRings; // Offset: 0x4C

    // u8 normalized
    unsigned char pulseDotsDensity; // Offset: 0x4D

    bool enabled; // Offset: 0x4E

    // Whether or not the fog-of-war inside light's bounding cylinder has been cleared yet.
    bool fogOfWarIsRevealed; // Offset: 0x4F

}; // Size: 0x50
