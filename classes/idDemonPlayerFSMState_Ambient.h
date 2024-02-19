struct idDemonPlayerFSMState_Ambient : idDemonPlayerFSMState < idDemonPlayer >
{
    idVec3 lastPos; // Offset: 0x30

    bool startedBerserkAnims; // Offset: 0x3C

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > berserkLoopStartTime; // Offset: 0x40

}; // Size: 0x48
