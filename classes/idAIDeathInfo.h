struct idAIDeathInfo
{
    // entity that attacked the AI
    idManagedClassPtr < idEntity > attacker; // Offset: 0x0

    // entity that did damage to the AI ( may be NULL )
    idManagedClassPtr < idEntity > inflictor; // Offset: 0x20

    // impulse considered to have killed the AI
    idDamageImpulse impulse; // Offset: 0x40

    // time when the AI first ran StartDeath() to attempt to play a death animation or ragdoll
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startDeathTime; // Offset: 0xB78

    // optional index for the death animation chosen (for serialization from server to clients)
    int deathAnimIndex; // Offset: 0xB80

}; // Size: 0xB88
