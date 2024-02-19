struct idGameLibEffects
{
    idRenderWorld* world; // Offset: 0x0

    idRenderModelEffects* effectsModel; // Offset: 0x8

    idRenderModelTracers* tracerModel; // Offset: 0x10

    idRenderModelDecal* decalModel; // Offset: 0x18

    idRenderModelBeam* beamModel; // Offset: 0x20

    idRenderModelRibbon* ribbonModel; // Offset: 0x28

    idDeferredDecalManager deferredDecalManager; // Offset: 0x30

    idWeaponTraceManager weaponTraceManager; // Offset: 0x2870

    idFXResourceManager fxResourceManager; // Offset: 0x2C58

    // global weapon impact manager
    idImpactManager weaponImpactManager; // Offset: 0xE488

    // global impact manager
    idImpactManager impactManager; // Offset: 0xE960

    // global fx manager
    idGlobalFXManager globalFXManager; // Offset: 0xEE38

    idRibbonManager ribbonManager; // Offset: 0xEE40

    // defined (ID_DEV_TOOLS)
    bool initialized; // Offset: 0xEE98

}; // Size: 0xEEA0
