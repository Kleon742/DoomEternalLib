struct idDeclLifeGates_Data : idGameDeclTypeInfo
{
    // How cost extra lives to open the gate.
    int costOfExtraLivesToOpenGate; // Offset: 0x90

    // How many seconds to play animation to open gate
    idTypesafeTime < float , secondUnique_t , 1 > secondsToUnlockGate; // Offset: 0x94

}; // Size: 0x98
