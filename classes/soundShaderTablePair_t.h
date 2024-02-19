struct soundShaderTablePair_t
{
    // shader to play
    idSoundEvent* soundShader; // Offset: 0x0

    // table to use for value lookup
    idDeclTable* table; // Offset: 0x8

}; // Size: 0x10
