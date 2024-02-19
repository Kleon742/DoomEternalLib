struct idLogicNodeStringUtils
{
    enum elementType_t : int
    {
        BOOL = 0,
        INT = 1,
        FLOAT = 2,
        VECTOR3 = 3,
        ANGLES = 4,
        SECONDS = 5,
        MILLISECONDS = 6,
        STRING = 7,
        COLOR = 8,
        TIME = 5
    };

    struct element_t
    {
        // Name
        idStr name; // Offset: 0x0

        // Type
        idLogicNodeStringUtils::elementType_t type; // Offset: 0x30

        // Hide input
        bool hideInput; // Offset: 0x34

    }; // Size: 0x38

}; // Size: 0x1
