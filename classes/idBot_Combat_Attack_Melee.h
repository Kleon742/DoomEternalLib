struct idBot_Combat_Attack_Melee : idBotState
{
    bool moveBlocked; // Offset: 0x130

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > behaviorFinishedTimer; // Offset: 0x138

}; // Size: 0x140
