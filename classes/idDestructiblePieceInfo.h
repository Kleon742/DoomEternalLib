struct idDestructiblePieceInfo
{
    // remove physics for this piece. ( static )
    bool enable; // Offset: 0x0

    // collapse and remove this piece.
    bool collapsed; // Offset: 0x1

    // name of the piece ( found in LWO )
    idStr name; // Offset: 0x8

    // physics attributes.
    idDestructiblePhysicsAttribs_t attributes; // Offset: 0x38

    // What happens to the piece when we activate.
    idDestructibleActivateInfo_t activateInfo; // Offset: 0x78

    // FX Decl for the piece.
    idDeclFX* fxDecl; // Offset: 0xE0

    // local offset from entity origin for fx spawning origin
    idVec3 fxOffset; // Offset: 0xE8

    // local axis offset from entity origin for fx spawning origin
    idMat3 fxAxisOffset; // Offset: 0xF4

    // Damage Piece does when it hits.
    idDeclDamage* damage; // Offset: 0x118

    // flags for the piece.
    destructiblePieceFlags_t flags; // Offset: 0x120

}; // Size: 0x128
