struct idQueuedAnimationHelper
{
    // Data
    idStr alias; // Offset: 0x0

    bool loop; // Offset: 0x30

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationGT; // Offset: 0x38

    idBlendParms blendParms; // Offset: 0x40

}; // Size: 0x68
