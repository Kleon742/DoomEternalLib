struct idAnimator_SyncEntity : idAnimator_AnimWeb
{
    struct blendVar_t
    {
        // the name of the blend variable to set
        idAtomicString blendVarName; // Offset: 0x0

        // the value of the blend variable to set
        float blendVarValue; // Offset: 0x8

    }; // Size: 0x10

    idSyncEntity* syncEntity; // Offset: 0x870

    // the amount to scale the anim by
    float scaledAnimRate; // Offset: 0x878

    idAnimator_SyncEntity::blendVar_t blendVarChangeEvents[11]; // Offset: 0x880

}; // Size: 0x930
