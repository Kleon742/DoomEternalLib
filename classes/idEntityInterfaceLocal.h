struct idEntityInterfaceLocal : idEntityInterface
{
    // idManagedClassPtr< idEntity >entityPtr;
    idEntity* entityPtr; // Offset: 0x8

    idTypeInfoObject* typeInfoObject; // Offset: 0x10

    idMapInstance* game; // Offset: 0x18

    int refCount; // Offset: 0x20

}; // Size: 0x28
