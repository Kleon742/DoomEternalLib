struct idDemonPlayerHorns : idEventReceiver
{
    // the demon the hands go with.
    idManagedClassPtr < idDemonPlayer > ownerDemon; // Offset: 0x38

    idRenderModelSkinned* renderModel; // Offset: 0x58

    idAnimStack animStack; // Offset: 0x60

    // animWeb player
    idAnimator_AnimWeb webAnimator; // Offset: 0xCA0

    // true if render models are actually linked from the renderer
    bool linked; // Offset: 0x1510

    // defaults to declModel, but can be changed by customization
    idDeclMD6* hornModelToUse; // Offset: 0x1518

    // Model for this demon to use for first person horns.
    idDeclMD6* declModel; // Offset: 0x1520

    // Anim web for this demon to use for first person horns.
    idDeclAnimWeb* declAnimWeb; // Offset: 0x1528

    // starting sub web for the hands
    idStr startSubWeb; // Offset: 0x1530

    // starting anim node for the hands
    idStr startNode; // Offset: 0x1560

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x1590

    // cache whether we are initialized
    bool fxHandleInit; // Offset: 0x1598

    // fx decl to use for the hands fxManager
    idDeclFX* fxDecl; // Offset: 0x15A0

}; // Size: 0x15A8
