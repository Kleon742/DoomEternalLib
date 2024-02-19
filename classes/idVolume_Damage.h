struct idVolume_Damage : idVolume
{
    // damage to use on the entity that enters the volume
    idDeclDamage* damageDecl; // Offset: 0xC20

    // don't damage entity, just remove it instantly (avoids death anims and such..)
    bool removeInstantly; // Offset: 0xC28

    // applies damage to player
    bool applyDamageToPlayer; // Offset: 0xC29

    // applies damage to demon player
    bool applyDamageToDemonPlayer; // Offset: 0xC2A

    // applies damage to AI
    bool applyDamageToAi; // Offset: 0xC2B

    // don't let the rad meter absorb damage from this specific entity
    bool ignoreRadMeterDamageMitigation; // Offset: 0xC2C

}; // Size: 0xC30
