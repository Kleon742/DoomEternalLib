struct idInteractable_Challenge_Shrine : idInteractable
{
    idManagedClassPtr < idPlayer > playerActivator; // Offset: 0x2B50

    // location player will restart the map
    idManagedClassPtr < idPlayerStart > succesReturnLocation; // Offset: 0x2B70

    // location player will restart the map
    idManagedClassPtr < idPlayerStart > failureReturnLocation; // Offset: 0x2B90

    // target to activate on challenge failure
    idManagedClassPtr < idEntity > endTarget; // Offset: 0x2BB0

    // boundry that will cause the player to fail when they leave
    idManagedClassPtr < idVolume > arenaBoundry; // Offset: 0x2BD0

}; // Size: 0x2BF0
