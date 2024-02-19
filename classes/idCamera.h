struct idCamera : idBloatedEntity
{
    idManagedClassPtr < idEntity > activator; // Offset: 0xB88

    // true when InternalActivate is being called -- used to catch cases where GetActivator() or GetPlayerActivator() is used in InternalActivate()
    bool inInternalActivate; // Offset: 0xBA8

    // is the camera active right now?
    bool isActive; // Offset: 0xBA9

}; // Size: 0xBB0
