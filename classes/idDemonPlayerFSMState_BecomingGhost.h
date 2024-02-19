struct idDemonPlayerFSMState_BecomingGhost : idDemonPlayerFSMState < idDemonPlayer >
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > endTime; // Offset: 0x38

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > totalTime; // Offset: 0x40

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > serverStartTime; // Offset: 0x48

}; // Size: 0x50
