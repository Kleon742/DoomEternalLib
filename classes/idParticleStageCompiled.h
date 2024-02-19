struct idParticleStageCompiled
{
    particleStageCompilationParameters_t parameters; // Offset: 0x0

    idArray < idVec4 , 256 > commandBuffers[4]; // Offset: 0x110

    int commandBufferCursors[4]; // Offset: 0x4110

    idArray < unsigned int , 4 > childReferences; // Offset: 0x4120

    unsigned int numChildReferences; // Offset: 0x4130

    unsigned int hash; // Offset: 0x4134

}; // Size: 0x4138
