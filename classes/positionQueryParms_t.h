struct positionQueryParms_t
{
    aiPositioningParms_t declParms; // Offset: 0x0

    // {{ units = m }}
    idVec3 enemyOrigin; // Offset: 0x150

    // {{ units = m }}
    idVec3 aiOrigin; // Offset: 0x15C

    idVec3 dirToEnemy; // Offset: 0x168

    idVec3 enemyViewDir; // Offset: 0x174

}; // Size: 0x180
