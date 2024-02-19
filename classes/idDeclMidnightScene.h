struct idDeclMidnightScene : idDeclTypeInfo
{
    enum MidnightFileVersion : int
    {
        MFV_INITIAL_VERSION = 0,
        MFV_64BIT_OBJECT_HANDLE = 1
    };

    struct groupNameUpdate
    {
        idAtomicString oldName; // Offset: 0x0

        idAtomicString newName; // Offset: 0x8

    }; // Size: 0x10

    // data Store the version of the midnight file format
    idDeclMidnightScene::MidnightFileVersion fileVersion; // Offset: 0x90

    // Store the list of Midnight settings
    idMidnightSettings_t settings; // Offset: 0x98

    // The user-defined folders used to store groups. Groups that aren't in a folder stay at root level in the editor.
    idList < idMidnightGroupFolder , TAG_IDLIST , false > groupFolders; // Offset: 0xC8

    // Store the list of group infos
    idList < idMidnightGroupInfo , TAG_ARK_MIDNIGHT , false > groupsInfo; // Offset: 0xE0

    // list of scene of the midnight
    idList < idMidnightScene * , TAG_ARK_MIDNIGHT , false > scenes; // Offset: 0xF8

    // list of nodes of the midnight
    idList < idMidnightGraphPathNode * , TAG_ARK_MIDNIGHT , false > nodes; // Offset: 0x110

    // Store the info on the first element of midnight
    idMidnightGraphNextInfo firstElement; // Offset: 0x128

    // list of out point for the midnight
    idList < idMidnightOutInfo , TAG_ARK_MIDNIGHT , false > outPointsInfo; // Offset: 0x130

    // The outside scene containing the keys outside the midnight but in the timeline
    idTypeInfoObjectPtr < idMidnightScene > sceneOut; // Offset: 0x148

    // the node position
    idVec2 entryNodePos; // Offset: 0x158

    // the node position
    idVec2 outNodePos; // Offset: 0x160

    // control points for connections between graph nodes
    idList < idMidnightConnectionControlPoint , TAG_IDLIST , false > connectionControlPoints; // Offset: 0x168

    // Settings to use when capturing the midnight.
    idMidnightCaptureSettings_t captureSettings; // Offset: 0x180

    // The name of the map that this scene is used in. Only used by the editor.
    idStrMapName relevantMapName; // Offset: 0x1D8

    // A list of the refmaps that should be opened when the map is opened from the Scene Directory. Only used by the editor.
    idList < idStrMapName , TAG_IDLIST , false > relaventRefmapNames; // Offset: 0x208

    // indicate if the midnight is saved in an old format, and if we should resave it.
    bool fileVersionChanged; // Offset: 0x220

    bool muteKeyUpdatedEvent; // Offset: 0x221

    idList < idMidnightChangeListenerInterface * , TAG_ARK_MIDNIGHT , false > updateListeners; // Offset: 0x228

}; // Size: 0x240
