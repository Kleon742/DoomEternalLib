struct fxSetupInfo_t
{
    // forces this setup even if a previous setup already exists for this action group
    bool forceSetup; // Offset: 0x0

    idHandle < unsigned long long , unsigned long long , UINT64_MAX > actionGroup; // Offset: 0x8

    idFXActionGroupOwner* actionGroupOwner; // Offset: 0x10

    idRenderModel* renderModel; // Offset: 0x18

    idJointAnimator* jointAnimator; // Offset: 0x20

    idDeclFX* fxDecl; // Offset: 0x28

    float diversity; // Offset: 0x30

    // use if model visibility is controlled elsewhere, such as in the case of fp_hands
    bool dontCommitRenderModel; // Offset: 0x34

}; // Size: 0x38
