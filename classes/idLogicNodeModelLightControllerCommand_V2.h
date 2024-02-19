struct idLogicNodeModelLightControllerCommand_V2 : idLogicNodeModel
{
    // __ediconst t idLogicNodeLightControllerCommand::lightControllerCommand_tm_lightcommand; single light command to process table to use for a single command
    idDeclTable* table; // Offset: 0x10

    // material to use for a single command
    idMaterial2* material; // Offset: 0x18

    // intensity scalar
    float intensityScalar; // Offset: 0x20

    // use original color for the fade command
    bool useOriginalColor; // Offset: 0x24

    // execute one command per activate call instead of relying on the command waits
    bool oneCommandPerActivate; // Offset: 0x25

    // whether this node saves its state internally or not
    bool allowSave; // Offset: 0x26

    // Number of times to loop the commands. Specify -1 to loop infinitely.
    int loopCount; // Offset: 0x28

    // list of light commands to process.
    idList < idLogicNodeLightControllerCommand::lightControllerCommandType_t , TAG_LOGIC , false > lightCommands; // Offset: 0x30

    // list of light command info to process
    idList < idLogicNodeLightControllerCommand::lightControllerCommand_t , TAG_LOGIC , false > lightCommandInfo; // Offset: 0x48

}; // Size: 0x60
