struct idDeclMasterLevelMissionSelectInfo
{
    enum masterLevelMissionType_t : int
    {
        MASTER_LEVEL_MISSION_TYPE_UNKNOWN = 0,
        MASTER_LEVEL_MISSION_TYPE_STANDARD = 1,
        MASTER_LEVEL_MISSION_TYPE_ULTRA_NIGHTMARE = 2,
        MASTER_LEVEL_MISSION_TYPE_EXTRA_LIFE = 3,
        MASTER_LEVEL_MISSION_TYPE_MUTATOR = 4
    };

    // The stat that indicates this is complete
    gameStat_t completeStat; // Offset: 0x0

    // The mission type
    idDeclMasterLevelMissionSelectInfo::masterLevelMissionType_t missionType; // Offset: 0x4

    // The name of this Mission
    idStrId missionName; // Offset: 0x8

    // Icon associated with this mission
    idMaterial2* missionIcon; // Offset: 0x10

    // Map load
    idDeclMapLoad* mapLoad; // Offset: 0x18

    // List of challenges
    idList < idDeclMasterLevelMissionInfo , TAG_IDLIST , false > missionInfoList; // Offset: 0x20

}; // Size: 0x38
