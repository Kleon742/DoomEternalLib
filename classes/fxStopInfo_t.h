struct fxStopInfo_t
{
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > actionGroup; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > gameTime; // Offset: 0x8

    fxCondition_t condition; // Offset: 0x10

    fxExtraCondition_t extraCondition; // Offset: 0x14

    idTypesafeTime < int , millisecondUnique_t , 1000 > fadeOutDuration; // Offset: 0x18

    // Don't fade out
    bool immediateStop; // Offset: 0x1C

    // Stop all FX in the group
    bool stopAll; // Offset: 0x1D

    fxEventReplicationType_t replicationType; // Offset: 0x20

}; // Size: 0x28
