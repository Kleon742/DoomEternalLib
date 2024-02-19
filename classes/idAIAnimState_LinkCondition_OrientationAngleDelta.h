struct idAIAnimState_LinkCondition_OrientationAngleDelta : idAIAnimState_LinkCondition
{
    enum orientationType_t : int
    {
        BODY_IDEAL = 0,
        BODY_CURRENT = 1,
        MOVE_IDEAL = 2,
        MOVE_CURRENT = 3
    };

    // delta is from here
    idAIAnimState_LinkCondition_OrientationAngleDelta::orientationType_t sourceOrientation; // Offset: 0x18

    // to here
    idAIAnimState_LinkCondition_OrientationAngleDelta::orientationType_t targetOrientation; // Offset: 0x1C

    // pass if delta yaw is over this
    idTypesafeNumber < float , DegreesUnique_t > minYaw; // Offset: 0x20

    // pass if delta yaw is under this
    idTypesafeNumber < float , DegreesUnique_t > maxYaw; // Offset: 0x24

}; // Size: 0x28
