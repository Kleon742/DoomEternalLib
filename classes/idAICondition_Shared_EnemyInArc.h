struct idAICondition_Shared_EnemyInArc : idAICondition
{
    // Direction of the test arc
    idTypesafeNumber < float , DegreesUnique_t > arcDirection; // Offset: 0x18

    // The full angle of the arc centered at arcDirection
    idTypesafeNumber < float , DegreesUnique_t > arcWidth; // Offset: 0x1C

    // Optional height test both +/- on the z axis (less that zero bypasses the test)
    float height; // Offset: 0x20

}; // Size: 0x28
