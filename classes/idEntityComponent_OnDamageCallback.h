struct idEntityComponent_OnDamageCallback : idEntityComponent
{
    // String to pass to the AI reciever when the entity is damaged
    idAtomicString damagedMemoryString; // Offset: 0x10

    // String to pass to the AI reciever when the entity is destroyed
    idAtomicString destroyedMemoryString; // Offset: 0x18

    // AI reciever
    idManagedClassPtr < idEntity > reciever; // Offset: 0x20

}; // Size: 0x40
