struct scoreRow_t
{
    // icon used for the score item
    idMaterial2* icon; // Offset: 0x0

    // name for the score item
    idStr name; // Offset: 0x8

    int value; // Offset: 0x38

    int pointsValue; // Offset: 0x3C

    int previousValue; // Offset: 0x40

    int previousPointsValue; // Offset: 0x44

}; // Size: 0x48
