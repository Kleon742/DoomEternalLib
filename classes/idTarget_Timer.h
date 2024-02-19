struct idTarget_Timer : idTarget
{
    // time in milliseconds
    idTypesafeTime < int , millisecondUnique_t , 1000 > time; // Offset: 0xB88

    // target to call if the timer runs out
    idManagedClassPtr < idEntity > failTarget; // Offset: 0xB90

    // if true, activating the timer a second time wiil stop it
    bool stopOnSecondActivate; // Offset: 0xBB0

    idManagedClassPtr < idEntity > savedActivator; // Offset: 0xBB8

}; // Size: 0xBD8
