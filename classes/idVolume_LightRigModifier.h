struct idVolume_LightRigModifier : idVolume
{
    // Scale the entity's light rig lights by this scalar.
    float lightRigIntensityScale; // Offset: 0xC20

    // Scale/Tint the color of the light rig lights by this color.
    idColor lightRigColorScale; // Offset: 0xC24

}; // Size: 0xC38
