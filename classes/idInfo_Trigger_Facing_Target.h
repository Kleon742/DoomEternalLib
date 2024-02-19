struct idInfo_Trigger_Facing_Target : idInfo
{
    // area of view that counts as the look at direction {{ units = m }}
    idTypesafeNumber < float , SphereUnique_t > radius; // Offset: 0xB90

    // if true we want to be looking at the sphere, if false just in the angles.
    bool doVerticleTest; // Offset: 0xB94

}; // Size: 0xB98
