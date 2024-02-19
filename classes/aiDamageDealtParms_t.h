struct aiDamageDealtParms_t
{
    idManagedClassPtr < idEntity > victim; // Offset: 0x0

    idDamageParms damageParms; // Offset: 0x20

    float damageScale; // Offset: 0xA70

    idVec3 damageDir; // Offset: 0xA74

    bool victimAuthoritative; // Offset: 0xA80

}; // Size: 0xA88
