struct idActorModifierAction_Parms
{
    idManagedClassPtr < idEntity > owner; // Offset: 0x0

    idManagedClassPtr < idEntity > target; // Offset: 0x20

    idDeclActorModifier::ActorModifierActionType_t type; // Offset: 0x40

    idDeclActorModifier::ActorModifierAttribute_t attribute; // Offset: 0x44

    idDeclActorModifier::ActorModifierAttributeOperation_t operation; // Offset: 0x48

    idActorModifier* actorModifier; // Offset: 0x50

    idDeclActorModifier* decl; // Offset: 0x58

    idDeclEntityDef* entityDef; // Offset: 0x60

    float damage; // Offset: 0x68

    float value; // Offset: 0x6C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > spawnTime; // Offset: 0x70

    bool predicted; // Offset: 0x78

    bool supportedInCoop; // Offset: 0x79

    idMaterial2* customMaterial; // Offset: 0x80

    idMaterial2* customMaterial3rdPerson; // Offset: 0x88

    idMaterial2* customWeaponMaterial; // Offset: 0x90

    idMaterial2* customWeaponMaterial3rdPerson; // Offset: 0x98

}; // Size: 0xA0
