struct idDeclUICustomData_Widget_HordeProgress : idGameDeclTypeInfo
{
    struct defaultInfo_t
    {
        // Default notification name, if none specified
        idStrId notificationName; // Offset: 0x0

        // Default notification icon, if none specified
        idMaterial2* notificationIcon; // Offset: 0x8

        // Default notification desc, if none specified
        idStrId notificationDesc; // Offset: 0x10

    }; // Size: 0x18

    struct nodeInfo_t
    {
        enum hordeNodeType_t : int
        {
            HORDE_NODE_INVALID = -1,
            HORDE_NODE_DEFAULT = 0,
            HORDE_NODE_ARENA = 1,
            HORDE_NODE_BONUS = 2,
            HORDE_NODE_MAX = 3
        };

        enum hordeArenaWaves_t : unsigned char
        {
            WAVE_NONE = 0,
            WAVE_ONE = 1,
            WAVE_TWO = 2,
            WAVE_THREE = 4,
            WAVE_FOUR = 8,
            WAVE_FIVE = 16,
            WAVE_SIX = 32,
            WAVE_SEVEN = 64,
            WAVE_EIGHT = 128
        };

        // Type of Node
        idDeclUICustomData_Widget_HordeProgress::nodeInfo_t::hordeNodeType_t nodeType; // Offset: 0x0

        // Icon
        idMaterial2* nodeIcon; // Offset: 0x8

        // Default notification name, if none specified
        idStrId nodeName; // Offset: 0x10

        // Total number of arena arounds
        short arenaWaves; // Offset: 0x14

        // Which round(s) are locked
        idDeclUICustomData_Widget_HordeProgress::nodeInfo_t::hordeArenaWaves_t lockedArenaWaves; // Offset: 0x16

        // how much padding between nodes in the swf file, this is a gross hacky way to do this
        int spacing; // Offset: 0x18

    }; // Size: 0x20

    struct levelInfo_t
    {
        // Img for unplayed levels
        idMaterial2* levelIconOff; // Offset: 0x0

        // Img for current level
        idMaterial2* levelIconActive; // Offset: 0x8

        // Img for beaten levels
        idMaterial2* levelIconBeaten; // Offset: 0x10

        // Default notification name, if none specified
        idStrId levelName; // Offset: 0x18

    }; // Size: 0x20

    // Default info
    idDeclUICustomData_Widget_HordeProgress::defaultInfo_t defaultInfo; // Offset: 0x90

    // Default info for esclation complete
    idDeclUICustomData_Widget_HordeProgress::defaultInfo_t defaultInfo2; // Offset: 0xA8

    // data to drive how many nodes the widget should have
    idList < idDeclUICustomData_Widget_HordeProgress::nodeInfo_t , TAG_IDLIST , false > progressNodes; // Offset: 0xC0

    // data for horde levels
    idList < idDeclUICustomData_Widget_HordeProgress::levelInfo_t , TAG_IDLIST , false > hordeLevels; // Offset: 0xD8

}; // Size: 0xF0
