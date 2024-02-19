struct scalarCompileContext_t
{
    idParticleStageCompiled* stage; // Offset: 0x0

    idList < const idDeclTable * , TAG_PARTICLE , false >* tables; // Offset: 0x8

    idAtomicString overrideNames[4]; // Offset: 0x10

}; // Size: 0x30
