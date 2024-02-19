struct idLogicNodeModelLightControllerCommand : idLogicNodeModel
{
    // table to use for a single command
    idDeclTable* table; // Offset: 0x10

    // material to use for a single command
    idMaterial2* material; // Offset: 0x18

    // intensity scalar
    float intensityScalar; // Offset: 0x20

    // list of light commands to process.
    idList < idLogicNodeLightControllerCommand::lightControllerCommandType_t , TAG_LOGIC , false > lightCommands; // Offset: 0x28

    // list of light command info to process
    idList < idLogicNodeLightControllerCommand::lightControllerCommand_t , TAG_LOGIC , false > lightCommandInfo; // Offset: 0x40

}; // Size: 0x58
