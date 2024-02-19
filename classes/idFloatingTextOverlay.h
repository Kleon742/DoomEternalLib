struct idFloatingTextOverlay
{
    struct floatingText_t
    {
        idVec3 position; // Offset: 0x0

        idStr txt; // Offset: 0x10

        idColor color; // Offset: 0x40

        float createTime; // Offset: 0x50

        float destroyTime; // Offset: 0x54

        int id; // Offset: 0x58

        bool active; // Offset: 0x5C

        unsigned char type; // Offset: 0x5D

        idVec2 dir; // Offset: 0x60

        idVec2 coordOffset; // Offset: 0x68

        float arcUpVelocity; // Offset: 0x70

    }; // Size: 0x78

    idFloatingTextOverlay::floatingText_t textElems[64]; // Offset: 0x0

    // Loops around from end to beginning of number array.
    int nextTextIndex; // Offset: 0x1E00

    int activeCount; // Offset: 0x1E04

    float fontSize; // Offset: 0x1E08

    float maxFloatingTextLifetime; // Offset: 0x1E0C

    bool stairstepOffset; // Offset: 0x1E10

}; // Size: 0x1E18
