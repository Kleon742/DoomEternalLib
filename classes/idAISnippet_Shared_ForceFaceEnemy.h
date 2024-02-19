struct idAISnippet_Shared_ForceFaceEnemy : idAISnippet
{
    // value between 0.0f and 1.0f
    float lerpFactor; // Offset: 0x18

    // if angle to enemy is less than this, don't do the face
    idTypesafeNumber < float , DegreesUnique_t > requiredAngle_min; // Offset: 0x1C

}; // Size: 0x20
