struct idLostSoulCombat_ChargeAttackMoveV2 : idAIState
{
    // max speed {{ units = m / s }}
    float maxSpeed; // Offset: 0x130

    // acceleration {{ units = m / ( s * s ) }}
    float acceleration; // Offset: 0x134

    // arrival radius {{ units = m }}
    float arrivalRadius; // Offset: 0x138

    // distance to trigger an explosion {{ units = m }}
    float explosionRadius; // Offset: 0x13C

    // current speed {{ units = m / s }}
    float currentSpeed; // Offset: 0x140

    // start timestamp
    idTypesafeTime < float , secondUnique_t , 1 > timestamp; // Offset: 0x144

    // duration of the tracking
    idTypesafeTime < float , secondUnique_t , 1 > trackingDuration; // Offset: 0x148

    // delay between checks for facing-based tracking
    idTypesafeTime < float , secondUnique_t , 1 > facingBasedTrackingDelay; // Offset: 0x14C

    // maximum allowable stuck time
    idTypesafeTime < float , secondUnique_t , 1 > maxStuckTime; // Offset: 0x150

    // last stuck time
    idTypesafeTime < float , secondUnique_t , 1 > lastStuckTimestamp; // Offset: 0x154

    // if the enemy is within this arc in front of us, track it!
    idTypesafeNumber < float , DegreesUnique_t > trackingAngle; // Offset: 0x158

    // cosine of m_trackingAngle
    float trackingCos; // Offset: 0x15C

    // destination {{ units = m }}
    idVec3 destination; // Offset: 0x160

    // previous location {{ units = m }}
    idVec3 previousLocation; // Offset: 0x16C

    // whether we're done with the initial, time-based tracking
    bool initialTrackingDone; // Offset: 0x178

    // whether the AI was stuck in the previous frame
    bool wasStuck; // Offset: 0x179

}; // Size: 0x180
