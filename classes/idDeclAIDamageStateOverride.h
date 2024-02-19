struct idDeclAIDamageStateOverride : idGameDeclTypeInfo
{
    // if this key is activated then this override is active
    idAtomicString activationKey; // Offset: 0x90

    // damage override
    aiDamageStateSDPSEntry_t damageOverride; // Offset: 0x98

}; // Size: 0x138
