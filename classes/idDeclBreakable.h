struct idDeclBreakable : idDecl
{
    idAtomicString modelName; // Offset: 0x78

    int numPieces; // Offset: 0x80

    idBreakableSettings settings; // Offset: 0x88

    idList < idBreakableExplosion , TAG_FXPHYSICS , false > explosions; // Offset: 0xE8

    idList < idBreakableTrail , TAG_FXPHYSICS , false > trails; // Offset: 0x100

    idList < int , TAG_FXPHYSICS , false > armoredPieces; // Offset: 0x118

    idList < int , TAG_FXPHYSICS , false > healthPieces; // Offset: 0x130

    idList < idBreakableDecal , TAG_FXPHYSICS , false > decals; // Offset: 0x148

    idList < idSphere , TAG_FXPHYSICS , false > damageSpheres; // Offset: 0x160

    idList < idList < int , TAG_FXPHYSICS > , TAG_FXPHYSICS , false > touchingList; // Offset: 0x178

    idList < unsigned int , TAG_FXPHYSICS , false > materialLocks; // Offset: 0x190

    // Editor specific
    idList < idAtomicString , TAG_FXPHYSICS , false > pieceNames; // Offset: 0x1A8

    idList < bool , TAG_FXPHYSICS , false > useablePieces; // Offset: 0x1C0

}; // Size: 0x1D8
