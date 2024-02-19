struct idAnimator_IK : idAnimator_Base
{
    // enable or disable IK
    bool enabled; // Offset: 0x40

    bool ikInitialized; // Offset: 0x41

    bool ik_activate; // Offset: 0x42

    idSpawnId spawnId; // Offset: 0x44

    idRenderModel* renderModel; // Offset: 0x48

    idJointAnimator* jointAnimator; // Offset: 0x50

    idHavokCollision* havokCollision; // Offset: 0x58

}; // Size: 0x60
