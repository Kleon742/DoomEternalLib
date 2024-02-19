struct idBot_Combat_Attack_MovingGrenade : idBotState
{
    bool moveBlocked; // Offset: 0x130

    bool isBackingAway; // Offset: 0x131

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > releaseGrenadeTime; // Offset: 0x138

}; // Size: 0x140
