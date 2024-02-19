struct idGUIComponent : idClass
{
    // Which SWF file to use.
    idDeclSWF* swfFile; // Offset: 0x10

    // Scale of the GUI.
    float scale; // Offset: 0x18

    // The axis the gui is set on.
    idMat3 axis; // Offset: 0x1C

    // How far away the gui is visible. {{ units = m }}
    float showDistance; // Offset: 0x40

    // commands that execute after initialization.
    idList < guiComponentCommand_t , TAG_IDLIST , false > initialCommands; // Offset: 0x48

    // scale the clip model of the gui by this amount.
    idVec3 clipScale; // Offset: 0x60

    // What tag to attach this to.
    idStr tagName; // Offset: 0x70

    // offset of the position ( if no Tag, off origin ) {{ units = m }}
    idVec3 positionOffset; // Offset: 0xA0

    // if non 0, scale based on distance to this gui.
    float minDistanceScale; // Offset: 0xAC

    // if non 0, scale based on distance to this gui.
    float maxDistanceScale; // Offset: 0xB0

    // Some lighting thing billy made Jeff put in.
    float uiMultiplier; // Offset: 0xB4

    // Dont show the active screen when changing next screen.
    bool noShowActiveOnNextScreen; // Offset: 0xB8

    // billboard the gui.
    bool billboard; // Offset: 0xB9

    idSWF_GameObject swfObject; // Offset: 0xC0

    idList < guiComponentCommand_t , TAG_IDLIST , false > pendingCommands; // Offset: 0x138

    idList < guiComponentCommand_t , TAG_IDLIST , false > processedCommands; // Offset: 0x150

    idManagedClassPtr < idEntity > owningEntity; // Offset: 0x168

    tagData_t tagData; // Offset: 0x188

    int initialCommandsRan; // Offset: 0x1A8

}; // Size: 0x1B0
