struct idHUD_Reticle : idHUDElement
{
    idHUDEvent_ReticleDataUpdate::idReticleData_t currentReticleData; // Offset: 0xF8

    idArray < idSWFWidget_Hud_Reticle * , 37 > reticles; // Offset: 0x208

    int activeReticleStyle; // Offset: 0x330

    idDeclWeaponReticle* activeReticleDecl; // Offset: 0x338

    int debugBarCount; // Offset: 0x340

    idSWFCachedSpriteInstance hitFlashSpr; // Offset: 0x348

    idSWFCachedSpriteInstance hitFlashLoopSpr; // Offset: 0x378

}; // Size: 0x3A8
