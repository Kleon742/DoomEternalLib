struct idDemonPlayerFSMState_Dead : idDemonPlayerFSMState < idDemonPlayer >
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > hideDemonTime; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > removeDemonTime; // Offset: 0x38

    bool triedToHideDemon; // Offset: 0x40

    bool skipNextCorpseCreate; // Offset: 0x41

}; // Size: 0x48
