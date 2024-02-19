struct idPendingFullBodyWound_t
{
    idManagedClassPtr < idEntity > attacker; // Offset: 0x0

    idDeclGoreWound* wound; // Offset: 0x20

    bool enable; // Offset: 0x28

    bool meshOnly; // Offset: 0x29

    idVec3 impulseDir; // Offset: 0x2C

    float impuleMagnitude; // Offset: 0x38

    idDamageParms damageParms; // Offset: 0x40

    bool random; // Offset: 0xA90

}; // Size: 0xA98
