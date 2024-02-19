struct automapEncounterLightProperties_t
{
    // The color of the encounter light.
    idColor color; // Offset: 0x0

    // Color of this light's enemy pulse dots and concentric accent lines. Alpha controls light core alpha. If alpha negative, will use the light color.
    idColor pulseColor; // Offset: 0x10

    // Radius of the bounding cylinder of the encounter light.
    float radius; // Offset: 0x20

    // Height of the bounding cylinder of the encounter light.
    float height; // Offset: 0x24

    // Radius of the inner core of the encounter light that pulses with pulseColor. If negative, it will use ringsSpacing value.
    float coreRadius; // Offset: 0x28

    // Max alpha of the light's pulsing inner core.
    float coreMaxAlpha; // Offset: 0x2C

    // The distance between adjacent concentric rings of the light.
    float ringsSpacing; // Offset: 0x30

    // Propagation speed of the pulses originating from the light center.
    float pulseSpeed; // Offset: 0x34

    // This number will be added to the Z position of the entity icon associated with the encounter. Likely needs to be custom for each light base on position offsets of the encounter icon
    float zOffset; // Offset: 0x38

}; // Size: 0x3C
