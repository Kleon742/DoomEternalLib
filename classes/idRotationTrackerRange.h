struct idRotationTrackerRange
{
    // max yaw delta to left of model forward
    idTypesafeNumber < float , DegreesUnique_t > minYaw; // Offset: 0x0

    // max yaw delta to right of model forward
    idTypesafeNumber < float , DegreesUnique_t > maxYaw; // Offset: 0x4

    // max pitch delta up from model forward
    idTypesafeNumber < float , DegreesUnique_t > minPitch; // Offset: 0x8

    // max pitch delta down from model forward
    idTypesafeNumber < float , DegreesUnique_t > maxPitch; // Offset: 0xC

    // min/max yaw outside of which AI should do a stationary turn
    idRange < float > turnYaw; // Offset: 0x10

    // when turning left, how much to offset our ideal dir so the turn overcorrects
    idTypesafeNumber < float , DegreesUnique_t > turnYawOffset_left; // Offset: 0x18

    // when turning right, how much to offset our ideal dir so the turn overcorrects
    idTypesafeNumber < float , DegreesUnique_t > turnYawOffset_right; // Offset: 0x1C

    // optional scalar for stationary turn anim durations -- used for predicting target pos during turn check
    float turnAnimDurationScalar; // Offset: 0x20

}; // Size: 0x24
