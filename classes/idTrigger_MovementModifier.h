struct idTrigger_MovementModifier : idTrigger
{
    // the percentage scalar to modify the movement of the player by,[ m_speedScalar >= 0.0f ]
    float speedScalar; // Offset: 0xC90

    // time to reach the full speed scalar modifier [ m_scalarTime >= 0 ]
    idTypesafeTime < int , millisecondUnique_t , 1000 > scalarTime; // Offset: 0xC94

    idList < playerSpeedModifierParms_t , TAG_IDLIST , false > currentPlayerModifiers; // Offset: 0xC98

}; // Size: 0xCB0
