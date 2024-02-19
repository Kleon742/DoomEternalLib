struct idBot_Combat_Attack_Run : idBotState
{
    bool moveFailed; // Offset: 0x130

    bool isBackingUp; // Offset: 0x131

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > nextStrafeTime; // Offset: 0x138

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curStrafeTime; // Offset: 0x140

    botRelativeMoveDirection_t strafeDir; // Offset: 0x148

}; // Size: 0x150
