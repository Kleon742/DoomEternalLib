struct idAnimatedSimple_Faust : idAnimatedSimple_AnimSys
{
    enum weaponMode_t : int
    {
        WEAPONMODE_CHAINGUN = 0,
        WEAPONMODE_ROCKETS = 1
    };

    enum nodeFlags_t : int
    {
        NODEFLAG_FLAG1 = 1,
        NODEFLAG_FLAG2 = 2,
        NODEFLAG_FLAG3 = 4,
        NODEFLAG_FLAG4 = 8
    };

    enum animSysEvents_t : int
    {
        EVENT_WEAPONPOD_CHAINGUN_TO_ROCKET = 0,
        EVENT_WEAPONPOD_ROCKET_TO_CHAINGUN = 1,
        EVENT_CHAINGUN_SHOOT = 2,
        EVENT_CHAINGUN_COOLDOWN = 3,
        EVENT_ROCKETS_SHOOT = 4,
        EVENT_ROCKETS_RELOAD = 5,
        EVENT_FIREMODESWITCH_DOWNUP = 6,
        EVENT_FIREMODESWITCH_UPDOWN = 7,
        EVENT_WHEELSWITCHRIGHT_START = 8,
        EVENT_WHEELSWITCHRIGHT_END = 9,
        EVENT_GRIPCLAW_GRIP_TO_HAMMER = 10,
        EVENT_GRIPCLAW_HAMMER_TO_GRIP = 11,
        EVENT_NUM = 12
    };

    enum animSysLayers_t : int
    {
        LAYER_MOVEMENT = 0,
        LAYER_WEAPONPOD = 1,
        LAYER_ROCKETS = 2,
        LAYER_ROCKETSRELOAD = 3,
        LAYER_CHAINGUN = 4,
        LAYER_GRIPCLAW_LEFT = 5,
        LAYER_GRIPCLAW_RIGHT = 6,
        LAYER_SPECIALATTACK = 7,
        LAYER_STEERINGWHEEL = 8,
        LAYER_WHEELSWITCH_LEFT = 9,
        LAYER_WHEELSWITCH_RIGHT = 10,
        LAYER_FIREMODESWITCH = 11,
        LAYER_ADDITIVETURNANIMATOR = 12,
        LAYER_NUM = 13
    };

    idAnimSysNodeData::idAnimSysNodeEvent animSysEvents[12]; // Offset: 0x1B60

    idIndex < int , idAnimSysLayer::invalidLayerIndex_t , - 1 > animSysLayerIndices[13]; // Offset: 0x1BC0

    // {{ units = m }}
    idVec3 cameraViewOrigin; // Offset: 0x1BF4

    idMat3 cameraViewAxis; // Offset: 0x1C00

    idPlayer* playerUser; // Offset: 0x1C28

    idAnimatedSimple_Faust::weaponMode_t weaponMode; // Offset: 0x1C30

    idSpring < idVec1 > turnSpringLeftRight; // Offset: 0x1C34

    idSpring < idVec1 > turnSpringUpDown; // Offset: 0x1C64

    idSpring < idVec2 > moveSpring; // Offset: 0x1C94

    float steeringWheelLeftRight; // Offset: 0x1CD8

    float steeringWheelUpDown; // Offset: 0x1CDC

    idVec2 dLimit; // Offset: 0x1CE0

    int rocketFireCount; // Offset: 0x1CE8

    bool firingChaingun; // Offset: 0x1CEC

    float leftAdditive; // Offset: 0x1CF0

    float rightAdditive; // Offset: 0x1CF4

    bool leftIsHammer; // Offset: 0x1CF8

    bool rightIsHammer; // Offset: 0x1CF9

}; // Size: 0x1D00
