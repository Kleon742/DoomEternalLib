struct idParticleStageInstance
{
    // instance type
    particleStageType_t type; // Offset: 0x0

    // name of the stage (stored in particle in system)
    idAtomicString name; // Offset: 0x8

    // stage decl
    idDeclParticleStage* stageDecl; // Offset: 0x10

    // stage index
    int stageIndex; // Offset: 0x18

    // exposed scalars that can be overridden
    idList < particleExposedScalar_t , TAG_IDLIST , false > exposedScalars; // Offset: 0x20

    // stage will not be active if quality level set for the game is lower than this
    particleQualityLevel_t minQualityLevel; // Offset: 0x38

    // stage will not be active if quality level set for the game exceeds this
    particleQualityLevel_t maxQualityLevel; // Offset: 0x3C

    // for editor use only
    bool hidden; // Offset: 0x40

}; // Size: 0x48
