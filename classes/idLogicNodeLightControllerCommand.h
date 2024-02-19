struct idLogicNodeLightControllerCommand
{
    enum logicIds_t : int
    {
        INPUT_ACTIVATE = 0,
        OUTPUT_ACTIVATE = 1,
        INPUT_LIGHTS = 2,
        OUTPUT_FADE_COMMAND = 3,
        INPUT_COMMAND = 10
    };

    enum commandVarType_t : int
    {
        CT_COLOR = 0,
        CT_FADE_TIME = 1,
        CT_INTENSITY = 2,
        CT_RADIUS = 3,
        CT_MAX = 4
    };

    enum lightControllerCommandType_t : int
    {
        LC_ACTIVATE_LIGHT = 0,
        LC_DEACTIVATE_LIGHT = 1,
        LC_DISABLE_SHADOWS = 2,
        LC_ENABLE_SHADOWS = 3,
        LC_FADE_ALL = 4,
        LC_FADE_ALL_TO_ORIGINAL = 5,
        LC_FADE_IN = 6,
        LC_FADE_INTENSITY = 7,
        LC_FADE_OUT = 8,
        LC_FADE_RADIUS = 9,
        LC_FADE_TO_COLOR = 10,
        LC_FADE_TO_ORIGINAL_COLOR = 11,
        LC_FADE_WITH_TABLE = 12,
        LC_PLAY_LIGHT_SOUND = 13,
        LC_SET_TABLE = 14,
        LC_SET_ALL = 15,
        LC_SET_ALL_TO_ORIGINAL = 16,
        LC_SET_COLOR = 17,
        LC_SET_INTENSITY = 18,
        LC_SET_MATERIAL = 19,
        LC_SET_ORIGINAL_COLOR = 20,
        LC_SET_RADIUS = 21,
        LC_SET_SHADER = 22,
        LC_STOP_LIGHT_SOUND = 23,
        LC_WAIT_FOR_NEXT_ACTIVATE = 24
    };

    struct lightControllerCommand_t
    {
        // command to send to the lights
        idLogicNodeLightControllerCommand::lightControllerCommandType_t commandType; // Offset: 0x0

        // the color to use in the command
        idColor color; // Offset: 0x4

        // time in secs to use
        idTypesafeTime < int , millisecondUnique_t , 1000 > fadeTimeSec; // Offset: 0x14

        // table for fading
        idDeclTable* fadeTable; // Offset: 0x18

        // the intensity to set the light to
        float intensity; // Offset: 0x20

        // radii along axis {{ units = m }}
        idVec3 radius; // Offset: 0x24

        // the light material to use
        idMaterial2* lightMaterial; // Offset: 0x30

        // scalar value
        float scalar; // Offset: 0x38

        // fade - use the original color as the source of this color fade
        bool fadeUseOriginalColor; // Offset: 0x3C

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeEndTime; // Offset: 0x40

        idTypesafeTime < long long , gameTimeUnique_t , 999960 > fadeStartTime; // Offset: 0x48

        // Created/stored specifically for upgrading this node from old to new. Old value - incrementing integer which was based on enum values
        int oldPinIds[4]; // Offset: 0x50

        // New value - string hash of command type, var type, and index.
        int newPinIds[4]; // Offset: 0x60

    }; // Size: 0x70

    idList < idLogicNodeLightControllerCommand::lightControllerCommand_t , TAG_LOGIC , false > lightCommands; // Offset: 0x0

    idList < idManagedClassPtr < idLight > , TAG_LOGIC , false > lights; // Offset: 0x18

    int lastCheckedCommand; // Offset: 0x30

    // Number of times to loop the commands. Specify -1 to loop infinitely.
    int loopCount; // Offset: 0x34

    // execute one command per activate call instead of relying on the command waits
    bool oneCMDPerActivate; // Offset: 0x38

    bool allowSave; // Offset: 0x39

}; // Size: 0x40
