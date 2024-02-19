struct idLogicNodeModelSceneDirectorControl_v3 : idLogicNodeModel
{
    // Scene decl
    idDeclMidnightScene* scene; // Offset: 0x10

    // Override groups
    bool overrideGroups; // Offset: 0x18

    // If set to non-NONE, will pull from customization item for proper scene decl
    idLogicNodeSceneDirectorControl::customizationSceneOverride_t overrideSceneType; // Offset: 0x1C

    idList < idLogicNodeSceneDirectorControl::group_t , TAG_LOGIC , false > groups; // Offset: 0x20

    idList < idLogicNodeSceneDirectorControl::loop_t , TAG_LOGIC , false > loops; // Offset: 0x38

    idList < idLogicNodeSceneDirectorControl::condition_t , TAG_LOGIC , false > conditions; // Offset: 0x50

}; // Size: 0x68
