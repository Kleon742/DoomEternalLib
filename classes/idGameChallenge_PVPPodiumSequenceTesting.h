struct idGameChallenge_PVPPodiumSequenceTesting : idGameChallenge_PVP
{
    // offline lifecycle manager for podium sequence testing
    idOfflinePVPLifecycleManager offlineLifecycleManager; // Offset: 0x44D0

    bool queuePodiumSequence; // Offset: 0x4A98

    podiumSequenceType_t sequenceToRun; // Offset: 0x4A9C

}; // Size: 0x4AA0
