struct idBot_Combat_SyncMeleeEnemy : idBotState
{
    bool moveBlocked; // Offset: 0x130

    bool startedSyncMelee; // Offset: 0x131

    idManagedClassPtr < idAnimatedEntity > syncMeleeTarget; // Offset: 0x138

    idSyncAttackInteraction* syncMeleeInteraction; // Offset: 0x158

}; // Size: 0x160
