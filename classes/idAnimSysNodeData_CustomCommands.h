struct idAnimSysNodeData_CustomCommands : idAnimSysNodeData
{
    enum customLoopMode_t : int
    {
        CUSTOMLOOPMODE_REPEAT = 0,
        CUSTOMLOOPMODE_CLAMP = 1,
        CUSTOMLOOPMODE_FIXEDFRAME = 2
    };

    struct idCommandEntry
    {
        // Animation to play
        idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animAlias; // Offset: 0x0

        // Loopmode
        idAnimSysNodeData_CustomCommands::customLoopMode_t loopMode; // Offset: 0x4

        // Which blend operation to use (if blending)
        idMD6Blend::blendOp_t blendOp; // Offset: 0x8

        // External loopcount controller (0-1)
        idAtomicString externalLoopCountRef; // Offset: 0x10

        // External blend value
        idAtomicString externalBlendValueRef; // Offset: 0x18

        // Take jointfilter from this layer
        idAtomicString jointFilterFromLayer; // Offset: 0x20

        // Which frame to use if in fixed frame mode
        float fixedFrame; // Offset: 0x28

        // Which frame to use if in fixed frame mode
        float fixedBlendValue; // Offset: 0x2C

    }; // Size: 0x30

    // Entries
    idList < idAnimSysNodeData_CustomCommands::idCommandEntry , TAG_IDLIST , false > commandEntries; // Offset: 0xB8

    // Which blend operation to use to blend constructed pose to the rest of the animsystem
    idMD6Blend::blendOp_t blendOp; // Offset: 0xD0

}; // Size: 0xD8
