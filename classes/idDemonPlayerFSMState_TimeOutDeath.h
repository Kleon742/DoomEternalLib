struct idDemonPlayerFSMState_TimeOutDeath : idDemonPlayerFSMState < idDemonPlayer >
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeDemonTime; // Offset: 0x30

    bool hasPlayedTimeOutFX; // Offset: 0x38

}; // Size: 0x40
