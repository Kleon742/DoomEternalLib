struct idMidnightScene : idClass
{
    // list of the group
    idList < idMidnightGroup * , TAG_ARK_MIDNIGHT , false > groups; // Offset: 0x10

    // store the handle of the scene
    idMidnightSceneHandle handle; // Offset: 0x28

    // scene properties
    idMidnightSceneProperties properties; // Offset: 0x40

    // define next element of the scene
    idMidnightGraphNextInfo nextElement; // Offset: 0x98

    // the node position
    idVec2 nodePos; // Offset: 0xA0

}; // Size: 0xA8
