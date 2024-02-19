struct idDemonPlayerFSMState_Ghosting : idDemonPlayerFSMState < idDemonPlayer >
{
    // cache off spawn style
    int spawnStyle; // Offset: 0x30

    bool warpPressed; // Offset: 0x34

    bool spawnPressed; // Offset: 0x35

}; // Size: 0x38
