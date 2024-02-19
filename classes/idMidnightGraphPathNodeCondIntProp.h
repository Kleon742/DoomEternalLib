struct idMidnightGraphPathNodeCondIntProp : idMidnightGraphPathNodeProp
{
    // set the type on condition
    idMidnight::NodeCondType_t conditionType; // Offset: 0x18

    // define the max value of int managed by the node
    int outputCount; // Offset: 0x0

    // If True, when fired, an output is disabled. When an output is disabled, it can't be fired anymore.
    bool autoDisable; // Offset: 0x0

    // If true, when all outputs have been used, the node is reset. If false, when all outputs have been used, fire the Default output.
    bool looping; // Offset: 0x0

    // If set # and name of outputs is taken from the named enum type.
    idStr enumType; // Offset: 0x28

}; // Size: 0x58
