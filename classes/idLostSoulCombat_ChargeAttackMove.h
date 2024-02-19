struct idLostSoulCombat_ChargeAttackMove : idAIState
{
    // arrive radius {{ units = m }}
    float arriveRadius; // Offset: 0x130

    // distance to trigger an explosion {{ units = m }}
    float explosionRadius; // Offset: 0x134

    // distance behind the enemy {{ units = m }}
    float overshootDistance; // Offset: 0x138

    // duration of the tracking
    idTypesafeTime < float , secondUnique_t , 1 > trackingDuration; // Offset: 0x13C

    // delay between checks for facing-based tracking
    idTypesafeTime < float , secondUnique_t , 1 > facingBasedTrackingDelay; // Offset: 0x140

    // start timestamp
    idTypesafeTime < float , secondUnique_t , 1 > timestamp; // Offset: 0x144

    // if the enemy is within this arc in front of us, track it!
    idTypesafeNumber < float , DegreesUnique_t > trackingAngle; // Offset: 0x148

    // cosine of m_trackingAngle
    float trackingCos; // Offset: 0x14C

    // whether we're done with the initial, time-based tracking
    bool initialTrackingDone; // Offset: 0x150

}; // Size: 0x158
