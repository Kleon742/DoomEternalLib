struct idDemonProwlerTeleportTarget
{
    // the demon that sees this
    idManagedClassPtr < idDemonPlayer_Prowler > ownerDemon; // Offset: 0x0

    // is model visible
    bool visible; // Offset: 0x20

    // how we're posing at end of teleport
    prowlerTeleportType_t teleportType; // Offset: 0x24

    // position of model {{ units = m }}
    idVec3 position; // Offset: 0x28

    // orientation of model
    idMat3 orient; // Offset: 0x34

    // model for the target
    idDeclMD6* declModel; // Offset: 0x58

    // material used to render the model
    idMaterial2* modelMaterial; // Offset: 0x60

    // anim web for the target
    idDeclAnimWeb* declAnimWeb; // Offset: 0x68

    // starting sub web
    idStr startSubWeb; // Offset: 0x70

    // starting anim node
    idStr startNode; // Offset: 0xA0

    // the tree animator aka model
    idRenderModelSkinned* renderModelSkinned; // Offset: 0xD0

    idAnimStack animStack; // Offset: 0xD8

    // animWeb player
    idAnimator_GameAnimWeb webAnimator; // Offset: 0xD18

    // fx decl to use for the hands fxManager
    idDeclFX* fxDecl; // Offset: 0x15A0

    // the global fx manager handle
    idHandle < unsigned long long , unsigned long long , UINT64_MAX > fxHandle; // Offset: 0x15A8

    bool fxHandleInit; // Offset: 0x15B0

    // color of the outline
    idColor outlineColor; // Offset: 0x15B4

    // idRenderModelAugmentOutline *outlineModel; outline around our target Ribbon manager for the target beam
    idRibbon2 ribbon; // Offset: 0x15C8

    // Ribbon viewAxis-aligned start {{ units = m }}
    idVec3 ribbonStartOffset; // Offset: 0x16E0

    // Ribbon targetAxis-aligned end {{ units = m }}
    idVec3 ribbonEndOffset; // Offset: 0x16EC

}; // Size: 0x16F8
