struct idAutomapInput_t
{
    struct idAutomap_MouseInput_t
    {
        idVec2 leftDragDelta; // Offset: 0x0

        idVec2 rightDragDelta; // Offset: 0x8

        idVec2 middleDragDelta; // Offset: 0x10

        int wheel; // Offset: 0x18

        bool leftButton; // Offset: 0x1C

        bool rightButton; // Offset: 0x1D

        bool middleButton; // Offset: 0x1E

    }; // Size: 0x20

    struct idAutomap_KeyboardInput_t
    {
        bool leftButton; // Offset: 0x0

        bool rightButton; // Offset: 0x1

        bool upButton; // Offset: 0x2

        bool downButton; // Offset: 0x3

        bool cButton; // Offset: 0x4

    }; // Size: 0x5

    struct idAutomap_JoystickInput_t
    {
        idVec2 leftStick; // Offset: 0x0

        idVec2 rightStick; // Offset: 0x8

        bool leftTrigger; // Offset: 0x10

        bool rightTrigger; // Offset: 0x11

        bool directionalPad[4]; // Offset: 0x12

        bool rightStickPress; // Offset: 0x16

        bool leftStickPress; // Offset: 0x17

        bool selectPressed; // Offset: 0x18

    }; // Size: 0x1C

    idAutomapInput_t::idAutomap_MouseInput_t mouse; // Offset: 0x0

    idAutomapInput_t::idAutomap_KeyboardInput_t keyboard; // Offset: 0x20

    idAutomapInput_t::idAutomap_JoystickInput_t joystick; // Offset: 0x28

}; // Size: 0x44
