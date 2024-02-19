struct idEffectPhysicsDebrisEmitter
{
    struct emitBufferItem_t
    {
        // {{ units = m }}
        idVec3 pos; // Offset: 0x0

        idVec3 normal; // Offset: 0xC

        int count; // Offset: 0x18

    }; // Size: 0x1C

    idEffectPhysicsPieceEmitter* piecePhysics; // Offset: 0x8

    idEffectPhysicsDebrisEmitter::emitBufferItem_t emitBuffer[10]; // Offset: 0x10

    // Current position in emitBuffer
    int emitBufferPos; // Offset: 0x128

    int serializeEmitCount; // Offset: 0x12C

    // Used to skip first frame so we don't emit a bunch of debris all at once
    bool skipFirstFrame; // Offset: 0x130

    bool active; // Offset: 0x131

    idRandom random; // Offset: 0x134

}; // Size: 0x138
