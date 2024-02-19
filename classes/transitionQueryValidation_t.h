struct transitionQueryValidation_t
{
    animValidationSelectionType_t selectType; // Offset: 0x0

    float requiredBodyAlignAngleDot; // Offset: 0x4

    float requiredMoveAlignAngleDot; // Offset: 0x8

    // {{ units = m }}
    float movementDistanceFudge; // Offset: 0xC

    // {{ units = m }}
    float totalDeltaBias_minDist; // Offset: 0x10

    // {{ units = m }}
    float totalDeltaBias_normalizationDist; // Offset: 0x14

    float totalDeltaBias_factor; // Offset: 0x18

    float maxMoveDistanceMultiplier; // Offset: 0x1C

    int allowedFlags; // Offset: 0x20

    int requiredFlags; // Offset: 0x24

    int suggestedFlags; // Offset: 0x28

    float requiredApexAlignAngleDot; // Offset: 0x2C

    bool usePathDirectionForMoveAlign; // Offset: 0x30

    bool usePathDirectionForSourceAlign; // Offset: 0x31

    bool checkMaxMovementDistance; // Offset: 0x32

    bool usePathDirectionForApexAlign; // Offset: 0x33

    bool checkAnimTooShort; // Offset: 0x34

    bool checkAnimTooLong; // Offset: 0x35

    bool navProbeAnimTranslation; // Offset: 0x36

    bool navProbeAnimApex; // Offset: 0x37

    bool navProbeToPathPosition; // Offset: 0x38

    bool allowRejections; // Offset: 0x39

}; // Size: 0x3C
