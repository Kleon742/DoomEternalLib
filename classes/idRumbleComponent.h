struct idRumbleComponent : idClass
{
    struct rumbleEntry_t
    {
        // whether this rumble entry is active
        bool active; // Offset: 0x0

        // position of the rumble {{ units = m }}
        idVec3 position; // Offset: 0x4

        // time rumble started
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x10

        // duration of the rumble. calculated from the max values of each possible rumble entry
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x18

        // decl for static entry rumble decl for using a rumble table. if NULL, uses dynamic entries below
        idDeclRumble* rumbleDecl; // Offset: 0x20

        // values for dynamic entries magnitude of the high frequency controller shake
        float highMag; // Offset: 0x28

        // magnitude of the low frequency controller shake
        float lowMag; // Offset: 0x2C

        // magnitude of the left trigger controller shake
        float leftMag; // Offset: 0x30

        // magnitude of the right trigger controller shake
        float rightMag; // Offset: 0x34

        // duration for high frequency.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > highTime; // Offset: 0x38

        // duration for low frequency.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > lowTime; // Offset: 0x40

        // duration for left trigger frequency.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > leftTime; // Offset: 0x48

        // duration for right trigger frequency.
        idTypesafeTime < long long , gameTimeUnique_t , 999960 > rightTime; // Offset: 0x50

    }; // Size: 0x58

    // owning player id
    int ownerPlayerId; // Offset: 0x10

    // list of all possibly active rumbles
    idStaticList < idRumbleComponent::rumbleEntry_t , 4 , false , TAG_IDLIST > rumbleList; // Offset: 0x18

    // current magnitude of the high frequency controller shake
    float totalHighMag; // Offset: 0x190

    // current magnitude of the low frequency controller shake
    float totalLowMag; // Offset: 0x194

    // current magnitude of the left trigger controller shake
    float totalLeftMag; // Offset: 0x198

    // current magnitude of the right trigger controller shake
    float totalRightMag; // Offset: 0x19C

}; // Size: 0x1A0
