struct bodyMoveAngleBadZoneInfo_t
{
    // min and max model space body orientation angles representing a bad zone
    idRange < float > angleRange; // Offset: 0x0

    // range of foot phases we can start blending from min angle to max angle
    idRange < float > phaseRangeForMinAngle; // Offset: 0x8

    // range of foot phases we can start blending from max angle to min angle
    idRange < float > phaseRangeForMaxAngle; // Offset: 0x10

    // max turn rates for crossing from one side to the other, and vice versa
    idRange < float > maxMoveTurnRates; // Offset: 0x18

    // max turn rates for crossing from one side to the other, and vice versa
    idRange < float > maxBodyTurnRates; // Offset: 0x20

}; // Size: 0x28
