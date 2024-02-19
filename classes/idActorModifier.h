struct idActorModifier : idEventReceiver
{
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x38

    idActorModifierTimer timer; // Offset: 0x40

    idManagedClassPtr < idActor > parent; // Offset: 0x48

    idManagedClassPtr < idActor > instigator; // Offset: 0x68

    idDeclActorModifier* decl; // Offset: 0x88

    idInventoryItem* item; // Offset: 0x90

    idNetEvent < 15 > added; // Offset: 0x98

    idNetEvent < 15 > activated; // Offset: 0xB0

    idNetEvent < 15 > deactivated; // Offset: 0xC8

    unsigned int uid; // Offset: 0xE0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > creationTime; // Offset: 0xE8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > activationTime; // Offset: 0xF0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > cooldownExpirationTime; // Offset: 0xF8

    unsigned char index; // Offset: 0x100

    bool valid; // Offset: 0x101

    bool active; // Offset: 0x102

    bool fxHandleInit; // Offset: 0x103

    int nextTimerTick; // Offset: 0x104

    idActorModifierTriggerComponent triggerComponent; // Offset: 0x108

    idActorModifierActionComponent actionComponent; // Offset: 0x150

}; // Size: 0x408
