struct logicNodeAsset_t
{
    // Unique identifier
    unsigned int id; // Offset: 0x0

    // Parent identifier
    unsigned int parentId; // Offset: 0x4

    // Dev mode only
    bool devModeOnly; // Offset: 0x8

    // Comments
    idStr comments; // Offset: 0x10

    // Model
    idTypeInfoObjectPtr < idLogicNodeModel > model; // Offset: 0x40

    // Version number
    int versionNumber; // Offset: 0x50

    // Position
    idVec2 pos; // Offset: 0x54

    // Size
    idVec2 size; // Offset: 0x5C

    // Flipped
    bool flipped; // Offset: 0x64

    // Collapsed
    bool collapsed; // Offset: 0x65

    // Minimized
    bool minimized; // Offset: 0x66

    // Dock state
    logicDockState_t dockState; // Offset: 0x68

    // Pin variables
    idList < logicPinVariableAsset_t , TAG_LOGIC , false > pinVariables; // Offset: 0x70

    idLogicNodeConfiguration configuration; // Offset: 0x88

}; // Size: 0x268
