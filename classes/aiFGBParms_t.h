struct aiFGBParms_t
{
    idManagedClassPtr < idEntity > target; // Offset: 0x0

    idManagedClassPtr < idEntity > attacker; // Offset: 0x20

    idVec3 impulseDir; // Offset: 0x40

    idDamageParms damageParms; // Offset: 0x50

    idDeclGoreWound* wound; // Offset: 0xAA0

}; // Size: 0xAA8
