struct idLogicNodeModelSceneDirectorControl : idLogicNodeModel
{
    // Scene decl
    idDeclMidnightScene* scene; // Offset: 0x10

    idList < idAtomicString , TAG_LOGIC , false > groupNames; // Offset: 0x18

    idList < idAtomicString , TAG_LOGIC , false > loopNames; // Offset: 0x30

}; // Size: 0x48
