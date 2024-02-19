struct idMenu : idClass
{
    idDeclMenu* menuDecl; // Offset: 0x10

    bool allocateInGlobal; // Offset: 0x18

    bool menuOwnsGui; // Offset: 0x19

    idRenderModelGui* gui; // Offset: 0x20

    idList < idMenuElement * , TAG_IDLIST , false > screens; // Offset: 0x28

    idMenuElement* overlay; // Offset: 0x40

    idMenuElement* backdrop; // Offset: 0x48

    idMenuElement* walkthrough; // Offset: 0x50

    idMenuElement* tutorial; // Offset: 0x58

    idList < idMenuElement * , TAG_IDLIST , false > popups; // Offset: 0x60

    idList < int , TAG_IDLIST , false > activePopups; // Offset: 0x78

    int activeScreen; // Offset: 0x90

    int nextScreen; // Offset: 0x94

    menuTransitionType_t transitionType; // Offset: 0x98

    void (*onScreenChangedCallback)(void * const param , const int oldScreen , const int newScreen , const menuTransitionType_t transitionType); // Offset: 0xA0

    void* callbackUser; // Offset: 0xA8

    bool blockCursor; // Offset: 0xB0

    bool isHidden; // Offset: 0xB1

    bool isDialogActive; // Offset: 0xB2

    bool isNetworkMenu; // Offset: 0xB3

    bool HDRCalibrationActive; // Offset: 0xB4

    bool resetShowJoy1OnPCOnScreenChange; // Offset: 0xB5

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > lastActivateTime; // Offset: 0xB8

    bool renderCommandBarLast; // Offset: 0xC0

    idMenuElement* elementConsumesAllInput; // Offset: 0xC8

    // Menu broadcast system ID
    uint16 menuSysId; // Offset: 0xD0

    // HUD broadcast system ID
    uint16 hudSysId; // Offset: 0xD2

    // Player broadcast system ID
    uint16 playerSysId; // Offset: 0xD4

}; // Size: 0xD8
